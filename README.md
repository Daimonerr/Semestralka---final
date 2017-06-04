# Semestralka---final

#RUN WITH
g++ -Wall -pedantic ship.cpp game.cpp timer.cpp obstacle.cpp bullet.cpp object.cpp obstacleA.cpp 
obstacleB.cpp obstacleC.cpp main.cpp background.cpp load.cpp yxpart.cpp -lncurses -std=c++11 && ./a.out

#COUNT WITH
wc -l ship.cpp game.cpp timer.cpp obstacle.cpp bullet.cpp object.cpp obstacleA.cpp obstacleB.cpp 
obstacleC.cpp test.cpp background.cpp ship.h game.h timer.h obstacle.h bullet.h object.h obstacleA.h
obstacleB.h obstacleC.h background.h yxpart.h yxpart.cpp load.h load.cpp

#CHECK WITH
valgrind --leak-check=full --show-leak-kinds=all -v ./a.out
