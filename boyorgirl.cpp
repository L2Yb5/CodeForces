#include <iostream>
using namespace std;
int main(){
    string name;
    cin >> name;
    int distinct=0;
    bool isDupli = false;
    for(int i=0; i<name.length(); i++){

        for(int j=0;j<i;j++){
            if (name[i]==name[j]){
                isDupli = true;
                break;
            }
        }
    }
    if(!isDupli){
        distinct++;
    }
    if (distinct == 0 || distinct%2==0){
        cout << "CHAT WITH HER!";
    }
    else cout << "IGNORE HIM!";
    return 0;
}