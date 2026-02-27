// #include <iostream>
// using namespace std;

// // Function to check if a number is prime
// bool isPrime(int n) {
//     if (n <= 1) return false;
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) return false;
//     }
//     return true;
// }

// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;

//     if (isPrime(number)) {
//         cout << number << " is a prime number." << endl;
//     } else {
//         cout << number << " is not a prime number." << endl;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int number;
    int i;
    int flag = 0;  // 0 means prime, 1 means not prime

    cout << "Enter a number: ";
    cin >> number;

    // Numbers less than or equal to 1 are not prime
    if (number <= 1) {
        flag = 1;
    } else {
        // Check from 2 to number - 1
        for (i = 2; i < number; i++) {
            if (number % i == 0) {
                flag = 1;  // Found a divisor, so not prime
                break;
            }
        }
    }

    // Output the result based on flag
    if (flag == 0) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
