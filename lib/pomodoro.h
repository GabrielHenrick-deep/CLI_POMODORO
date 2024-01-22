/*
 * Project: Pomodoro
 * Author: Gabriel-deep
 * Language: C
 * Description: A simple Pomodoro application in C for managing work and break
 * periods. GitHub: https://github.com/GabrielHenrick-deep/Terminal_Pomo.git
 * Contact: gabriel.henrick@ufu.br
 * Creation Date: 15/01/2024
 */
#ifndef POMODORO_H
#define POMODORO_H

#include "stdio.h"
#include <stdlib.h>

// Definindo nossa TAD
typedef struct {

  int work_time;
  int sleep_time;

} pomo;

// Definindo Funcoes

void pomodoro(int *w, int *s);                       // Default pomodoro
void pomodoro_cost(int *usr_workt, int *usr_sleept); // Custm pomodoro
void sleep_cicle(int n);
void clean_buffer();

#endif
