CXX = clang++

CXXFLAGS = -Wall -Werror -Wextra

NAME = Module03

SRC = Brain.cpp Animal.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Dog.cpp Main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
				$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
				rm -rf $(OBJ)

fclean: clean
				rm -rf $(NAME)

re: fclean all