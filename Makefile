CFLAGS=-Wall -Werror

clean:
	rm -f myexe

run-task1:
	gcc task1.c $(CFLAGS) -o myexe
	./myexe

run-task2:
	gcc task2.c $(CFLAGS) -o myexe
	./myexe
