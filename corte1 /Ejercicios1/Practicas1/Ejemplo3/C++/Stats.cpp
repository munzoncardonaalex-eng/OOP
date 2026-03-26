#include <iostream>
using namespace std;

class Stats {
public:
    static int sum(const int a[], int n) {
        int total = 0;
        for (int i = 0; i < n; i++) {
            total += a[i];

    }

        return total;
}
    static double average(const int a[], int n) {
        int total = sum(a, n);
        return (double)total / n;
    }

};

int main() {
    int grades[] = {80, 75, 90, 60, 95};
    int n = sizeof(grades) / sizeof(grades[0]);

    int total = Stats::sum(grades, n);
    double avg = Stats::average(grades, n);

    cout << "Sum: " << total << "\n";
    cout << "Average: " << avg << "\n";
    return 0;
}