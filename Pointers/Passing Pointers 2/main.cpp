#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x{100};
    int y{200};
    cout << "\nX: " << x << endl;
    cout << "Y: " << y << endl;

    swap(&x, &y);
    cout << "\nX: " << x << endl;
    cout << "Y: " << y << endl;

    return 0;
}