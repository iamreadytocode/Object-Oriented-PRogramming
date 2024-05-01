#include <iostream>
using namespace std;

const int SIZE = 10;

void countFrequency(int arr[], int size) {
    int frequency[size];
    bool visited[size];
    for (int i = 0; i < size; i++) {
        frequency[i] = 1;
        visited[i] = false;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                frequency[i]++;
                visited[j] = true;
            }
        }
    }
    cout << "The frequency of all elements of an array:\n";
    for (int i = 0; i < size; i++) {
        if (!visited[i]) {
            cout << arr[i] << " occurs " << frequency[i] << " time(s)\n";
        }
    }
}

int main() {
    int arr[SIZE] = {25, 12, 43, 12, 43, 17, 5, 9, 2, 10};
    countFrequency(arr, SIZE);
    return 0;
}
