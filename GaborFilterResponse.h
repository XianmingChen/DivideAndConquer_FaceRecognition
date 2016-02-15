#include <math.h>
#include "time.h"
#define Total_train_face 20
#define Total_probe_face 20
#define Height 311
#define Width 232
#define Filter_Num 40
#define Group_Train 3

extern double Gabor_Respone[Filter_Num][Height][Width][2];
extern double Feature_Vectors[Total_train_face][500][41][2];

#define PI 3.1415926

double complex_modulus(double *t);
void GaborFilterResponse(double trainface[][Width],double Mean_Value[][2]);

void Gabor_Respone_Mean(double *temp_mean,double Convolv[Height][Width][2]);
void GaborWavelet(int Row, int Column, double Kmax, double f, int u, int v, double Delt2, double GW[][Width][2]);
void convolv2_same(double x[][Width],double (*y)[Width][2],double (*z)[Width][2]);