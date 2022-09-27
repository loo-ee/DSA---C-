#include <iostream>
#include <math.h>

int linearSearch(int[], int , int);
int binarySearch(int[], int, int);
int interpolationSearch(int[], int, int);
int jumpSearch(int[], int, int);
void checkIfFound(int);

int main() {
    int array[1024];

    for (int i = 0; i < 1024; i++) {
        array[i] = i * 2;
    }
    
    int arraySize = sizeof(array) / sizeof(array[0]);
    int target = 212;

    // Linear search Demonstration
    std::cout << "Linear search demonstration\n";

    int indexOfValue = linearSearch(array, arraySize, target);
    checkIfFound(indexOfValue);

    // Binary Search Implementation
    std::cout << "\nBinary search demonstration\n";

    indexOfValue = binarySearch(array, arraySize, target);
    checkIfFound(indexOfValue);

    // Interpolation Search Demonstration
    std::cout << "\nInterpolation search demonstration\n";

    indexOfValue = interpolationSearch(array, arraySize, target);
    checkIfFound(indexOfValue);

    // Jump Seach Demonstration
    std::cout << "\nJump search demonstration\n";

    indexOfValue = jumpSearch(array, arraySize, target);
    checkIfFound(indexOfValue);

    return 0;
}

int linearSearch(int *array, int arraySize, int target) {
    for (int i = 0; i < arraySize; i++) {
        if (array[i] == target) {
            std::cout << i << " attempt/s\n";
            return i;
        }
    }
    return -1;
}

int binarySearch(int *array, int arraySize, int target) {
    int first = 0;
    int last = arraySize - 1;
    int attempts = 0;

    while (first <= last) {
        attempts++;
        int midpoint = (first + last) / 2;

        if (array[midpoint] == target) {
            std::cout << attempts << " attempt/s\n";
            return midpoint;
        } 
        else if (array[midpoint] < target) first = midpoint + 1;
        else last = midpoint - 1;
    }
    return -1;
}

int interpolationSearch(int *array, int arraySize, int target) {
    int low = 0;
    int high = arraySize - 1;
    int attempts = 0;

    while(low <= high && target >= array[low] && target <= array[high]) {
        if (low == high) {
            if (array[low] == target) return low;
            return -1;
        }
        attempts++;

        int probe = low + (((double)(high - low) /
            (array[high] - array[low])) * (target - array[low]));

        std::cout << "probe = " << + low << " + ((" << high << " - " << low << ") / (" << 
            array[high] << " - " << array[low] << ") * (" << target << " - " 
            << array[low] << "))\n";   

        if (array[probe] == target) {
            std::cout << attempts << " attempt/s\n";
            return probe;
        }
        
        if (array[probe] < target) low = probe + 1;
        else high = probe - 1;
    }
    return -1;
}

int jumpSearch(int *array, int arraySize, int target) {
    int step = sqrt(arraySize);
    int prev = 0;
    int attempts = 0;

    while (array[std::min(step, arraySize) -1] < target) {
        attempts++;
        prev = step;
        step += sqrt(arraySize);

        if (prev >= arraySize) return -1;
    }

    while (array[prev] < target) {
        attempts++;
        prev++;

        if (prev == std::min(step, arraySize)) return -1;
    }

    if (array[prev] == target) {
        std::cout << attempts << " attempt/s\n";
        return prev;
    } 
    return -1;
}

void checkIfFound(int functionReturn) {
    if (functionReturn == -1) std::cout << "Not found\n"; 
    else std::cout << "Index at " << functionReturn << std::endl;
}