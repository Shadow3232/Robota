#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Введіть перше число: ";
    cin >> a;

    cout << "Введіть друге число: ";
    cin >> b;

    if (a > b) {
        cout << "Перше число більше за друге";
    }
    else if (a < b) {
        cout << "Перше число менше за друге";
    }
    else {
        cout << "Числа рівні";
    }

    return 0;
}
