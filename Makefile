CC = gcc
BIN = ./bin/
SRC= ./src/

.PHONY: clean write read dump

clean:
	rm -rf $(BIN)*.o $(BIN)*~

niceCream: $(BIN)niceCream

$(BIN)niceCream: $(SRC)niceCream.c
	$(CC) $^ -o $@

write: niceCream
	./bin/niceCream -w niceCream

read: niceCream
	./src/read.sh

dump: niceCream
	hexdump -C dump | grep niceCream
