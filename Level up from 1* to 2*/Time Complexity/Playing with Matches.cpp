#include <bits/stdc++.h>
using namespace std;

long long int req(int digit)
{
    switch(digit)
    {
        case 0:
            return 6;
        case 1:
            return 2;
        case 2:
            return 5;
        case 3:
            return 5;
        case 4:
            return 4;
        case 5:
            return 5;
        case 6:
            return 6;
        case 7:
            return 3;
        case 8:
            return 7;
        case 9:
            return 6;
    }
    return 0;
}

void solve()
{
    int a,b;
    cin>>a>>b;
    
    long long sum = a + b;
    long long ans = 0;
    while(sum)
    {
        int ld = sum%10;
        ans += req(ld);
        sum /= 10;
    }
    cout<<ans;
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
}
