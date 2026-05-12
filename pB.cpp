#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, K;
    cin >> N >> K;
    vector <int> B;
    for(int i=0; i<N-K+1; i++){
        int valor;
        cin >> valor;
        B.push_back(valor);
    }
    

    return 0;
}
