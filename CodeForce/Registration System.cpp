/*
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int N;
    cin >> N;
    string a;

    unordered_map<string, int> m;

    for(int i = 0; i < N; ++i){
        cin >> a;
        if (m.find(a) == m.end())
            cout << "OK\n";
        else{
            cout << a << m[a] << '\n';
        }
        m[a]++;
    }

    return 0;
}
*/