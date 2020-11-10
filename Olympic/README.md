# Commands

g++ player.cpp test.cpp -c
g++ player.o test.o -lgtest -lgtest_main -lpthread -o out
./out

g++ player.cpp swimming.cpp test.cpp -c
g++ player.o swimming.o test.o -lgtest -lgtest_main -lpthread -o out
./out

g++ player.cpp swimming.cpp olympic.cpp test.cpp -c
g++ player.o swimming.o test.o olympic.o -lgtest -lgtest_main -lpthread -o out
./out

# Chechklist
DataMemebers 
- playerName
- Team
- Sport
- Medals

base class player.h
Datamembers
- playerName
- Team

Derived Class swiming

swiming p1(Name,Cntry,Game,Medal)

maxGoldMedal
