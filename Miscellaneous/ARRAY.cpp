
#include <bits/stdc++.h>
using namespace std;

long long getMagicValue(int n, vector<int> a) {

    long long goodInt=0, badInt=0;
    vector<int> b = a;
    
    sort(b.begin(), b.end());

     for (int x=0;x<n;x++){
         if(a[x] == b[x]){
             goodInt+=a[x];
         }else{             
             badInt+=a[x];
         }
     }
    
    return goodInt-badInt;
}

int main()
{
    int n, a_i;
    cin>>n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin>>a_i;
        a.push_back(a_i);
    }
    
    long long out_;

    out_ = getMagicValue(n,a);

    cout<<out_;
 
    return 0;
}