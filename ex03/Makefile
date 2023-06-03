NAME		=	Weapon

CC			=	clang++
CFLAGS		=	-std=c++98 -Wall -Wextra -Werror
#CFLAGS		+=	-fsanitize=address

INC_DIR		=	.

BUILD_DIR	=	bulid

SRC			=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ			=	$(patsubst %.c, $(BUILD_DIR)/%.o, $(SRC))

all:	$(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -I$(INC_DIR) -o $@ $^
	@echo "$(GREEN)SUCCESS!$(END)"

$(BUILD_DIR)/%.o: %.c | mkdir
	@$(CC) $(CFLAGS) -c $< -o $@

mkdir:
	@mkdir -p $(BUILD_DIR)

clean:
	@$(RM) -r $(BUILD_DIR)
	@echo "${YELLOW}> All objects files of the Weapon have been deleted.❌${END}"

fclean: clean
	@$(RM) -r $(NAME)
	@echo "${YELLOW}> Cleaning of the Weapon has been done.❌${END}"

re: fclean
	@$(MAKE)
	@echo "$(GREEN)Cleaned and rebuilt everything for Weapon!${END}"

.PHONY: all clean fclean re mkdir