#include <bits/stdc++.h>
using namespace std;
int main(){
    int pyonpyon[13];
    for(int i=0; i<sizeof(pyonpyon)/sizeof(int); i++){
        cin >> pyonpyon[i];
    }
    int possible = 0;
    int unique = 0;
    for(int i=1; i<=9; i++){
        int count = 0;
        for(int j=0; j<sizeof(pyonpyon)/sizeof(int); j++){
            if(pyonpyon[j]==i){
                count++;
            }
            if(pyonpyon[j]==i && count == 1){
                unique++;
            }
            if(count == 2 && j==sizeof(pyonpyon)/sizeof(int)-1){
                possible++;
            }
            if(count == 1 && j==sizeof(pyonpyon)/sizeof(int)-1){
                possible++;
            }
        }
    }
    if(unique==5){
    cout << possible << endl;
    for(int i=1; i<=9; i++){
        int count = 0;
        for(int j=0; j<sizeof(pyonpyon)/sizeof(int); j++){
            if(pyonpyon[j]==i){
                count++;
            }
            if(count == 2 && j==sizeof(pyonpyon)/sizeof(int)-1){
                cout << i << " ";
            }
            if(count == 1 && j==sizeof(pyonpyon)/sizeof(int)-1){
                cout << i << " ";
            }
        }
    }
    }
    else{
        cout << 0 << endl;
        cout << " " << endl;
    }
}

/*
Happy sequence
• There are exactly 4 distinct positive integers that each appear exactly 3 times in B.
• There is exactly 1 positive integer that appears exactly 2 times in B.
*/