#include <iostream>
using namespace std;

int main() {
//Task No 1
    int arr[7] = {3, 2, 7, 1, 9, 4, 6};
    int n = 7;
    
//============================================================
//Task No 2 Find Max and Min   
    
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

//============================================================
//Task No 3 Bubble Sort
    
    cout << "Before Sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

//============================================================
//Task No 4 Maximum and Minimum

    cout << "After Sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}

