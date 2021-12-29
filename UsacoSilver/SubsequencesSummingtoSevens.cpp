//#include <iostream>
//#include <vector>
//using namespace std;
////Inspired By https://www.youtube.com/watch?v=wXNhLjiuTgw&ab_channel=ProjectStarcoder
//typedef long long ll;
//
//int main(){
//    freopen("div7.in","r",stdin);
//    freopen("div7.out","w",stdout);
//
//    ll N, in, ans = 0;
//    cin >> N;
//    vector<ll> prefix_s;
//    prefix_s.emplace_back(0);
//
//    for(ll i = 1; i <= N; ++i){
//        cin >> in;
//        prefix_s.emplace_back((in+prefix_s[i-1])%7);
//
//        //cout << prefix_s[i] << '\n';
//    }
//
//    ll firstFound[8];
//    for(long long & i : firstFound){
//        i = -1;
//    }
//
//    for(ll i = 0; i <= N; ++i){
//        if(firstFound[prefix_s[i]] == -1){
//            firstFound[prefix_s[i]] = i;
//        }
//        else{
//            ans = max(ans, i-firstFound[prefix_s[i]]);
//        }
//    }
//    cout << ans;
//    return 0;
//}
////8/10 Solution, Naive prefix sum
////#include <iostream>
////#include <algorithm>
////#include <vector>
////using namespace std;
////
////typedef long long ll;
////
////int main(){
////    freopen("div7.in","r",stdin);
////    freopen("div7.out","w",stdout);
////
////    ll N, in, ans = 0;
////    cin >> N;
////    vector<ll> prefix_s;
////    prefix_s.emplace_back(0);
////
////    for(ll i = 1; i <= N; ++i){
////        cin >> in;
////        prefix_s.emplace_back(in+prefix_s[i-1]);
////
////        //cout << prefix_s[i] << '\n';
////    }
////
////    for(ll i = 1; i <= N; ++i){
////        for(ll j = i; j <= N; ++j){
////            if(j-i < ans){
////                continue;
////            }
////            ll curSum = prefix_s[j]-prefix_s[i-1];
////            if(curSum%7==0){
////                ans = max(ans, j-i+1);
////            }
////        }
////    }
////
////    cout << ans;
////    return 0;
////}