#include <bits/stdc++.h>

using namespace std;

long long countSubarrays(vector<long long>& arr) {
    int cnt[3] = {0,0,0};
    long long subCnt = 0;
    int back = 0, n = arr.size();
    
    for(int front = 0; front < n;front++)
    {
        cnt[arr[front]]++;
        
        while(min({cnt[0] , cnt[1] , cnt[2]}) != 0)
        {
            subCnt += (n - front);
            cnt[arr[back]]--;
            back++;
        }
    }
    return subCnt;
}

int main() {
    long long n;
    cin >> n;

    vector<long long> arr(n);
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << countSubarrays(arr) << endl;

    return 0;
}
