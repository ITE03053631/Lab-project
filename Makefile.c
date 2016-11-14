server:	server.o client.o
	gcc -o server server.o
	gcc -o client client.o
server.o:server.c client.o
	gcc -c server.c
	gcc -c client.c
clean:
	rm *.o
