#include <iostream>
using namespace std;

class Array {
    int arr[100];
    int n;

public:
    void input() {
        cout << "Enter size: ";
        cin >> n;

        cout << "Enter elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void merge(Array a, Array b) {
        n = a.n + b.n;

        for (int i = 0; i < a.n; i++) {
            arr[i] = a.arr[i];
        }

        for (int i = 0; i < b.n; i++) {
            arr[a.n + i] = b.arr[i];
        }
    }
};

int main() {
    Array a, b, c;

    cout << "Enter first array:\n";
    a.input();

    cout << "Enter second array:\n";
    b.input();

    c.merge(a, b);

    cout << "Merged array: ";
    c.display();

    return 0;
}