CXX = clang++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

NAME = Module03

SRC = AMateria.cpp Ice.cpp Cure.cpp Character.cpp Main.cpp

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