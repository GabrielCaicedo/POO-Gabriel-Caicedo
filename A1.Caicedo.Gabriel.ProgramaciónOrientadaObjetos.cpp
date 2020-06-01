#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main() {
    char mensaje[1000];
    cout<<"Escriba su mensaje"<<endl;
    cin.getline(mensaje,1000,'\n');
    cout<"Su mensaje fue:"<<endl;
    cout<<mensaje<<endl;
    return 0;
}
