#include <iostream>

using namespace std;

int *SortArray (int[], int);

int main(){
    int nums[] = {5, 3, 6, 8, 0, 1, 2, 9, 7, 4};
    int size = sizeof(nums)/sizeof(nums[0]);

    cout << "Unsorted array: ";
    for (int i=0; i<size; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    SortArray(nums, size);
    return 0;
}

int *SortArray (int Array[], int size){
    int array1[size/2], array2[size/2], temp;

    for (int i=0; i<size; i++){
        if (i < (size/2)-1){
            array1[i] = Array[i];
        }
        else {
            static int j=0;
            array2[j] = Array[i];
            j++;
        }
    }

    for (int i=0; i<size/2; i++){
        for (int j =0; j<(size/2)-1; j++){
            if (array1[j] > [j+1]){
                temp = array1[j];
                array1[j] = array1[j+1];
                array1[j+1] = temp;
            }
            if (array2[j] > [j+1]){
                temp = array2[j];
                array2[j] = array2[j+1];
                array2[j+1] = temp;
            }
        }
    }

    for

    for (int i=0; i<(size/2); i++){
        cout << array1[i] << " " << array2[i] << endl;
    }
    return Array;
}
