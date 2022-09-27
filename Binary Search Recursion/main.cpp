#include <iostream>
using namespace std;

int binarySearch(int array[], int first, int last, int value) {
    int middle;

    if (first > last) {
        return -1;
    }

    middle = (first + last)/2;

    if (array[middle] == value) {
        return middle;
    }

    if (array[middle] < value) {
        return binarySearch(array, middle+1, last, value);
    }
    else {
        return binarySearch(array, first, middle-1, value);
    }
}

int main() {
    int numsArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
    int value, arraySize, target;

    arraySize = sizeof(numsArray)/sizeof(numsArray[0]);

    cout << "Here are the values inside the array:\n";

    for (int x: numsArray) {
        cout << x << " ";
    }

    cout << "\nEnter value to be searched: ";
    cin >> value;

    target = binarySearch(numsArray, 0, arraySize-1, value);

    if (target == -1) {
        cout << "Error: The value is not inside the array\n";
    }
    else {
        cout << "The index of " << value << " in the array is: " << target << "\n";
    }
    return 0;
}