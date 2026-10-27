
#include <iostream>
using namespace std;

// Homework 9 - Noe Zuniga
// CIS 5 Week 09 - Menu on the Lab

void printMenu() {
    cout << "1) Average  2) High  3) Quit\n";
}

double average(const int a[], int n) {
    if (n == 0) {
        return 0;
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    return static_cast<double>(sum) / n;
}

void printSummary(double avg) {
    cout << "Average: " << avg << "\n";
}

int high(const int a[], int n) {
    int maxScore = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > maxScore) {
            maxScore = a[i];
        }
    }

    return maxScore;
}

int main() {
    const int N = 4;
    int scores[N] = {80, 90, 70, 100};
    int choice = 0;

    do {
        printMenu();
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            double avg = average(scores, N);
            printSummary(avg);
        }
        else if (choice == 2) {
            int top = high(scores, N);
            cout << "High: " << top << "\n";
        }

    } while (choice != 3);

    return 0;
}
