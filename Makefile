# -----------------------------------------------------------
# holbertonschool-printf Makefile 
# -----------------------------------------------------------
# Usage:
#   make        # build printf (no tests)
#   make clean  # remove objects
#   make fclean # remove objects + binary
#   make re     # rebuild from scratch
#   make betty  # run Betty style & doc checks (requires tools installed)
#   make test   # build with local tests (uses -Wno-format)--

CC      = gcc
CFLAGS  = -Wall -Werror -Wextra -pedantic -std=gnu89
TESTEXE = test_printf
NAME    = printf
SRCS    = $(wildcard *.c)
OBJS    = $(SRCS:.c=.o)

# Local test main (ignored by git). Adjust path as needed.
TEST_MAIN = tests/main.c

.PHONY: all clean oclean fclean re betty test

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c main.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

oclean: clean

fclean: clean
	rm -f $(NAME) $(TESTEXE)

re: fclean all

betty:
	betty *.c *.h || true

# Build with local test main; adds -Wno-format for side-by-side std printf comps.
test: $(SRCS) $(TEST_MAIN)
	$(CC) $(CFLAGS) -Wno-format $(SRCS) $(TEST_MAIN) -o $(TESTEXE)
	@echo "Built $(TESTEXE). Run ./$(TESTEXE) to compare outputs."

