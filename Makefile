CFLAGS=-Wall -Werror

clean:
	rm -f myexe result
	rm -r tests-out

run-task1:
	gcc task1.c $(CFLAGS) -o myexe
	./myexe

run-task2:
	gcc task2.c $(CFLAGS) -o myexe
	./myexe
