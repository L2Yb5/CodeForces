#include <iostream>
using namespace std;
int main(){
    int n;
    int j=0;
    cin >> n;
    for (int i=0; i<n; i++){
        int i1,i2,i3;
        cin >>i1;
        cin >>i2;
        cin >>i3;
        if((i1==1&&i2==1) || (i1==1&&i3==1) || (i2==1&&i3==1)){
            j++;
        }
        else{
            continue;
        }
    }
    cout << j;
    return 0;
}