//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//typedef long long ll;
//
//ll prefix_s[1001][1001] = {{0}};
//
//int main(){
////    freopen("paintbarn.in","r",stdin);
////    freopen("paintbarn.out","w",stdout);
//
//    ll N, K, x1, y1, x2, y2, ans=0;
//    cin >> N >> K;
//
//    for(ll i = 0; i < N; ++i){
//        cin >> x1 >> y1 >> x2 >> y2;
//        for(ll j = x1; j < x2; ++j){
//            ++prefix_s[j][y1];
//            --prefix_s[j][y2];
//        }
//    }
//
//    for(ll i = 1; i < 1001; ++i){
//        for(ll j = 1; j < 1001; ++j){
//            prefix_s[i][j] += prefix_s[i][j-1];
//            if(prefix_s[i][j-1] == K){
//                ++ans;
//            }
//        }
//    }
//    cout << ans;
//    return 0;
//}