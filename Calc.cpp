#include <iostream>
#include <string>


float fun_Soma(float valor1, float valor2){
 
  return valor1 + valor2;
}

float sun_Sub(float valor1, float valor2){

  return valor1 - valor2;
}


int main() {

    float valor1, valor2;

std::string operacao;

std::cout<<"Digite Som para somar e Sub para subtrair.\n";

std::cout<<"Qual operacao matematica quer fazer?\n";
std::cin>>operacao;

std::cout<<"Insira o primeiro valor:";
std::cin>>valor1;

std::cout<<"Insira o segundo valor:";
std::cin>>valor2;

if (operacao == "Som"){

    float result = fun_Soma(valor1, valor2);
     std::cout<<"RESULTADO = "<<result<<"\n";

}

else if(operacao == "Sub"){

    float result = sun_Sub(valor1, valor2);
     std::cout<< "RESULTADO = "<<result<<"\n";

}


return 0;

}