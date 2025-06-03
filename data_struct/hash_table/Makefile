FLAGS := -Wall -Werror -Wextra -Wpedantic -std=c11
.PHONY: all clean run_test

all: run_test

test: hash_table.c hash_table.h test.c
	@clang $(FLAGS) test.c hash_table.c -o test

run_test: test
	@echo "---------------------------start test---------------------------------"
	@./test 
	@echo "----------------------------end test----------------------------------"
	@rm -f test

clean:
	rm -f test
