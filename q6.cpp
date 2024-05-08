#include <iostream>
using namespace std;
int main (){
int nascenca;
int atual; 
    cout<<"digite o ano em que nasceu:";
    cin>>nascenca;
    cout<<"digite o ano atual:";
    cin>>atual;
if((atual-nascenca) >=16){
    cout<<"ja pode votar."<<endl;
}else{
    cout<<"nao pode votar."<<endl;
}
     return 0;
}