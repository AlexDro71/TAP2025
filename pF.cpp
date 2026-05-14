#include<bits/stdc++.h>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<int> partidos;
    int res=0;
    for(int i=0; i<N; i++){
        int R;
        cin >> R;
        partidos.push_back(R);
    }

    for(int j=0; j<partidos.size(); j++){
        if(partidos[j]==1){
            res+=1;
            if(j>1 && partidos[j-1]==1 && partidos[j-2]==1){
                res+=1;
            }
        }else{
            res-=1;
        }
    }

    cout << res << endl;

    return 0;
}
