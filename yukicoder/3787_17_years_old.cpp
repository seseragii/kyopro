#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    int N[T];
    for(int i=0; i<T; i++){
        cin >> N[i];
    } 
  for(int j=0; j<T; j++){
 int factors = 0;
  int result = pow(2,N[j])+1;
    for(int i=1; i<=sqrt(result); i++){
        if(result%i==0){
            factors++;
        }
    }
    if(factors!=1){
        cout << "No" << endl;;
    }
    else{
        cout << "Yes" << endl;
    }
}
}