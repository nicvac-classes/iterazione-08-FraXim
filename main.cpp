#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,p,dP,vM,i;
    cout<<"Quanti studenti ci sono nella classe?";
    do{
        cin>>n;
        if(n>0){    
        }
        else{
            cout<<"Il numero da te inserito deve essere maggiore di 0";
        }
    }
    while(n<0);
    int v[n];
    string nome[n];
    dP=0;
    p=0;
    for(i=0; i <= n-1; i++ ){
        cout<<"Inserisci il nome del "<<i+1<<" studente.";
        cin>>nome[i];
        cout<<"Inserisci il voto medio del "<<i+1<<" studente in informatica";
        cin>>v[i];
        if(v[i]>=6){
            cout<<""<<nome[i]<<" non ha preso il debito";
            p=p+1;
        }else{
            cout<<"Lo studente "<<nome[i]<<" ha il debito";
            dP=dP+1;
        }
    }
    cout<<"Nella classe ci sono "<<dP<<" bocciati e "<<p<<" promossi";
    vM=0;
    for(i=0; i <= n-1; i++){
        vM=(vM+v[i])/n;
    }
    cout<<"La media dei voti in informatica di tutti gli studenti è pari a "<<vM;
}

