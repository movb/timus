#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool getsec(int n,int d, int l, vector<int> &res)
{
    if(n==0) {
        return true;
    }
    bool res=false
    for(int i=1;i<=l;i++)
        {
            if((i-d)>=-2*l && (i-d)<=l*2) {
                vector<int> temp = res;
                temp.push_back(i);
                if(getsec(n-1,(i-d),l,temp));
            }
        }
}

int main()
{
    int n,d,l;
    cin >> n, d, l;

    vector<int> res;
    while(n>0)
    {
        for(int i=1;i<=l;i++)
        {
            if((i-d)>=1 && (i-d)<=l) res.push_back(i);
        }
    }
}