TASKNAME=Pro_head
OUTPUT=WhereAreYouGoing

$(OUTPUT): main.o shortest.o
	gcc -Wall -o $(OUTPUT) main.o shortest.o -lm

main.o: main.c $(TASKNAME).h
	gcc -Wall -c main.c -lm

shortest.o: shortest.c $(TASKNAME).h
	hcc -Wall -c shortest.c -lm

clean:
	rm -vf *.o *.exe $(OUTPUT)