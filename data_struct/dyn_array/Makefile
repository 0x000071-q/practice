FLAGS := -Wall -Werror -Wextra -Wpedantic -std=c11
.PHONY: all clean run_test

all:  run_test

test: dyn_arr.c dyn_arr.h test.c
	@clang $(FLAGS) test.c dyn_arr.c -o test

run_test: test
run_test: test
	@echo "---------------------------start test---------------------------------"
	@./test 
	@echo "----------------------------end test----------------------------------"
	@rm -f test

clean:
	rm -f test
