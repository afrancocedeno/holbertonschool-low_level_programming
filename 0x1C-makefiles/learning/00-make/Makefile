all: exe
# programm and its dependencies
exe: main.o add_two_numbers.o result.o
	gcc -Werror -Wextra -Wall -pedantic main.o add_two_numbers.o result.o -o exe

main.o: main.c calc.h
	gcc -Werror -Wextra -Wall -pedantic main.c -c

add_two_numbers.o: add_two_numbers.c calc.h
	gcc -Werror -Wextra -Wall -pedantic add_two_numbers.c -c

result.o: result.c calc.h
		gcc -Werror -Wextra -Wall -pedantic result.c -c

clean:
	rm -f exe *.o
