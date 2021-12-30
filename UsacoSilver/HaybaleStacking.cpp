//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//typedef long long ll;
//
//int main(){
////    freopen("stacking.in","r",stdin);
////    freopen("stacking.out","w",stdout);
//
//    ll N, K, begin, end;
//    cin >> N >> K;
//
//    vector<ll> hayStack(N+2,0), prefix_s(N);
//    prefix_s.emplace_back(0);
//
//    for(ll i = 0; i < K; ++i){
//        cin >> begin >> end;
//        ++hayStack[begin];
//        --hayStack[end+1];
//    }
//
//    for(ll i = 1; i <= N; ++i){
//        prefix_s[i] = prefix_s[i-1]+hayStack[i];
//        //cout << prefix_s[i] << ' ';
//    }
//    sort(prefix_s.begin(), prefix_s.end());
//
//    cout << prefix_s[N/2+1];
//    return 0;
//}