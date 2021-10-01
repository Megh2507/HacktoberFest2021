#include <bits/stdc++.h>
using namespace std;
void dnfsort(vector<int>&v){
    int n = v.size();
    int low =0;
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        if(v[mid]==0){
            swap(v[mid],v[low]);
            low++;
            mid++;

        }
        else if(v[mid]==1){
            mid++;
        }
        else{
            swap(v[mid],v[high]);
            high--;
        }
    }
}
int main(){
    int n; cin>>n;
    vector<int> v;
    while(n--){
        int x; cin>>x;
        v.push_back(x);
    }
    dnfsort(v);
    for(int i : v ){
        cout<<i<<" ";
    }

    
    
    return 0;
}