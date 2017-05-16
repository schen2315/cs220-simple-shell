

helloworld:	helloworld.o
	#./helloworld hello world

helloworld.o: helloworld.c
	gcc -Wall -g -o helloworld helloworld.c

test : shell helloworld
	./shell
	
debug : shell
	gdb shell

shell : shell.c
	gcc -Wall -g -o shell shell.c	
	
clean :
	-rm shell helloworld
	