#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int x : v){
        cin>>x;
        v.push_back(x);
    }
    
    unordered_map<int, int> m;
    m[0] = 1;
    int prSm = 0;
    int ans = 0;
    for(int a : v){
        prSm += a;
        if(m.count(prSm-k)){
            ans += m[prSm-k];
        }
        m[prSm]++;
    }
    cout<<ans;
}
