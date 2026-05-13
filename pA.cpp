#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){
    string str;
    cin >> str  ;
    int i=0;
    bool res=false;
    bool cd1 = false;
    bool cd2 = false;
    bool cd3 = false;
    for(int i=0; i<str.size() && !res; i++){
        if(!cd1 && str[i]=='T'){
            cd1=true;
        }
        if(cd1 && !cd2 && str[i]=='A'){
            cd2=true;
        }
        if(cd2 && str[i]=='P'){
            res=true;
        }
    } 
    if(res){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }
    return 0;
}
