CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -MMD -fsanitize=address -fsanitize=leak -fsanitize=undefined

NAME = Module01

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp=.d)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
-include $(DEP)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ) $(DEP)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re all clean fclean