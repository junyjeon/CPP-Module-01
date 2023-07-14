NAME		=	Weapon

CXX			=	clang++
CXXFLAGS		=	-std=c++98 -Wall -Wextra -Werror
#CXXFLAGS		+=	-fsanitize=address

INC_DIR		=	.

BUILD_DIR	=	bulid

SRC			=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ			=	$(patsubst %.c, $(BUILD_DIR)/%.o, $(SRC))

all:	$(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) -I$(INC_DIR) -o $@ $^
	@echo "$(GREEN)SUCCESS!$(END)"

$(BUILD_DIR)/%.o: %.c | $(BUILD_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

clean:
	@$(RM) -r $(BUILD_DIR)

fclean: clean
	@$(RM) -r $(NAME)
	@echo "${YELLOW}> Cleaning of the Weapon has been done.❌${END}"

re: fclean all

.PHONY: all clean fclean re

Yellow : \033[0;33m
Green  : \033[0;32m