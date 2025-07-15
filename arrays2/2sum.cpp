#include<iostream>
using namespace std;

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size=5;
//     int target=5;
//     for(int i=0;i<size;i++){
//             for(int j=i+1; j<size; j++){
//                 if(arr[i]+arr[j]==target){ 
//                     cout<<i<<" "<<j;
//                      cout<<endl;
//                 }
              
//             }
//     }
//     return 0;
// }

// ector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
//         sort(nums.begin(), nums.end());
//         set<vector<int>> set;
//         vector<vector<int>> output;
//         for(int i=0; i<n-2; i++){
//             for(int j=i+1; j<n-1; j++){
//                 for(int k=j+1; k<n; k++){
//                     if((nums[i] + nums[j] + nums[k] == 0) && i != j && j != k && k != i){
//                         set.insert({nums[i], nums[j], nums[k]});
//                     }
//                 }
//             }
//         }
//         for(auto it : set){
//             output.push_back(it);
//         }
//         return output;
//     }
// };



int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0; i<n;i++){
        for (int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==7){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                count++;
            }
        }
    }

    cout<<count;

    return 0;
}