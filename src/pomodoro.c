#include "/home/gabriel/MyProjects/simple_pomodoro/lib/pomodoro.h"
#include <stdio.h>
#include <unistd.h>

// Implementando funcoes

void pomodoro(int *w, int *s) {
  int work_time = *w;
  int sleep_time = *s;
  int time_pomo = 0;

  while (time_pomo < 4) {

    printf("Inciando tempo de trabalho/estudo...\n");
    sleep_cicle(work_time * 60);
    printf("Inciando tempo de descaso...\n");
    sleep_cicle(sleep_time * 60);

    time_pomo++;
  }
}

void pomodoro_cost(int *usr_workt, int *usr_sleept) {
  int work_time = *usr_workt;
  int sleep_time = *usr_sleept;
  int time_pomo = 0;

  while (time_pomo < 4) {
    printf("Inciando tempo de trabalho/estudo...\n");
    sleep_cicle(work_time * 60);
    printf("Inciando tempo de descaso...\n");
    sleep_cicle(sleep_time * 60);
    time_pomo++;
  }
}

void sleep_cicle(int n) {
  for (int i = n; i >= 0; i--) {
    int minutes = i / 60;
    int seconds = i % 60;
    printf("\rTempo restante: %02d:%02d", minutes, seconds);
    fflush(stdout);
    sleep(1);
  }
  printf("\n");
}

void clean_buffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF)
    ;
}
