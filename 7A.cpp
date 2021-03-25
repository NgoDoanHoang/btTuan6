#include <iostream>
#include <algorithm>

using namespace std;   //ko dung duoc chuong trinh

void xxx(string &a)
{
    int n = a.size();
    while (true)
    {
        cout << a << endl;
        cout << endl;
        int k, l;
        for (k = n-2; k>=0; k--)
        {
            if (a[k] < a[k+1]) break;
        }
        for (l = n-1; l>k; l--)
        {
            if (a[k] < a[l]) break;
        }

        swap(a[k], a[l]);

       for (int i=k+1, j=n-1; i<j; i++, j--)
        {
            swap(a[i], a[j]);
        }

    }
}

int main()
{
    string s;
    cin >> s;

    xxx(s);

    return 0;
}
