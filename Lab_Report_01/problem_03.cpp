#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Input size of the array: ";
  cin >> n;

  int array[n];
  cout << "Input" << n << " elements: ";
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }

  int comparisons = 0, swaps = 0;

  for (int i = 0; i < n - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
      comparisons++;
      if (array[j] < array[minIndex]) {
        minIndex = j;
      }
    }

    if (minIndex != i) {
      int temp = array[i];
      array[i] = array[minIndex];
      array[minIndex] = temp;
      swaps++;
    }
  }

  cout << "Sorted list: ";
  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  cout << endl;

  cout << "Total comparisons: " << comparisons << endl;
  cout << "Total swaps: " << swaps << endl;

  return 0;
}