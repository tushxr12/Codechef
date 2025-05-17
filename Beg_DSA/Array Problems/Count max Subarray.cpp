#include <bits/stdc++.h>

using namespace std;

// Function to count the subarrays with
// maximum value is equal to K
int countSubarrays(int arr[], int N, int K) {
    // Write your code here
    int ans = 0;
    for(int i = 0;i < N;i++)
    {
        int maxVal = arr[i];
        for(int j = i;j < N;j++)
        {
            maxVal = max(maxVal, arr[j]);
            if(maxVal == K)
                ans++;
            else if(maxVal > K)
                break;
        }
    }
    return ans;
}

int main() {
    int N, K;
    cin >> N;
    cin >> K;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cout << countSubarrays(arr, N, K) << endl;
    return 0;
}
