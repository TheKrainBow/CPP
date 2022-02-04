CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address -fsanitize=leak -fsanitize=undefined

NAME = Module01

SRCS = main.cpp Sed.cpp 

OBJ = $(SRCS:.cpp=.o)

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