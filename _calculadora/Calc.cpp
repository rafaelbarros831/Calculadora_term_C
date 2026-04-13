#include <iostream>
#include <string>


float fun_Soma(float valor1, float valor2){
 
  return valor1 + valor2;
}

float sun_Sub(float valor1, float valor2){

  return valor1 - valor2;
}

float fun_Mult(float valor1, float valor2){

  return valor1 * valor2;
}

float fun_Div(float valor1, float valor2){

  return valor1 / valor2;
}


int main() {

    float valor1, valor2;

std::string operacao;

std::cout<<"Digite 'Som' para somar, 'Sub' para subtrair, 'Mult' para multiplicar e 'Div' para dividir.\n";

while(true){

std::cout<<"Qual operacao matematica quer fazer?\n";
std::cin>>operacao;

if (operacao == "SOS"){
break;
}

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

else if(operacao == "Mult"){
    
    float result = fun_Mult(valor1, valor2);
     std::cout<<"RESULTADO = "<<result<<"\n";
    
}

else if(operacao == "Div"){
    
    float result = fun_Div(valor1, valor2);
     std::cout<<"RESULTADO = "<<result<<"\n";

}

 system("pause");


}
 
  return 0;

}