#include <iostream>
#include <math.h>
using namespace std;
// cholesky decomposition 
vodi cholesky(double >&A,double >& L,int n ){
    for(int i=0; i<n; i++)
    for(int j=i; j<n; j++){
        if(i=j){
            double sum=0;
            for(int k=0;k<j;k++){
                sum=sum+L[j][k] * L[j][k];
            }
            L[j][j] = sqrt(A[j][j] - sum);
        }
        else {
                double sum = 0;
                for (int k = 0; k < j; k++) {
                    sum =sum + L[i][k] * L[j][k];
                }
                L[i][j] = (A[i][j] - sum) / L[j][j];
    }
}
// initialization matirx L
void initial(double L,int n{
    for(for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (i < j) {
				L[i][j] = 0;)
})
// Ax=b friststep for y
void friststep(double >&L,double b,int n){
    double y[n];
    y[0] = b[0] / L[0][0];
	for (int i = 1; i < m; i++) {
		double sum = 0;
		for (int k = 0; k < i; k++) {
			sum = sum + L[i][k] * y[k];
}
		y[i] = (b[i] - sum) / L[i][i];
}
// Ax=b secondstep for x
void secondstep(double >&L,double y,int n){
    double x[n];
    x[n-1]=y[n-1]/L[n-1][n-1];
    for (int i = n - 2; i >= 0; i--) {
		double sum = 0;
		for (int k = i + 1; k < m; k++) {
			sum = sum + L[k][i] * x[k];
}
		x[i] = (y[i] - sum) / L[i][i];
}