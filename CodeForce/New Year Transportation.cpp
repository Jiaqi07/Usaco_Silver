/*
#include <iostream>
using namespace std;

int main(){
    int N, T, p = 0;
    cin >> N >> T;
    int f[N];

    for(int i = 0; i < N; ++i){
        cin >> f[i];
    }

    while(p < T-1){
        p += f[p];
    }

    if(p == T-1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
/*
#include <iostream>
using namespace std;

int main(){
    int N, K, in;
    cin >> N >> K;

    for(int i = 1; i < N; ++i){
        cin >> in;
        i+=in-1;
        if(K == i){
            cout << "YES";
            break;
        }
        if(i > K){
            cout << "NO";
            break;
        }
    }

    return 0;
}
*/