#include <iostream>
using namespace std;

int* calculateIndex(int* arr, int size, int target) {
    int i = 0;

    do {
	    int j = i + 1;
        do {
            if (arr[i] + arr[j] == target) {
                int* ans = new int[2];
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
            j++;
        } while (j < size);
        i++;
    } while (i < size);
    return nullptr;
}

int main() {
    int size = 10;
    int target;
    int count = 0;
    cin >> target;

    int* arr = new int[size];

    while (cin >> arr[count]) {
        count++;
        if (count == size) {
            size *= 2;
            int* tempArr = new int[size];
            for (int i = 0; i < count; i++) {
                tempArr[i] = arr[i];
            }

            delete[] arr;
            arr = tempArr;
        }
    }

    int* ans = calculateIndex(arr, count, target);
    if (ans != nullptr) {
        cout << ans[0] << "," << ans[1] << endl;
        delete[] ans;
    } else {
        cout << "No such pair found!" << endl;
    }

    delete[] arr;
    return 0;
}
