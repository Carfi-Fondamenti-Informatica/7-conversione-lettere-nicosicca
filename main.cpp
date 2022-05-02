#include <iostream>
using namespace std;


int main() {

    char a;
    cin>>a;

    if(conversione(a))
    {
        if((a>=65)&&(a<=90))
            a=a+32;
        else
            a=a-32;
        
        cout<<(char)a;
    }
        
    else
        cout<<"errore"<<endl;

    return 0;
}

