#include <iostream>

using namespace std;

double H(int N) {
 return H(N-1) + 1.0/N;
}

int main()
{
    int n;
    cin >> n;
    cout << H(n);
    return 0;
}
// khi n tien ve 0 se gap loi
