#CPP Code
#include <bits/stdc++.h>
using namespace std;

int main() {
	# your code goes here
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> v;
        for(int i = 0;i < n;i++)
        {
            int x;cin>>x;
            v.push_back(x);
        }
        cout<<*max_element(v.begin(), v.end())<<"\n";
    }
}
