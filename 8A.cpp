#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int a=s.size();
    int z=1;
    cout << "so tap con cua cai thu vua duoc nhap la" << endl;
    for (int i=0;i<a;i++)
    {
        z=z*2;
    }
    cout <<z;
    return 0;
}
