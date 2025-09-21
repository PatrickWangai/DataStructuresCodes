/*
Author:Patrick Wangai
Reg No:BSE-01-0052/2025
Description:Creating a program to perfom the following operations on an array
            Traversing,Updating,Searching,Intersecting,Deleting and Displaying.
Date: 17/09/2025
version 1
*/
#include <iostream>
using namespace std;

int main() {
    int arr[2][3];
    int i, j, value, flag;

    // Input
    cout << "Enter 6 elements for a 2x3 array:" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // Traverse & Display
    cout << "\nArray elements are:" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Update
    cout << "\nEnter position to update (row and column): ";
    cin >> i >> j;
    cout << "Enter new value: ";
    cin >> value;
    arr[i][j] = value;

    // Display after update
    cout << "\nArray after update:" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Delete or replace with 0
    cout << "\nEnter position to delete (row and column): ";
    cin >> i >> j;
    arr[i][j] = 0;

    // Display after delete
    cout << "\nArray after deletion:" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Search
    cout << "\nEnter value to search: ";
    cin >> value;
    flag = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            if (arr[i][j] == value) {
                cout << "Value found at position (" << i << ", " << j << ")" << endl;
                flag = 1;
            }
        }
    }
    if (flag == 0) {
        cout << "Value not found in array." << endl;
    }

    // Intersection with another array
    int arr2[2][3];
    cout << "\nEnter 6 elements for another 2x3 array:" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            cin >> arr2[i][j];
        }
    }

    cout << "\nIntersection of arrays:" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            for (int x = 0; x < 2; x++) {
                for (int y = 0; y < 3; y++) {
                    if (arr[i][j] == arr2[x][y] && arr[i][j] != 0) {
                        cout << arr[i][j] << " ";
                    }
                }
            }
        }
    }
    cout << endl;

    return 0;
}