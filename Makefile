#-*-Makefile-*-
CC=gcc
OBJECTS_MAIN=main.o
OBJECTS_MAIN2=main2.o
FLAGS= -Wall -g
OBJECT_ameer=ameer.o
OBJECT_find=find.o

all: ameer find
	 
ameer: ameerd $(OBJECTS_MAIN)
	$(CC) $(OBJECTS_MAIN) -o ameer ./libameer.so
	
ameerd: $(OBJECT_ameer)
	$(CC) -shared -o libameer.so $(OBJECT_ameer)

ameer.o: ameer.c
	$(CC) $(FLAGS) -fPIC -c ameert.c

$(OBJECTS_MAIN): main.c ex3.h
	$(CC) $(FLAGS) -fPIC -c main.c
	
############################################################################
find: findd $(OBJECTS_MAIN2)
	$(CC) $(OBJECTS_MAIN2) -o find ./libfind.so
	
findd: $(OBJECT_find)
	$(CC) -shared -o libfind.so $(OBJECT_find)
	
find.o: find.c
	$(CC) $(FLAGS) -fPIC -c find.c

$(OBJECTS_MAIN2): main2.c ex3.h
	$(CC) $(FLAGS) -fPIC -c main2.c

.PHONY: clean all

clean:
	rm -f *.o find ameer *.so 