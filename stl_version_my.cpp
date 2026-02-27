#include <vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> removeZeros(const vector<int>&input) {
    vector<int> result;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] != 0) {
            result.push_back(input[i]);
        }
    }
    return result;
}
int main() {
    vector<int> numbers = {0, 1, 2, 0, 3, 0, 4, 5};
    vector<int> filteredNumbers = removeZeros(numbers);

    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Filtered vector (without zeros): ";
    for (int num : filteredNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}