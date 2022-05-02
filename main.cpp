#include <iostream>
#include "lib.h"
using namespace std;



int main() {

    char a;
    cin>>a;
    
    int n;
    n=(int)a;
    
    if(conversione(n))
        cout<<(char)n;
    else
        cout<<"errore"<<endl;

    return 0;
}
