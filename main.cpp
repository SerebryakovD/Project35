#include<iostream>
#include<vector>

using namespace std;

/* fill array with randomize numbers from 0 to 9 */
void fillArray(vector<int>& arr1, int size) {
	for (int j = 0; j < size; j++) {
		arr1.push_back(rand() % 10);
		cout << arr1[j] << " ";
	}
}

struct Data {
	int age;
	string name;
};

int main() {
	vector<int> arr1;
	int size;
	cout << "Enter size: ";
	cin >> size;

	fillArray(arr1, size);
	int temp = 0;

	for (int i = 1; i < size; i++) {
		temp = arr1[i];
		for (int j = i - 1; j >= 0 && arr1[j] > temp; j--) {
			arr1[j + 1] = arr1[j];
			arr1[j] = temp;
		}
	}

	cout << endl;

	for (auto num : arr1) {
		cout << num << " ";
	}

	return 0;
}