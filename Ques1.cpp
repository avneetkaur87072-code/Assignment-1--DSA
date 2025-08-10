#include <iostream>
using namespace std;

#define MAX 100 

// Function to create the array
void createArray(int arr[], int &n) {
    cout << "Enter number of elements: ";
    cin >> n;
    if (n > MAX) {
        cout << "Size exceeds maximum limit!" << endl;
        n = 0;
        return;
    }
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

// Function to display the array
void displayArray(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty!" << endl;
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert element at a given position
void insertElement(int arr[], int &n) {
    if (n >= MAX) {
        cout << "Array is full! we cannot insert." << endl;
        return;
    }
    int pos, val;
    cout << "Enter position to insert : " ;
    cin >> pos;
    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position!" << endl;
        return;
    }
    cout << "Enter value: ";
    cin >> val;
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = val;
    n++;
    cout << "Element is inserted!!"<< endl;
}

// Function to delete element from a given position
void deleteElement(int arr[], int &n) {
    if (n == 0) {
        cout << "Array is empty! we cannot delete." << endl;
        return;
    }
    int pos;
    cout << "Enter position to delete : ";
    cin >> pos;
    if (pos < 1 || pos > n) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = pos-1; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;
    cout << "Element is deleted!!" << endl;
}

// Function to perform linear search
void linearSearch(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty!" << endl;
        return;
    }
    int key, found = 0;
    cout << "Enter element to search: ";
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at position " << i+1 << endl;
            found = 1;
            break;
        }
    }
    if (!found) {
        cout << "Element not found in array." << endl;
    }
}

int main() {
    int arr[MAX], n = 0;
    
    
    createArray(arr, n);
    displayArray(arr, n);
    insertElement(arr, n);
    deleteElement(arr, n);
    linearSearch(arr, n);
   
    return 0;
}

