CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -MMD 

NAME = Module05

SRC = Form.cpp Bureaucrat.cpp main.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

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