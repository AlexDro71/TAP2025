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
    while(i<str.length()){
        if(str[i]=='T'){
            int j=i;
            while(j<str.length()){
                if(str[j]=='A'){
                    int k=j;
                    while(k<str.length()){
                        if(str[k]=='P'){
                            res=true;
                        }
                        k++;
                    }
                }
                j++;
            }
            
        }
        i++;
    } 
    if(res){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }
    return 0;
}
