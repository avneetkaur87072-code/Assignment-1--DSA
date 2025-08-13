#include<iostream>
using namespace std;

int main(){
	int arr[100];
	int n;
	cout << "Enter the size of array : ";
	cin >> n;
	
	cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int idx = 0;
    
    for(int i=0; i<n; i++){
    	bool isduplicate = false;
    	for(int j=0; j<idx; j++){
    		if(arr[i] == arr[j]){
    			isduplicate = true;
    			break;
			}
		}
		if(!isduplicate){
			arr[idx] = arr[i];
			idx ++;
		}
	}
	
	//for printing the array
	cout << "After deletion of duplicate elements : "<< endl;
	for(int i=0; i<idx; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}

