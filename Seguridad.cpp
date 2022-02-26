#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include <map>

using namespace std;
void mostrar_arreglo(string arreglo[],int tam);
void remplazar(string arreglo[], int tam);
int main(){
    ifstream archivo;
    string texto[100]=[arr[i]] texto_1;
    int i;
    archivo.open("mensaje.txt", ios::in);
    while (!archivo.eof()){ //mientras  no sea el final  del archivo
            getline(archivo,texto_1);


            i++;
    }
    cout<<"I:  "<<i<<endl;
    mostrar_arreglo(texto,i);
    remplazar(texto,i);
    archivo.close();
    getch();
    return 0;
}
void mostrar_arreglo(string arreglo[],int tam){
    for (int j =0 ; j<tam;j++){//Muestra el arreglo
        cout<<arreglo[j]<<" "<<endl;
    }
    cout<<endl;
}
void remplazar(string arreglo[], int tam){
    string palabras[15];
    char j;
    map<int, string> map1 = {{1, "a",},// Revisa todo el arreglo y
                            {2, "e",},//dependiendo del regla que se defina lo realiza
                            {3, "i",},
                            {4, "o",},
                            {5, "u",}};

  /*  for (int i=0; i<tam;i++){
        if (j = ""){
           palabras[j]=strtok(arreglo," ");
        }

    }*/


}
