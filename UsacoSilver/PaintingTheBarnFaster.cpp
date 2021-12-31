//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//typedef long long ll;
////Used Usaco Solution
//ll prefix_s[1001][1001]={{0}};
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
//
//        ++prefix_s[x1][y1];
//        --prefix_s[x1][y2];
//        --prefix_s[x2][y1];
//        ++prefix_s[x2][y2];
//    }
//
//    for(ll i = 0; i < 1000; ++i){
//        for(ll j = 0; j < 1000; ++j){
//            if(i){
//                prefix_s[i][j]+=prefix_s[i-1][j];
//            }
//            if(j){
//                prefix_s[i][j]+=prefix_s[i][j-1];
//            }
//            if(i && j){
//                prefix_s[i][j]-=prefix_s[i-1][j-1];
//            }
//            if(prefix_s[i][j] == K){
//                ++ans;
//            }
//        }
//    }
//    cout << ans;
//    return 0;
//}