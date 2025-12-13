#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int>S1(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the marks in sem 1:";
        cin>>S1[i];
    }
    vector<int>S2(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the marks in sem 2:";
        cin>>S2[i];
    }
    vector<int> differneces(n);
    int p;
    cout<<"Enter the top marks you want";
    cin>>p;
    int sum = 0;
    
    int i = 0;
    int j = 0;
    
    while(i< S1.size() && j< S2.size()){
        int difference = S2[j] - S1[i];
        differneces.push_back(difference);
    }
    sort(differneces.begin(),differneces.end());
    for(int i=0;i<=p;i++){
        sum+=differneces[i];
    }
    cout<<sum;
    return 0;
}