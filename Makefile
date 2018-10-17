CC = g++

CompileParms = -c -Wall

OBJS = datastructuren1.o

Opdr: $(OBJS)
	$(CC) $(OBJS) -o Stapel

datastructuren1.o: datastructuren1.cc  backspace.h linkedlist.h stlarray.h stlstack.h stlvector.h
	$(CC) $(CompileParms)  datastructuren1.cc

clean:
	rm -f $(OBJS) Stapel
