#include<iostream>
using namespace std;

int main(){
	int rows,col;
	cout <<"enter rows and col of matrix : ";
	cin >> rows >> col;
	
	int arr[100][100];
	cout << "Enter the elements of matrix : "<< endl;
	for(int i=0; i<rows; i++){
		for(int j=0; j<col; j++){
			cin >> arr[i][j] ;
		}
	}
	
	cout << "Sum of each row  is : "<< endl;
	
	for(int i=0; i<rows; i++){
		int rowSum = 0;
		for(int j=0; j<col; j++){
			rowSum += arr[i][j] ;
		}
		cout << "row "<< i+1 << "th sum = "<< rowSum << endl;
	}
	
	cout << "Sum of each col is : "<< endl;
	
	for(int i=0; i<col; i++){
		int colSum = 0;
		for(int j=0; j<rows; j++){
			colSum += arr[j][i] ;
		}
		cout << "col "<< i+1 << "th sum = "<< colSum << endl;
	}
	
	
	
	return 0;
}
