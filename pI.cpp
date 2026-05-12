#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std; 

void reciben(vector<int> &oro, const vector<int> &elecciones, int X, int Y, int k){
    for(int i=0; i<elecciones.size(); i++){
        if(elecciones[i]==1){
            oro[i]+=X/k;
        }else{
            oro[i]+=Y;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    cin >> N >> M;
    vector<int> oro(N+1);
    for(int i=0; i<M; i++){
        vector<int> elecciones;
        int X, Y;
        cin >> X >> Y;
        int k=0;
        for(int j=1; j<=N; j++){
            int A;
            
            cin >> A;
            if(A==1){
                k+=1;
            }
            elecciones.push_back(A);
        }
        if(X/(k+1) >= Y){
            oro[N]+=X/(k+1);
            reciben(oro, elecciones, X, Y, k+1);
        }else{
            oro[N]+=Y;
            reciben(oro, elecciones, X, Y, k);
        }

    }

    for(int i=0; i<=N; i++){
        cout << oro[i] << (i==N ? "" : " ");
    }


    return 0;
}
