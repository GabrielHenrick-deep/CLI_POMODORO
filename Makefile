CFLAGS = -Wall -Werror
LIB_DIR = /home/gabriel/MyProjects/simple_pomodoro/lib
SRC_DIR = /home/gabriel/MyProjects/simple_pomodoro/src
BIN_DIR = /home/gabriel/MyProjects/simple_pomodoro/bin
OBJ_DIR = /home/gabriel/MyProjects/simple_pomodoro/obj

all: $(BIN_DIR)/CLI_POMODORO

$(BIN_DIR)/CLI_POMODORO: $(OBJ_DIR)/CLI_POMODORO.o $(OBJ_DIR)/pomodoro.o
	gcc $(OBJ_DIR)/CLI_POMODORO.o $(OBJ_DIR)/pomodoro.o -o $(BIN_DIR)/Pomodoro

$(OBJ_DIR)/pomodoro.o: $(SRC_DIR)/pomodoro.c $(LIB_DIR)/pomodoro.h | $(OBJ_DIR)
	gcc $(CFLAGS) -c $(SRC_DIR)/pomodoro.c -o $(OBJ_DIR)/pomodoro.o

$(OBJ_DIR)/CLI_POMODORO.o: $(SRC_DIR)/CLI_POMODORO.c $(LIB_DIR)/pomodoro.h | $(OBJ_DIR)
	gcc $(CFLAGS) -c $(SRC_DIR)/CLI_POMODORO.c -o $(OBJ_DIR)/CLI_POMODORO.o

# Criação do diretório de objetos
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

#Criando diretorio de binarios
$(BIN_DIR):
	mkdir	-p $(BIN_DIR)
