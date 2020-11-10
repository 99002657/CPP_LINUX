all: all.out
all.out : player.o olympic.o swimming.o test.o 
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread

test.o: test.cpp player.h swimming.h
	g++ $< -c
olympic.o : olympic.cpp olympic.h swimming.h player.h
	g++ $< -c
swimming.o : swimming.cpp swimming.h player.h
	g++ $< -c    
player.o : player.cpp player.h
	g++ $< -c
clean:
	rm -rf *.o *.out
