#include <iostream>

using namespace std;

long F(int n) {
 if (n == 0) return 0;
 if (n == 1) return 1;
 return F(n-1) + F(n-2);
}

int main()
{
    int n;
    cin >> n;
    cout << F(n) << endl;
    int a=0;
    int b=1;
    int next=a+b;
    while ( next < n )
    {
        cout << next << " ";
        a=b;
        b=next;
        next=a+b;
    }
    return 0;
}
// nhanh hon nhieu lan
