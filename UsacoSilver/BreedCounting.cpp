//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//struct triple{
//    int a, b, c;
//    triple (int a0, int b0, int c0) : a(a0), b(b0), c(c0){};
//};
//
//int main(){
////    freopen("bcount.in","r",stdin);
////    freopen("bcount.out","w",stdout);
//
//    int N, Q, in;
//    cin >> N >> Q;
//
//    vector<triple> prefix_s;
//    prefix_s.emplace_back(0,0,0);
//
//    for(int i = 1; i <= N; ++i){
//        cin >> in;
//
//        if(in == 1){
//            prefix_s.emplace_back(prefix_s[i-1].a+1, prefix_s[i-1].b, prefix_s[i-1].c);
//        }
//        else if(in == 2){
//            prefix_s.emplace_back(prefix_s[i-1].a, prefix_s[i-1].b+1, prefix_s[i-1].c);
//        }
//        else if(in == 3){
//            prefix_s.emplace_back(prefix_s[i-1].a, prefix_s[i-1].b, prefix_s[i-1].c+1);
//        }
//    }
//
//    int begin, end;
//    for(int i = 0; i < Q; ++i){
//        cin >> begin >> end;
//        --begin;
//
//        cout << prefix_s[end].a-prefix_s[begin].a << " " << prefix_s[end].b-prefix_s[begin].b << " " << prefix_s[end].c-prefix_s[begin].c << '\n';
//    }
//    return 0;
//}