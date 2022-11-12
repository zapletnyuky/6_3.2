//рекурсивний спосіб
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int i) {
    a[i] = Low + rand() % (High-Low+1);
    if (i<size-1)
        Create(a, size, Low, High, i+1);
}
void Print(int* a, const int size, int i) {
    cout << setw(4) << a[i];
    if (i<size-1)
        Print(a, size, i+1);
        cout << endl;
}
int IFirst(int* a, const int size, int &min, int i) {
if ( a[i] % 2 !=0)
{
min=a[i];
return i; }
    if (i<size-1)
        return IFirst(a, size, min, i+1);
    else
        return -1;
}
int Min(int* a, const int size, int min, int i) {
    if (a[i]<min && a[i] % 2 !=0)
        min=a[i];
    if (i<size-1)
        return Min(a, size, min, i+1);
    else
        return min;
}
//шаблони
template <typename T>
void Create(T* a, const int size, T Low, T High, T i) {
    a[i] = Low + rand() % (High-Low+1);
    if (i<size-1)
        Create<T>(a, size, Low, High, i+1);
}
template<typename D>
void Print(D* a, const int size, D i) {
    cout << setw(4) << a[i];
    if (i<size-1)
        Print<D>(a, size, i+1);
        cout << endl;
}
template<typename K>
int IFirst(K* a, const int size, K &min, K i) {
if ( a[i] % 2 !=0)
{
min=a[i];
return i; }
    if (i<size-1)
        return IFirst <K>(a, size, min, i+1);
    else
        return -1;
}
template<typename F>
int Min(F* a, const int size, F min, F i) {
    if (a[i]<min && a[i] % 2 !=0)
        min=a[i];
    if (i<size-1)
        return Min<F>(a, size, min, i+1);
    else
        return min;
}
int main() {
srand((unsigned)time(NULL));
    const int n=5;
    int a[n];
    int Low = -100;
    int High = 100;
    Create(a, n, Low, High, 0);
    Print(a, n, 0);
    int min;
int imin = IFirst(a, n, min, 0);
if (imin == -1)
cerr << "немає елементів, які задовольняють умові" << endl;
else
cout << "min = " << Min(a, n, min, imin+1) << endl; return 0;
}
