.PHONY : all clean fclean re

TARGET			= TheSeven
CC				= cc
CFLAGS			= -Wall -Wextra -Werror

RM				= rm -rf
MKDIR			= mkdir -p
MAKE			= make -sC

HEADERS_DIR		= headers
HEADERS_FLAG	= -I$(HEADERS_DIR)
HEADERS			= $(wildcard $(HEADERS_DIR)/*.h)

SOURCES_DIR		= sources/
SOURCE_FILES	= theSeven.c 

SOURCES			= $(addprefix $(SOURCES_DIR), $(SOURCE_FILES))

OBJS_DIR		= objs/
OBJ_FILES		= $(SOURCE_FILES:.c=.o)
OBJS			= $(addprefix $(OBJS_DIR), $(OBJ_FILES))

# Colors
RESET			= "\033[0m"
BLACK    		= "\033[30m"    # Black
RED      		= "\033[31m"    # Red
GREEN    		= "\033[32m"    # Green
YELLOW   		= "\033[33m"    # Yellow
BLUE     		= "\033[34m"    # Blue
MAGENTA  		= "\033[35m"    # Magenta
CYAN     		= "\033[36m"    # Cyan
WHITE    		= "\033[37m"    # White

all : $(OBJS_DIR) $(TARGET)

$(OBJS_DIR) :
	@$(MKDIR) $(OBJS_DIR)

$(TARGET) : $(OBJS) Makefile
	@echo $(GREEN) "  Creating $(TARGET)" $(RESET)
	@$(CC) $(CFLAGS) $(OBJS) $(LINKER) -o $(TARGET)

$(OBJS_DIR)%.o : $(SOURCES_DIR)%.c $(HEADERS)
	@$(CC) $(CFLAGS) $(HEADERS_FLAG) -c $< -o $@

clean :
	@$(RM) $(OBJS_DIR)
	@echo $(MAGENTA) "  Removing Object Files" $(RESET)

fclean : clean
	@$(RM) $(TARGET)
	@echo $(RED) "  Removing $(TARGET)" $(RESET)

re : fclean all