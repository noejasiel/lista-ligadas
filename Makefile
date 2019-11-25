funciones.o: funciones.c
	gcc funciones.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o funciones.o
	gcc main.o funciones.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o funciones.o
