#include <iostream>

using namespace std;

int c(int x)
{
    int arr[10000];
    x++;
    cout << x << endl;
    c(x);

}

int main()
{
    int n=0;
    c(n);
    return 0;
}
// mang 10000 ptu chi den duoc tang thu 51
