#include <iostream>
#include "lib.h"
using namespace std;



int main() {

    char a;
    cin>>a;
    
    if(conversione(a))
        cout<<a;
    else
        cout<<"errore"<<endl;

    return 0;
}
