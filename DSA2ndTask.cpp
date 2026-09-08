#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int x : v){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<int>());
    bool f = false;
    for(int i=0; i<n-1; i++){
        if(v[i] != v[i+1]){
            f = true;
            cout<<v[i];
            break;
        }  
    }
    if(!f) cout<<-1;
}
