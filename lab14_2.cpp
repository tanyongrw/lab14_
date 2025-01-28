#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}
void inputMatrix(double A[][N]){
  for(int o =0 ;o <N;o++){
      cout << "Row " << o+1 << ": ";
      for(int k =0 ;k <N;k++){cin >> A[o][k];}
    }
}
void showMatrix(const bool B[][N]){
    for(int o=0 ;o <N;o++){
       for(int k =0 ;k <N;k++){
         cout << B[o][k] << " ";}
       cout <<'\n';
    }
}
void findLocalMax(const double A[][N], bool B[][N]){
    for(int La = 0; La < N ; La++){
		for(int a = 0; a < N ; a++){
			if ((A[a][La] >= A[a+1][La]) && (A[a][La] >= A[a-1][La]) && (A[a][La] >= A[a][La-1]) && (A[a][La] >= A[a][La+1])){
				if ((a != 0) && (a != N-1) && (La != 0) && (La != N-1)){
				    B[a][La] = 1;
			    }
				else B[a][La] = 0;
			}
			else B[a][La] = 0;
		}
	}
}
