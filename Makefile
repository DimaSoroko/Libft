# --------------------------------------------------------------------VARS ---------------------------------------------------------------------------------------------

NAME		= libft.a                    												# name of the programm

CC			= gcc                        												# compiler

FLAGS		= -Wall -Wextra -Werror      												# flags

RM			= rm -f                      												# remove 

LIBC 		= ar rcs					 												 # creates library archive

# -----------------------------------------------------------------SOURCE FILES ----------------------------------------------------------------------------------------

SOURCES		= ft_atoi.c \
                ft_bzero.c \
                ft_calloc.c \
                ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
                ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_striteri.c \
                ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
                ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
                ft_strtrim.c \
                ft_isalnum.c \
                ft_isprint.c \
                ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
                ft_tolower.c \
				ft_toupper.c \
			

OBJ	    = $(SOURCES:.c=.o)       	 												# trasnforms all the ".c" files into ".o" (objects)


# -------------------------------------------------------------------- RULES -------------------------------------------------------------------------------------------

.c.o:		
			$(CC) $(FLAGS) -c -I./includes $< -o $(<:.c=.o)

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
