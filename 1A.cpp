#include <iostream>

using namespace std;

void print( int a[] )
{
    cout << "phan tu dau tien = " << a[0] << endl;
    cout << "dia chi = " << &a[0];
}

int main()
{
    int a[10];
    for (int i=0;i<10;i++)
    {
        cin >> a[i];
    }
    print( a );
    return 0;
}
