#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Input size of the array: ";
  cin >> n;

  int array[n];
  cout << "Input " << n << " numbers: ";
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }

  int comparisons = 0, swaps = 0;
  bool flag;

  for (int i = 0; i < n - 1; i++) {
    flag = false;
    for (int j = 0; j < n - i - 1; j++) {
      comparisons++;
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
        swaps++;
        flag = true;
      }
    }
    if (!flag)
      break;
  }

  cout << "Sorted result: ";
  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  cout << endl;

  cout << "Comparisons done: " << comparisons << endl;
  cout << "Swaps done: " << swaps << endl;

  return 0;
}