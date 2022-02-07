CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -MMD

NAME = what_type

SRC = main.cpp Base.cpp A.cpp B.cpp C.cpp

OBJ = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp=.d)

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