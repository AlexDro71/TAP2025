#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int A, B, C;
    cin >> A >> B >> C;
    if((B-A)%C==0){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }

    return 0;
}
