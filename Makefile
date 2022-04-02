CC = gcc
BIN = ./bin/
SRC= ./src/

.PHONY: clean

clean:
	rm -rf $(BIN)*.o $(BIN)*~

niceCream: $(BIN)niceCream

$(BIN)niceCream: $(SRC)niceCream.c
	$(CC) $^ -o $@
