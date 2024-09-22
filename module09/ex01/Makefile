CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = RPN

SRC = main.cpp RPN.cpp

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

.PHONY: re all clean fclean