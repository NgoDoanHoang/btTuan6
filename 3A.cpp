#include <iostream>

using namespace std;

double H(int N);

int main()
{
    int n;
    cin >> n;
    cout << H(n);
    return 0;
}

double H(int N) {
 if (N == 1) return 1.0;
 return H(N) + 1.0/N;
}

// ham de quy nay vo nghia chi chay vs gia tri duy nhat la 1
