#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> twosum(vector<int>& nums,int target){
    vector<int> index;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                index.push_back(i); index.push_back(j);
                return index;
            }
        }
    }
    return index;
}
int main(){
    int size; cin >> size;
    int target; int a,b;
    vector<int> v(size);
    for(int i=0;i<size;i++){
        int element; cin >> element;
        v.push_back(element);
    }
}