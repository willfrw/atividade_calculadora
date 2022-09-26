#include <stdio.h>
#include <math.h> /*Fonte de pesquisa, inclusão de biblioteca math.h: http://linguagemc.com.br/a-biblioteca-math-h/*/

int main(void)
{
  printf("Autor: William Freire Wang \n");
  printf("Curso: Análise e Desenvolvimento de Sistemas\n");
  printf("Universidade: Unilasalle\n");
  printf("Matrícula: 202221378\n\n");
  /*O programa serve como uma calculadora que recebe dados do usuários para calcular raiz quadrada, soma, subtração, divisão, multiplicação ou potenciação*/
  calculadora();
  
}

/*Fonte sobre criação de loop e funções: http://linguagemc.com.br/funcoes-em-c/ https://www.tutorialspoint.com/cprogramming/c_for_loop.htm*/

/*Função linha: cria uma linha com asterisco com base no input do usuário do tamanho da linha */
int linha(int qnt) {
  int i;
  for (i = 0; i < qnt ; i++) {
    printf("*-");
    }
}
/*Função calculadora que faz todos os cálculos propostos*/
int calculadora(void) {
  int opcao = 1, escolha = 0, inteiro;
  float operando1, operando2, resultado;
  linha(10);
  printf("\n   Calculadora\n");
  linha(10); 
  descalc();
  printf("\n");
  do { /*Loop condicionadl do ~ while que dura até que a opção do usuário seja diferente de 1 (SIM = TRUE)*/
    operando1 = 0, operando2 = 0, resultado = 0;
    printf("\n");
    linha(25);
    printf("\n\nEscolha a operação:\n[1] - Raiz Quadrada \n[2] - Soma\n[3] - Subtração\n[4] - Multiplicação\n[5] - Divisão\n[6] - Potenciação\n");
    scanf("%d", &escolha);
    /*Escolha do usuário sobre qual operação fazer dentre 1 a 6*/
    if (escolha < 1 || escolha > 6) {
      /*Se o usuário colocar uma opção inválida o programa retorna para o início*/
      printf("Opção inválida!\nTente novamente.\n");
      return calculadora();
    }
    else if (escolha == 1) {
      printf("Digite o valor que deseja calcular a Raiz Quadrada: ");
      scanf("%f", &operando1);
      resultado = sqrt(operando1); /*Utilização da função sqrt() da biblioteca math.h que aceita um input, retornando a raiz quadrada do valor inserido*/
      printf("Resultado: %.2f\n", resultado);
    }
    else if (escolha == 2) {
      printf("Digite os valores que deseja calcular a soma:\n");
      printf("Parcela 1: ");
      scanf("%f", &operando1);
      printf("Parcela 2: ");
      scanf("%f", &operando2);
      resultado = operando1 + operando2;
      printf("Resultado: %.2f\n", resultado);
    }
    else if (escolha == 3) {
      printf("Digite os valores que deseja calcular a subtração:\n");
      printf("Minuendo: ");
      scanf("%f", &operando1);
      printf("Subtraendo: ");
      scanf("%f", &operando2);
      resultado = operando1 - operando2;
      printf("Resultado: %.2f\n", resultado);
    }
    else if (escolha == 4) {
      printf("Digite os valores que deseja calcular a multiplicação:\n");
      printf("Fator 1: ");
      scanf("%f", &operando1);
      printf("Fator 2: ");
      scanf("%f", &operando2);
      resultado = operando1 * operando2;
      printf("Resultado: %.2f\n", resultado);
    }
    else if (escolha == 5) {
      printf("Digite os valores que deseja calcular a divisão:\n");
      printf("Dividendo: ");
      scanf("%f", &operando1);
      printf("Divisor: ");
      scanf("%f", &operando2);
      if (operando2 == 0) { /*Se o usuário colocar o divisor igual a 0, imprime na tela que o valor é inválido*/
        printf("\nValor inválido! Resultado indefinido: Não existe divisão por 0 (ZERO).\n");
      }
      else { /*Se o valor for diferente 0, o programa faz o cálculo*/
        resultado = operando1 / operando2;
        printf("Resultado: %.2f\n", resultado);  
      }  
    }
    else if (escolha == 6) {
      printf("Digite os valores que deseja calcular a potenciação:\n");
      printf("Base: ");
      scanf("%f", &operando1);
      printf("Expoente: ");
      scanf("%f", &operando2);
      resultado = pow(operando1, operando2); /*Utilização da função pow() da biblioteca math.h que possui dois inputs de valor o primeiro com a base e o segundo com o expoente*/
      printf("Resultado: %.2f\n", resultado);
    }
    printf("\nDeseja continuar? \n[1] - Sim\n[2] - Não\n");
    scanf("%d", &opcao);
    
  } while (opcao == 1); /*Final do Loop*/ 
  linha(25);
  printf("\nObrigado por usar nossos serviços!\nVolte sempre!\n");
  linha(25);
    return 0;
}

int descalc(void) {
  printf("\n|-----------------|\n       1 + 1 = 2\n|_________________|\n| [7] [8] [9] [/] |\n| [4] [5] [6] [x] | \n| [1] [2] [3] [-] |\n| [0] [.] [+] [=] |\n| ________________|\n");
}