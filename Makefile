TASKNAME=Pro_head
OUTPUT=WhereAreYouGoing

$(OUTPUT): main.o shortest.o map.o distance.o
	gcc -Wall -o $(OUTPUT) main.o shortest.o map.o distance.o -lm

main.o: main.c $(TASKNAME).h
	gcc -Wall -c main.c -lm

shortest.o: shortest.c $(TASKNAME).h
	gcc -Wall -c shortest.c -lm

map.o: map.c $(TASKNAME).h
	gcc -Wall -c map.c -lm

distance.o: distance.c $(TASKNAME).h
	gcc -Wall -c distance.c -lm
	
clean:
	rm -vf *.o *.exe $(OUTPUT)