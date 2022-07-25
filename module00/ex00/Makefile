CC	=	c++
ifdef DEBUG
	CXXFLAGS	=	--std=c++98 -g3 -fsanitize=address
else ifdef LEAKS
	CXXFLAGS	=	--std=c++98 -g
else
	CXXFLAGS	=	--std=c++98 -Wall -Wextra -Werror
endif

NAME	=	megaphone
SRC		=	megaphone.cpp
OBJ		=	$(SRC: %.cpp = %.o)

$(NAME)	:	$(OBJ)
	$(CC) $(CXXFLAGS) -o $@ $^

.PHONY: all
all: $(NAME)
