OBJS = datawrangler.o dataentry.o Markup.o plotter.o searcher.o user.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c  -liconv
LFLAGS = -Wall -liconv

p1 : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o p1

datawrangler.o: Markup.h Markup.cpp dataentry.h dataentry.cpp searcher.h searcher.cpp plotter.h plotter.cpp user.h user.cpp
	$(CC) $(CFLAGS) datawrangler.cpp

Markup.o: Markup.h Markup.cpp
	$(CC) $(CFLAGS) Markup.cpp 

dataentry.o: dataentry.h dataentry.cpp searcher.h searcher.cpp
	$(CC) $(CFLAGS) dataentry.cpp

searcher.o: searcher.h searcher.cpp Markup.h Markup.cpp 
	$(CC) $(CFLAGS) searcher.cpp

plotter.o: plotter.h plotter.cpp searcher.h searcher.cpp
	$(CC) $(CFLAGS) plotter.cpp

user.o: user.h user.cpp dataentry.h dataentry.cpp Markup.h Markup.cpp
	$(CC) $(CFLAGS) user.cpp

clean:
	\rm *.o *p1 *p1.tar

tar:
	tar cfv p1.tar Markup.h Markup.cpp dataentry.h dataentry.cpp searcher.h searcher.cpp plotter.h plotter.cpp user.h user.cpp

