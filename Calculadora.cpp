#include <iostream>
using namespace std;
int main() {
 
  int numero1, numero2, resultado, op;
 
  do{
   
    cout << "\n1 - Somar" << "\n";
    cout << "2 - Subtrair" << "\n";
    cout << "3 - Multiplicar" << "\n";
    cout << "4 - Dividir" << "\n";
    cout << "5 - Sair" << "\n";
    cout << "Escolha a opcao: ";
    cin >> op;
 
     
    if(op==1){
      cout << "\nDigite o numero 1: ";
      cin >> numero1;
      cout << "\nDigite o numero 2:";
      cin >> numero2;
      resultado = numero1 + numero2;
      cout << "\nResultado Parcial: " << resultado << "\n";
         
    }
    else if(op==2){
      cout << "\nDigite o numero 1: ";
      cin >> numero1;
      cout << "\nDigite o numero 2:";
      cin >> numero2;
      resultado = numero1 - numero2;
      cout << "\nResultado Parcial: " << resultado << "\n";
    }
    else if(op==3){
      cout << "\nDigite o numero 1: ";
      cin >> numero1;
      cout << "\nDigite o numero 2:";
      cin >> numero2;
      resultado = numero1 * numero2;
      cout << "\nResultado Parcial: " << resultado << "\n";
    }
    else if(op==4){
      cout << "\nDigite o numero 1: ";
      cin >> numero1;
      cout << "\nDigite o numero 2:";
      cin >> numero2;
      resultado = numero1 / numero2;
      cout << "\nResultado Parcial: " << resultado << "\n";
    }
 
  }while(op!=5);
 
  cout << "\nFim do Programa.";
}