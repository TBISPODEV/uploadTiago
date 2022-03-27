#include<iostream>
#include<math.h>
using namespace std;
int main (int argc, char const *argv[])
{
    float peso,altura,imc;
    cout<<"Qual o seu peso?";
    cin>> peso;
    cout<<" Qual a sua altura?";
    cin>>altura;
    imc= peso/pow(altura,2);
    cout<<imc;

    return 0;
}
