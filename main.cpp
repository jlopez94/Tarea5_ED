#include <iostream>

using namespace std;

int main()
{
    int MAX = 5;
    int numberList[MAX];
    int number, op;
    int pos = 0;

    do{
        cout<<"Escoger opcion"<<endl;
        cout<<"1.LLenar Arreglo"<<endl;
        cout<<"2.Eliminar"<<endl;
        cout<<"3.Insertar"<<endl;
        cout<<"4.Imprimir"<<endl;
        cin>>op;
        cout<<endl;

        switch(op){

        case 1:
            cout<<"LLenar Arreglo, cantidad maxima[5]: "<<endl;
            for(int i=0; i<MAX; i++){
                cin>>number;
                numberList[pos+i] = number;

            }
            cout<<endl;
            break;

        case 2:
            cout<<"Posicion que desea borrar: "<<endl;
            cin>>pos;
            if(numberList[pos]!= NULL)
                numberList[pos] = NULL;
                cout<<endl;
            break;

        case 3:
            cout<<"Posucion que desea insertar: "<<endl;
            cin>>pos;
            if(numberList[pos]!=NULL){
                cout<<"Introducir numero: "<<endl;
                cin>>number;
                numberList[pos] = number;
            }

            break;

        case 4:
            for(int i=0;i<MAX;i++)
                cout<<"pos["<<i<<"] "<<numberList[i]<<endl;
                cout<<endl;
            break;
        }
    }while(op!=5);

    return 0;
}
