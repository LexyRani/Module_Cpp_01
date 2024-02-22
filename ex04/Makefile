# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 21:44:27 by aceralin          #+#    #+#              #
#    Updated: 2024/02/22 21:13:10 by aceralin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
#                           COMPILER, NORMS AND FLAGS                          #      
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
NAME			= replace
CXX				= c++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -I

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
#                                 FILES PATHS                                  #      
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#

##SOURCES##

SRCS_FILES		= main  File replace
SRCS            = $(addsuffix .cpp, $(SRCS_FILES))

#HEADERS##

HEADERS_FILES   = File replace
HEADERS			= $(addsuffix .hpp, $(HEADERS_FILES))
HEADERS_INC		= -I

##OBJECTS##	
				
OBJS_PATH		= objs/
OBJS_NAMES		= $(SRCS:.cpp=.o)
#OBJS_FOLDER     = $(addprefix $(OBJS_PATH), $(SRCS))
OBJS            = $(addprefix $(OBJS_PATH), $(OBJS_NAMES))

##DEPANDANCES##
DEPS	        = $(addprefix $(OBJS_PATH), $(SRCS:.cpp=.d))

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
#                                BASICS RULES                                  #      
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
all:	  header $(NAME) 
	
	@echo "\n$(BOLD)$(GREEN)\n[ ✔ ]\t$(NAME)\n$(WHITE)"
	@echo "$(BOLD)$(WHITE)▶ TO LAUNCH:\t./$(NAME)\n$(RESET)"
	
$(NAME):  $(HEADERS) $(OBJS)
		@$(CXX) $(CXXFLAGS) $(HEADERS_INC) $(OBJS) -o $(NAME)

$(OBJS_PATH)%.o: %.cpp 
	@mkdir -p $(@D) $(OBJS_PATH)
	$(CXX) $(CXXFLAGS) $(HEADERS_INC) -MMD -MP -o $@ -c $<
	@printf "$(YELLOW). . . compiling $(NAME) objects . . . $(ITALIC)$(GREY)%-33.33s\r$(RESET)" $@

clean:
ifeq ("$(shell test -d $(OBJS_PATH) && echo $$?)","0")
	@echo "$(YELLOW)\n. . . cleaning objects . . . \n$(RESET)"			
	$(RM) -rd $(OBJS_PATH)
	@echo "$(BOLD)$(GREEN)[ ✔ ]\tOBJECTS CLEANED\n$(RESET)"	
else	
	@echo "$(BLUE)\n* * NO OBJECTS TO CLEAN * *\n$(RESET)"
endif
#@${RM} $(OBJ_PATH) ${DEPS}

fclean:	clean
ifeq ("$(shell test -e $(NAME) && echo $$?)","0")
	@echo "$(YELLOW). . . cleaning rest . . .\n$(RESET)"
	@$(RM) $(NAME)
	@echo "$(BOLD)$(GREEN)[ ✔ ]\tALL CLEANED\n$(RESET)"
else
	@echo "$(BLUE)* * NOTHING TO CLEAN * *\n$(RESET)"
endif

re:	fclean all

-include ${DEPS}
.PHONY:			all clean fclean re 



#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
#                                CUSTOM RULES                                  #      
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#

define HEADER_PROJECT
 

░█▀▀░█▀█░█▀█░░░█▀█░▀█░░░░█▀▀░█░█░█▀█░█░█
░█░░░█▀▀░█▀▀░░░█/█░░█░░░░█▀▀░▄▀▄░█/█░▀▀█
░▀▀▀░▀░░░▀░░░░░▀▀▀░▀▀▀░░░▀▀▀░▀░▀░▀▀▀░░░▀
endef
export HEADER_PROJECT

header:
	clear
	@echo "$(BOLD) $(GREEN)$$HEADER_PROJECT $(RESET)"

# COLORS
RESET = \033[0m
WHITE = \033[37m
GREY = \033[90m
RED = \033[91m
DRED = \033[31m
GREEN = \033[92m
DGREEN = \033[32m
YELLOW = \033[93m
DYELLOW = \033[33m
BLUE = \033[94m
DBLUE = \033[34m
MAGENTA = \033[95m
DMAGENTA = \033[35m
CYAN = \033[96m
DCYAN = \033[36m

# FORMAT
BOLD = \033[1m
ITALIC = \033[3m
UNDERLINE = \033[4m
STRIKETHROUGH = \033[9m
