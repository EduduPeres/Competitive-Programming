//Link da questao
//https://neps.academy/br/exercise/263
#include<bits/stdc++.h>
using namespace std;
inline void reads(string &x){char _[100005]; scanf("%s",_);x=_;}

bool restoDaDivisao(string &s, int m){
    int n = s.size();
    int resto = 0;
    for(int i=0;i<n;i++){
        resto = (resto * 10 + s[i]-'0')%m;
    }
    return resto;
}

int main(){
    string s;reads(s);
    int r2 = restoDaDivisao(s,11);

    printf("%c\n",r2==0?'S':'N');
}