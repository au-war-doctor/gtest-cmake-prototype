main: main.o palindromenumber.o
	gcc -o main main.o util.o

main.o: main.c palindromenumber.h
	gcc -c -g main.c

palindromenumber.o: palindromenumber.c palindromenumber.h
	gcc -c -g palindromenumber.c