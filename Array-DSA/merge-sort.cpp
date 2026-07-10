#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>&vec, int l, int mid, int r){
    vector<int>left, right, ans;

    for(int i = l; i <= mid; i++){
        left.push_back(vec[i]);
    }

    for(int i = mid+1; i <= r; i++){
        right.push_back(vec[i]);
    }

    int i = 0, j = 0;
    while(i < left.size() && j < right.size()){
        if(left[i] < right[j]){
            ans.push_back(left[i]);
            i++;
        }else{
            ans.push_back(right[j]);
            j++;
        }
    }

    while(i < left.size()){
        ans.push_back(left[i]);
        i++;
    }

    while(j < right.size()){
        ans.push_back(right[j]);
        j++;
    }
    i = 0;

    for(int k = l; k <= r; k++){
        vec[k] = ans[i];
        i++;
    }
}

void mergeSort(vector<int>&vec, int l, int r){
    if(r <= l) return ;
    int mid = l + (r-l)/2;

    mergeSort(vec, l, mid);
    mergeSort(vec, mid+1, r);

    merge(vec, l, mid, r);
}

int main(){
    vector<int>vec = {1,0,4,5,2,6};
    mergeSort(vec, 0, vec.size()-1);
    for(auto it : vec)cout<<it<<" ";

    return 0;
}
