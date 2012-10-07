#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    int x;
    string s;
    cin >> x >> s;
    int k = s.length();
    int r = k;
    if (k==0) {
        cout << x;
        return 0;
    }
    long long acc = x;
    while((x/k)!=0 && ((x-k)!=0))
    {
        acc *= (x - k);
        k+=r;
    }
    cout << acc;
    return 0;
}