#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int largestCommonElement(vector<int>& arr1, vector<int>& arr2) {
    // Write your code here
    int n1 = arr1.size(), n2 = arr2.size();
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    
    int i = n1 - 1, j = n2 - 1;
    
    while(i >= 0 && j >= 0)
    {
        if(arr1[i] == arr2[j])
            return arr1[i];
        else if(arr1[i] > arr2[j])
            i--;
        else 
            j--;
    }
    return -1;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m);
    for (int i = 0; i < n; ++i) cin >> arr1[i];
    for (int i = 0; i < m; ++i) cin >> arr2[i];
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    cout << largestCommonElement(arr1, arr2) << endl;
    return 0;
}
