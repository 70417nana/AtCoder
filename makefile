out: print.o
	g++ -o out print.cpp
.c.o:
	g++ -cpp $<
clean:
	rm -f *.o