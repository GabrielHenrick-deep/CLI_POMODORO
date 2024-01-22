#include "/home/gabriel/MyProjects/simple_pomodoro/lib/pomodoro.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int default_work_time = 25, default_sleep_time = 5;
  int custom_work_time, custom_sleep_time;
  char option;

  while (1) {
    printf("\nPomodoro Menu: ");
    printf("\n===============================\n");
    printf("1. Pomodoro Padrão\n");
    printf("2. Pomodoro Personalizavel\n");
    printf("0. Sair\n");
    printf("===============================\n");
    printf("!!Caso deseje para tecle (Ctrl+c)!!");
    printf("\nDigite uma opção válida: ");
    scanf(" %c", &option);
    clean_buffer();

    if (option == '0')
      break;

    switch (option) {
    case '1':
      printf("\n");
      pomodoro(&default_work_time, &default_sleep_time);
      printf("Sessão de Pomodoro Padrão Concluída.\n");
      break;

    case '2':
      printf(
          "\nDigite o tempo de trabalho (minutos) e o de descanso (minutos): ");
      scanf("%d%d", &custom_work_time, &custom_sleep_time);
      printf("\n");
      pomodoro_cost(&custom_work_time, &custom_sleep_time);
      printf("Sessão de Pomodoro Personalizado Concluída.\n");
      break;

    default:
      printf("Opção desconhecida.\n");
    }

    printf("\nTecle ENTER para continuar...");
    clean_buffer();
  }

  printf("Programa encerrado.\n");
  return EXIT_SUCCESS;
}
