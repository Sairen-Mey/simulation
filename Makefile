CC = gcc

# Змінили -Iheaders на -Iinclude, щоб компілятор бачив твою нову папку
CFLAGS = -Wall -Wextra -O2 -Iinclude -Itests

TEST_TARGET = run_tests

.PHONY: all clean test

all: m

# Додали src/resources.c сюди, щоб він компілювався разом із main.c
m: src/main.c src/resources.c src/coordinates.c
	$(CC) $(CFLAGS) src/main.c src/resources.c src/coordinates.c -o m

test: src/resources.c src/coordinates.c tests/test_main.c tests/test_resources.c tests/test_coordinates.c
	$(CC) $(CFLAGS) src/resources.c src/coordinates.c tests/test_main.c tests/test_resources.c tests/test_coordinates.c -o $(TEST_TARGET)
	@echo "================ Running Tests ================"
	./$(TEST_TARGET) -v
	@echo "==============================================="


clean:
	rm -f m $(TEST_TARGET)