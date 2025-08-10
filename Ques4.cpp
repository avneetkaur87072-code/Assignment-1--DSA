#include<iostream>
using namespace std;
void rotateArray(int arr[], int n){
	int temp = arr[n-1];
    
    for(int i=n-1; i>=0; i--){
    	arr[i] = arr[i-1];
	}
	arr[0] = temp;
	cout << "Array rotated successfully !"<< endl;
}

void printArray(int arr[], int n){
	for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


void matrixMultiply(int A[][10], int B[][10], int r1, int c1, int r2, int c2){
	if (c1 != r2) {
        cout << "Matrix multiplication not possible (c1 != r2)." << endl;
        return;
    }
	
	int res[r1][c2];
	
	for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                res[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    cout << "Resultant matrix : "<< endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(int A[][10], int r1, int c1){
	int trans[c1][r1];
	
	for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            trans[j][i] = A[i][j];
        }
    }
    
    cout << "transpose of matrix : "<< endl;
    for(int i=0; i<c1 ; i++){
    	for(int j=0; j<r1; j++){
    		cout << trans[i][j] << " ";
		}
		cout << endl;
	}

}

int main(){
	int arr[6] = {9,8,4,2,1,3};
    int n = sizeof(arr) / sizeof(int);
    
    rotateArray(arr,n);
    printArray(arr,n);
    
    int A[10][10], B[10][10];
    int r1, c1, r2, c2;
    
    //matrix A
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }
    
    //matrix B
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }
    
    transpose(A,r1,c1);
    matrixMultiply(A,B,r1,c1,r2,c2);
    
	return 0;
}
