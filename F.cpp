#include "stdio.h"
#include "iostream"
#include "conio.h"
#include <cstdlib>
#define _USE_MATH_DEFINES
#include <math.h>

int i, j;
float px[100], py[100];
float t21[100], t22[100], tfix[100], teta2[100];
float tan1[100], tan2atas[100], tan2bawah[100], tan2[100], hasiltan1[100], hasiltan2[100], teta1[100];
using namespace std;


int main()
{
	py[1] = 1;
	py[2] = 1;
	py[3] = 1;
	py[4] = 1;
	py[5] = 1;
	py[6] = 1;
	py[7] = 1;
	py[8] = 1;
	py[9] = 1;
	py[10] = 1;
	py[11] = 1;
	py[12] = 1;
	py[13] = 1;
	py[14] = 1;
	py[15] = 1;
	py[16] = 1;
	py[17] = 1;
	py[18] = 1;
	py[19] = 1;
	py[20] = 1;
	py[21] = 1;
	py[22] = 1;
	py[23] = 1;
	py[24] = 1;
	py[25] = 1;
	py[26] = 1;
	py[27] = 1;
	py[28] = 1;
	py[29] = 1;
	py[30] = 1;
	py[31] = 1;
	//MIRING
	py[32] = 1.1;
	py[33] = 1.2;
	py[34] = 1.3;
	py[35] = 1.4;
	py[36] = 1.5;
	py[37] = 1.6;
	py[38] = 1.7;
	py[39] = 1.8;
	py[40] = 1.9;
	py[41] = 2.0;
	//BALIK POSISI
	py[42] = 2.0;
	py[43] = 1.9;
	py[44] = 1.8;
	py[45] = 1.7;
	py[46] = 1.6;
	py[47] = 1.5;
	py[48] = 1.4;
	py[49] = 1.3;
	py[50] = 1.2;
	py[51] = 1.1;
	//MIRING LAGI
	py[52] = 1.0;
	py[53] = 1.0;
	py[54] = 1.0;
	py[55] = 1.0;
	py[56] = 1.0;
	py[57] = 1.0;
	py[58] = 1.0;
	py[59] = 1.0;
	py[60] = 1.0;
	py[61] = 1.0;
	//BELOK
	py[62] = 1.1;
	py[63] = 1.2;
	py[64] = 1.3;
	py[65] = 1.4;
	py[66] = 1.5;
	py[67] = 1.6;
	py[68] = 1.7;
	py[69] = 1.8;
	py[70] = 1.9;
	py[71] = 2.0;


	px[1] = 1.0;
	px[2] = 1.1;
	px[3] = 1.2;
	px[4] = 1.3;
	px[5] = 1.4;
	px[6] = 1.5;
	px[7] = 1.6;
	px[8] = 1.7;
	px[9] = 1.8;
	px[10] = 1.9;
	px[11] = 2.0;
	px[12] = 2.1;
	px[13] = 2.2;
	px[14] = 2.3;
	px[15] = 2.4;
	px[16] = 2.5;
	px[17] = 2.6;
	px[18] = 2.7;
	px[19] = 2.8;
	px[20] = 2.9;
	px[21] = 3.0;
	px[22] = 3.1;
	px[23] = 3.2;
	px[24] = 3.3;
	px[25] = 3.4;
	px[26] = 3.5;
	px[27] = 3.6;
	px[28] = 3.7;
	px[29] = 3.8;
	px[30] = 3.9;
	px[31] = 4.0;
	//MIRING
	px[32] = 4.0;
	px[33] = 4.0;
	px[34] = 4.0;
	px[35] = 4.0;
	px[36] = 4.0;
	px[37] = 4.0;
	px[38] = 4.0;
	px[39] = 4.0;
	px[40] = 4.0;
	px[41] = 4.0;
	//BALIK POSISI
	px[42] = 4.0;
	px[43] = 4.0;
	px[44] = 4.0;
	px[45] = 4.0;
	px[46] = 4.0;
	px[47] = 4.0;
	px[48] = 4.0;
	px[49] = 4.0;
	px[50] = 4.0;
	px[51] = 4.0;
	//MIRING LAGI
	px[52] = 3.9;
	px[53] = 3.8;
	px[54] = 3.7;
	px[55] = 3.6;
	px[56] = 3.5;
	px[57] = 3.4;
	px[58] = 3.3;
	px[59] = 3.2;
	px[60] = 3.1;
	px[61] = 3.0;
	//BELOK
	px[62] = 3.0;
	px[63] = 3.0;
	px[64] = 3.0;
	px[65] = 3.0;
	px[66] = 3.0;
	px[67] = 3.0;
	px[68] = 3.0;
	px[69] = 3.0;
	px[70] = 3.0;
	px[71] = 3.0;


	cout << "Nilai teta 2" << endl;
	for (i = 1; i <= 71; i++)
	{
		t21[i] = (((px[i] * px[i]) + (py[i] * py[i])) - 32);
		t22[i] = 32;
		tfix[i] = t21[i] / t22[i];
		teta2[i] = acos(tfix[i]) * 180.0 / M_PI;
		cout << teta2[i] << " ";
		cout << endl;
	}

	cout << "Nilai teta 1" << endl;
	for (j = 1; j <= 71; j++)
	{
		tan1[j] = px[j] / py[j];
		tan2atas[j] = 4*sin(teta2[j] * M_PI/180);
		tan2bawah[j] = 4+(4*cos(teta2[j] * M_PI / 180));
		tan2[j] = tan2atas[j] / tan2bawah[j];
		hasiltan1[j] = atan(tan1[j]) * 180.0 / M_PI;
		hasiltan2[j] = atan(tan2[j]) * 180.0 / M_PI;
		teta1[j] = hasiltan1[j] - hasiltan2[j];
		cout << teta1[j] << " ";
		cout << endl;
	}
	system("pause");
}
