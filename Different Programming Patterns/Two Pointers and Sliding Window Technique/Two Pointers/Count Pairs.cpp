#include <bits/stdc++.h>
using namespace std;

long long countPairsLessThanX(vector<int>& arr, int x) {
    // Write your code here
    long long ans = 0;
    int i = 0, j = arr.size() - 1;
    
    while(i < j)
    {
        if(arr[i] + arr[j] < x)
        {
            ans += (j - i);
            i++;
        }
        else
        {
            j--;
        }
    }
    return ans;
}

int main() {
    int n, x;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;
    cout << countPairsLessThanX(arr, x) << endl;
    return 0;
}
