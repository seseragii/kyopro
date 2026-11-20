#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int M;
    cin >> N;
    cin >> M;
    string pyonpyon[N];
    int myonmyon[N];
    string suupachatto[M];
    for(int i=0; i<N; i++){
        cin >> pyonpyon[i] >> myonmyon[i];
    }
    for(int i=0; i<M; i++){
        cin >> suupachatto[i];
    }
    long long int total=0;
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            if(suupachatto[i]==pyonpyon[j]){
                total+= myonmyon[j];
            }
        }
    }
    cout << total;
}