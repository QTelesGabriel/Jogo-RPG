# Nome do executável
EXEC = jogo

# Compilador
CC = gcc

# Flags de compilação
CFLAGS = -Wall -Wextra -std=c11

# Arquivos fonte e objeto
SRCS = jogo.c
OBJS = jogo.o funcoes_auxiliares.o

# Regra padrão
all: $(EXEC)

# Compilar o executável
$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)

# Compilar jogo.o
jogo.o: jogo.c jogo.h funcoes_auxiliares.h
	$(CC) $(CFLAGS) -c jogo.c

# Limpar arquivos gerados
clean:
	rm -f *.o $(EXEC)
