/*
Ingresar dia, mes, año
y devolver fecha de una semana despues
*/

#include <iostream>

using namespace std;

int main(){

    int dia, mes, year;

    cout<<"Ingrese el dia (1-31): ";
    cin>>dia;
    cout<<"Ingrese el mes (1-12): ";
    cin>>mes;
    cout<<"Ingrese el año: ";
    cin>>year;

    switch (mes)
    {
    case 1:{
        if(dia == (dia+7) % 31){
            cout<<"El dia es: "<<dia+7<<endl;
            cout<<"El mes es: "<<mes<<endl;
            cout<<"El año es: "<<year<<endl;
        }else{
            cout<<"El dia es: "<<(dia + 7)%31;
            cout<<"El mes es: "<<mes+1<<endl;
            cout<<"El año es: "<<year<<endl;
        }
    }
    case 2:{
        if(year%4 == 0){
            // completar
        }
    }
    }

    return 0;
}

/*
31 días: Enero, Marzo, Mayo, Julio, Agosto, Octubre, Diciembre.
30 días: Abril, Junio, Septiembre, Noviembre.
28 o 29 días: Febrero (29 días en los años bisiestos).
*/