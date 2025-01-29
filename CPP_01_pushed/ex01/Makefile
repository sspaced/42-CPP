CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)  
TARGET = zombie_horde

all: $(TARGET)

$(TARGET): $(OBJ) Makefile
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp Zombie.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all