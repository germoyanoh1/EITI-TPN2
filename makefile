SRC_DIR = ./src
OUT_DIR = ./build
OBJ_DIR = $(OUT_DIR)/obj
BIN_DIR = $(OUT_DIR)/bin

#guarda en SRC_FILES el listado de todos los .c
SRC_FILES = $(wildcard $(SRC_DIR)/*.c) 
#guarda en OBJ_FILES todos los .o , reemplazando el nombre de los .c
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))

#crea la carpeta .bin y gcc enlaza el binario final, con todos los .o
all: $(OBJ_FILES)
	@echo Enlazando el binario final 
	@mkdir -p $(BIN_DIR)
	@gcc $(OBJ_FILES) -o $(BIN_DIR)/app.out

#compila todo los .c de SRC_DIR y guarda en OBJ_DIR los .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c 
	@echo Compilando $< ...
	@mkdir -p $(OBJ_DIR)
	@gcc -o $@ -c $< 
