# --------------------------------------------------------------------VARS ---------------------------------------------------------------------------------------------

NAME		= libft.a                    												# name of the programm

CC			= gcc                        												# compiler

FLAGS		= -Wall -Wextra -Werror      												# flags

RM			= rm -f                      												# remove 

LIBC 		= ar rc					 												    # creates library archive

# -----------------------------------------------------------------SOURCE FILES ----------------------------------------------------------------------------------------

SOURCES		= srcs/*.c
			

OBJ	    = $(SOURCES:.c=.o)       	 												# trasnforms all the ".c" files into ".o" (objects)

INCLUDES 	= includes/libft.h   														# include ".h"

# -------------------------------------------------------------------- RULES -------------------------------------------------------------------------------------------


all:	    $(NAME)   																	# will execute NAME rule
		
$(NAME):	$(OBJ)                         
			$(LIBC) $(NAME) $(OBJ)
clean:
			$(RM) $(OBJ)        												         

fclean: clean                            											   # force remove NAME
			$(RM) $(NAME)

re: fclean all                           											   # rule to recompile MAKEFILE (will remove everything and allows to recompile again)
	
# ----------------------------------------------------------------------PHONY --------------------------------------------------------------------------------------------

.PHONY: all clean fclean re             											   # in phony section we need to include all used rules
