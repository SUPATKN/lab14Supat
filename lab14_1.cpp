#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double a[],int n,double b[]){
    double min = a[0], max = a[0];
    double Num = n;
    double sumX = 0;
    double sumX2 = 0;
    double powX=1;
    double dividX=0;
    for(int i=0 ; i<n ; i++){
        sumX += a[i];
        sumX2 += pow(a[i],2);
        powX = powX*a[i];
        dividX += 1/a[i];
        if(a[i]>max){
            max = a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
    }    
        
    double mean = sumX/n;
    double Stand = sqrt((sumX2/n)-pow(mean,2));
    double gm = pow(powX,1/Num);
    double H = n/dividX;
    b[0] = mean;
    b[1] = Stand;
    b[2] = gm;
    b[3] = H;
    b[4] = max;
    b[5] = min;

}