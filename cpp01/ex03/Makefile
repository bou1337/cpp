# Compiler and flags
CXX = c++
CXXFLAGS = -Wall -Wextra -std=c++11

# Source files
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

# Object files (generated from the source files)
OBJ = $(SRC:.cpp=.o)

# Name of the executable (you can change this to your name or any desired name)
NAME = program  # You can change 'program' to your preferred executable name
TARGET = $(NAME)

# Default target: all
all: $(TARGET)

# Rule to create the executable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Rule to compile .cpp files to .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule to remove object files and the executable
clean:
	rm -f $(OBJ) $(TARGET)

# Rule to clean and recompile everything (clean + all)
fclean: clean

# Rule to recompile everything from scratch (fclean + all)
re: fclean all

# This makes sure that 'all', 'clean', 'fclean', and 're' are not files
.PHONY: all clean fclean re
