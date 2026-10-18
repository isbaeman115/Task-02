
#include<iostream>
using namespace std;

int main() {
    int num;
    int average;
    int count = 0;
    int temp = 0;

    cout << "Enter your number (-1 to stop): " << endl;
    cin >> num;

    while (num != -1) {
        temp += num;
        count++;

        cout << "Enter your number (-1 to stop): " << endl;
        cin >> num;
    }

    if (count > 0) {
        average = temp / count;
        cout << "Average of these numbers is " << average;
    }
    else {
        cout << "No numbers were entered.";
    }

    return 0;
}

