/*
#include <iostream>
using namespace std;
typedef unsigned long long ll;
ll k,x;
int t;
ll get(int x){
    return  x*1ll*(x+1)/2;
}

bool check(ll mid){
    if(mid<=k){
        return get(mid)>=x;
    }
    else{
        return (get(k)+get(k-1)-get(2*k-1-mid))>=x;
    }
}

int main(){
    cin >> t;
    while(t-- != 0){
        cin >> k >> x;
        ll l = 0, r = 2*k-1;

        while(l < r){
            ll mid = l+r>>1;
            if(check(mid)){
                r = mid;
            }
            else{
                l = mid+1;
            }
        }
        printf("%llu\n",r);
    }
    return 0;
}
*/