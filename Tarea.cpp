#include <iostream>
using namespace std;

struct Fecha{
 int dia;
 int mes;
 int anio;
};
  struct  Carro{
      
 char placa[20],propietario[20];
int fabricacion;  
int multas;
Fecha fecha;
};


    
   void exhibirRegistro(Carro carro[1]){
       for(int i = 0; i < 1; i++){
           
            cout <<"El Carro tiene la siguiente placa "  <<endl;
  cin.getline(carro[i].placa,20); 
  
  cout <<"El Dueño del carro es " <<endl;
  cin.getline(carro[i].propietario,20);
  
  cout <<"La multas almacenadas son " <<endl;
  cin>> carro[i].multas;
  
   cout <<"Año de fabricacion "  <<endl;
  cin >> carro[i].fabricacion;
    cin.ignore();
}

   }
   
void cantidadMultados(Carro carro[1]){
     for(int i = 0; i < 1; i++){
      cout <<"Esta son la cantida de multas del dueño " <<endl;
  cin>> carro[i].multas;
         
     }
}

void antiguedad(Fecha fecha[1]){
    for(int i = 0; i < 1; i++){
         cout <<"\nel dia es: "<<endl;
          cin >> fecha[i].dia;
         cout <<"\nel mes es: "<<endl;
          cin >> fecha[i].mes;
           cout <<"\nel anio es: "<<endl;
          cin >> fecha[i].anio;
    }
}


   
   void generarAdvertencia(Carro carro[1]){
         for(int i = 0; i < 1; i++){
         cout <<"propietario: " <<carro[i].propietario <<endl;
  cout <<"Multas: " <<carro[i].multas <<endl;
}
}


    
    int main (){
     Carro carro[1];
     
     Fecha fecha[1];
     
     exhibirRegistro(carro);
     
     cantidadMultados(carro);
    
     antiguedad(fecha);
     
      generarAdvertencia(carro);
      
     return 0;
     
    }#include <iostream>
using namespace std;

struct Fecha{
 int dia;
 int mes;
 int anio;
};
  struct  Carro{
      
 char placa[20],propietario[20];
int fabricacion;  
int multas;
Fecha fecha;
};


    
   void exhibirRegistro(Carro carro[1]){
       for(int i = 0; i < 1; i++){
           
            cout <<"El Carro tiene la siguiente placa "  <<endl;
  cin.getline(carro[i].placa,20); 
  
  cout <<"El Dueño del carro es " <<endl;
  cin.getline(carro[i].propietario,20);
  
  cout <<"La multas almacenadas son " <<endl;
  cin>> carro[i].multas;
  
   cout <<"Año de fabricacion "  <<endl;
  cin >> carro[i].fabricacion;
    cin.ignore();
}

   }
   
void cantidadMultados(Carro carro[1]){
     for(int i = 0; i < 1; i++){
      cout <<"Esta son la cantida de multas del dueño " <<endl;
  cin>> carro[i].multas;
         
     }
}

void antiguedad(Fecha fecha[1]){
    for(int i = 0; i < 1; i++){
         cout <<"\nel dia es: "<<endl;
          cin >> fecha[i].dia;
         cout <<"\nel mes es: "<<endl;
          cin >> fecha[i].mes;
           cout <<"\nel anio es: "<<endl;
          cin >> fecha[i].anio;
    }
}


   
   void generarAdvertencia(Carro carro[1]){
         for(int i = 0; i < 1; i++){
         cout <<"propietario: " <<carro[i].propietario <<endl;
  cout <<"Multas: " <<carro[i].multas <<endl;
}
}


    
    int main (){
     Carro carro[1];
     
     Fecha fecha[1];
     
     exhibirRegistro(carro);
     
     cantidadMultados(carro);
    
     antiguedad(fecha);
     
      generarAdvertencia(carro);
      
     return 0;
     
    }