#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, res;
    cin >> N;
    vector<vector<int>> arboles;
    for(int i=0; i<N; i++){
        vector<int> coordenadas(2);
        int X, Y;
        cin >> X >> Y;
        coordenadas[0]=X;
        coordenadas[1]=Y;
        arboles.push_back(coordenadas);
    }
    int maxX = 0;
    int maxY = 0;
    int minX = 1000000000;
    int minY = 1000000000;

    for(int i=0; i<N; i++){
        if(arboles[i][0]>maxX){
            maxX = arboles[i][0];
        }
        if(arboles[i][0]<minX){
            minX = arboles[i][0];
        }
        if(arboles[i][1]>maxY){
            maxY = arboles[i][1];
        }
        if(arboles[i][1]<minY){
            minY = arboles[i][1];
        }        
    }
    int longitudX = maxX-minX + 2;
    int longitudY = maxY-minY + 2;
    res= 2*(longitudY + longitudX);

    cout << res << endl;
    return 0;
}
