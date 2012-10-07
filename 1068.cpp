#include <iostream>
#include <vector>

using namespace std;
int main()
{
    long long acc = 0;
    int x;
    cin >> x;
    if (x<0) {
        while (x<=1) acc+=(x++);
    }
    else if (x>0) {
        while (x>=1) acc+=(x--);
    }
    else acc=1;
    cout << acc;
    return 0;
}