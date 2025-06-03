#FLAGS := -Wall -Werror -Wextra -Wpedantic -std=c11
.PHONY: all clean run_test

all: test run_test

test: dyn_arr.c dyn_arr.h test.c
	clang $(FLAGS) test.c dyn_arr.c -o test

run_test: test
	@echo "-------- starting test --------"
	@./test 
	@echo "-------- test passed --------"

clean:
	rm -f test
