CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address -g

NAME = PmergeMe

SRC = main.cpp PMergeMe.cpp deque.cpp vector.cpp

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