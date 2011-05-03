CC=gcc
CXX=g++
CFLAGES=# -g -Wno-deprecated 
INCDIR=#-I../include\
#	-I../include/common
LIBS=#-L../lib -lcommon -lpthread
SRC=$(shell ls *.cpp)
OBJ=$(SRC:.cpp=.o)
Target=$(shell basename `pwd`)
all:clean $(Target)
$(Target):$(OBJ)
	$(CXX) $(CFLAGES) $(INCDIR) -o $(Target) $^ $(LIBS)
%.o:%.cpp
	$(CXX) $(CFLAGES) $(INCDIR) -c $< -o $@ $(LIBS) 
%.o:%.cc
	$(CXX) $(CFLAGES) -c $< -o $@ $(LIBS) 
%.o:%.c
	$(CC) $(CFLAGES) -c $< -o $@ $(LIBS)
clean:
	@ rm -rf *.o	
	@ rm -f $(Target)
