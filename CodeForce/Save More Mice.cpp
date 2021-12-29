/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//https://www.youtube.com/watch?v=X_1oauuWzT8&ab_channel=codeExplainer
typedef long long ll;

int main(){
    int T;
    cin >> T;

    for(int i = 1; i <= T; ++i){
        ll n, k;
        cin >> n >> k;
        vector<ll>a(k);
        for(int j = 0; j < k; ++j){
            cin >> a[j];
        }

        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());

        ll cat_position = 0, total = 0; //Amount of mice that reach hole
        for(int j = 0; j < k; ++j){
            if(cat_position < a[j]){
                cat_position += (n-a[j]);
                total++;
            }
            else{
                break;
            }
        }
        cout << total << "\n";
    }
    return 0;
}
*/