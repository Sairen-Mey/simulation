CC = gcc


CFLAGS = -Wall -Wextra -O2 -Iinclude -Itests

BUILD_DIR = build
TEST_TARGET = $(BUILD_DIR)/run_tests

.PHONY: all clean test

all: $(BUILD_DIR)/m

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# suda pisaty .c *2
$(BUILD_DIR)/m: src/main.c src/resources.c src/coordinates.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) src/main.c src/resources.c src/coordinates.c -o $(BUILD_DIR)/m

# suda pisaty test .c and test .c *2
test: src/resources.c src/coordinates.c tests/test_main.c tests/test_resources.c tests/test_coordinates.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) src/resources.c src/coordinates.c tests/test_main.c tests/test_resources.c tests/test_coordinates.c -o $(TEST_TARGET)
	@echo "================ Running Tests ================"
	./$(TEST_TARGET) -v
	@echo "==============================================="


clean:
	rm -rf $(BUILD_DIR)