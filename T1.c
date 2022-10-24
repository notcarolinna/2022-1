#include <stdio.h>

int main() {

  
  /*

1) Receber salário báse b, número de dependentes d, número de anos de casa c,
ano atual;

2) Recebe acréscimo de 1% sobre o salário base para cada dependente (máx 5 dep);

3) Se o funcionário tem menos de 3 dependentes, recebe um acréscimo de 4% sobre
o salário base para cada 5 anos de casa que ele tem (máx 6 acréscimos);

4) Se o funcionário tem 3 ou mais dependentes, ele recebe um acréscimo de 7%
sobre o salário base para cada 8 anos de casa que ele tem (máx 5 acréscimos);

5) Todos ganham 1% extra de aumento sobre o salário base se for um ano bissexto

  */
  /*

  p = dinheiro referente a porcentagem de acréscimo referente ao tempo de casa;
  rc = parte inteira da divisão do tempo de casa para saber se deve ou não
  receber o bônus; 
  a_d = dinheiro referente a quantidade de dependentes;

  */

  
  float salario_base, salario_final, a_d;
  float p = 0, bissexto = 0;
  int dependentes, anos_casa, ano_atual, rc;

  printf("Digite o seu salario: ");
  scanf("%f", &salario_base);
  
  printf("Digite o numero seu de dependentes: ");
  scanf("%d", &dependentes);

  printf("Digite o seu tempo de empresa: ");
  scanf("%d", &anos_casa);

  printf("Digite o seu ano: ");
  scanf("%d", &ano_atual);

  if (((ano_atual % 4 == 0) && (ano_atual % 100 != 0)) || (ano_atual % 400 == 0)) {
    printf("%d É um ano bissexto.\n", ano_atual);
    bissexto = salario_base * 0.01;
  }

  switch (dependentes) {
    
  case 0:
    rc = anos_casa / 5;
    if (rc > 0) {
      if (rc > 6) {
        rc = 6;
      }
      p = salario_base * 0.04;
      p = p * rc;
    }
    salario_final = salario_base + p + bissexto;
    printf("Salario Final: %.2f", salario_final);
    break;

  case 1:
    rc = anos_casa / 5;
    if (rc > 0) {
      if (rc > 6) {
        rc = 6;
      }
      p = salario_base * 0.04;
      p = p * rc;
    }
    a_d = dependentes * (salario_base * 0.01);
    salario_final = salario_base + p + bissexto + a_d;
    printf("Salario Final: %.2f", salario_final);
    break;

  case 2:
    rc = anos_casa / 5;
    if (rc > 0) {
      if (rc > 6) {
        rc = 6;
      }
      p = salario_base * 0.04;
      p = p * rc;
    }
    a_d = dependentes * (salario_base * 0.01);
    salario_final = salario_base + p + bissexto + a_d;
    printf("Salario Final: %.2f", salario_final);
    break;

  case 3:
    rc = anos_casa / 8;
    if (rc > 0) {
      if (rc > 5) {
        rc = 5;
      }
      p = salario_base * 0.07;
      p = p * rc;
    }
    a_d = dependentes * (salario_base * 0.01);
    salario_final = salario_base + p + bissexto + a_d;
    printf("Salario Final: %.2f", salario_final);
    break;

  case 4:
    rc = anos_casa / 8;
    if (rc > 0) {
      if (rc > 5) {
        rc = 5;
      }
      p = salario_base * 0.07;
      p = p * rc;
    }
    a_d = dependentes * (salario_base * 0.01);
    salario_final = salario_base + p + bissexto + a_d;
    printf("Salario Final: %.2f", salario_final);
    break;

  default:
    rc = anos_casa / 8;
    if (rc > 0) {
      if (rc > 5) {
        rc = 5;
      }
      p = salario_base * 0.07;
      p = p * rc;
    }
    a_d = 5 * (salario_base * 0.01);
    salario_final = salario_base + p + bissexto + a_d;
    salario_final = salario_base + p + bissexto;
    
    printf("Salario Final: %.2f", salario_final);
    
    break;
  }

}
