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

  int comparisons = 0;
  int shifts = 0;

  for (int i = 1; i < n; i++) {
    int current = array[i];
    int j = i - 1;

    while (j >= 0 && array[j] > current) {
      comparisons++;
      array[j + 1] = array[j];
      j--;
      shifts++;
    }
    array[j + 1] = current;
  }

  cout << "After sorting: ";
  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  cout << endl;

  cout << "Total comparisons: " << comparisons << endl;
  cout << "Total shifts: " << shifts << endl;

  return 0;
}
