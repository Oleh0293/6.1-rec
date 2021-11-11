// Lab6.1 iter
// Кулик Олег ІК - 11
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* c, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++)
        c[i] = Low + rand() % (High - Low + 1);
}

void Print(int* c, const int size) {
    for (int i = 0; i < size; i++)
        cout << setw(4) << c[i];
    cout << endl;
}

int Count(int* c, const int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if ((c[i] < 0 && abs(c[i]) % 2 == 0) || (c[i] >= 0 && c[i] % 2 == 1)) {
            count++;
        }
    }
    return count;

}

void Zero(int* c, const int size) {
    for (int i = 0; i < size; i++)
        if ((c[i] < 0 && abs(c[i]) % 2 == 0) || (c[i] >= 0 && c[i] % 2 == 1))
            c[i] = 0;
}

int Sum(int* c, const int size) {
    int S = 0;
    for (int i = 0; i < size; i++)
        if ((c[i] < 0 && abs(c[i]) % 2 == 0) || (c[i] >= 0 && c[i] % 2 == 1))
            S += c[i];
    return S;
}


int main() {
    srand((unsigned)time(NULL));
    const int b = 24;
    int c[b];

    int Low = -15;
    int High = 75;

    Create(c, b, Low, High);
    Print(c, b);
    cout << "Sum = " << Sum(c, b) << endl;
    cout << "Count = " << Count(c, b) << endl;
    Zero(c, b);
    Print(c, b);

    return 0;
}
