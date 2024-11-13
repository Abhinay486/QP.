#include<bits/stdc++.h>
using namespace std;
vector<int> helper(vector<int> &nums, int target){
    int n = nums.size();
    vector<int>v(n, -1);
    int low = 0;
    int high = n - 1;
    while(low < high){
        if(nums[low] + nums[high] == target){
            v[low] = nums[high];
            v[high] = nums[low];
            low++;
            high--;
        }
        else if(nums[low] + nums[high] < target) low++;
        else high--;
    }
    return v;
}
int main(){
    int n; cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    int target; cin >> target;
    vector<int>res = helper(arr, target);
    for(auto x : res) cout << x <<" ";
    return 0;
}