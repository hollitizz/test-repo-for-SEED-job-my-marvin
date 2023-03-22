##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##


NAME		=		test_repo
UT_NAME		=		unit_tests

SRC_FOLDER	=		src
UT_FOLDER	=		tests_folder

MAIN		=		${SRC_FOLDER}/main.c						\

SRC_CODE	=		${SRC_FOLDER}/my_strlen.c					\

UT_SRC		=		${UT_FOLDER}/test_strlen.c					\

OBJ			=		${SRC_CODE:.c=.o}
UT_OBJ		=		${UT_SRC:.c=.o}
MAIN_OBJ	=		${MAIN:.c=.o}

RM			=		rm -rf

CFLAGS		+=		-Wall -Wextra -fPIC

CC			=		gcc


all:	${NAME}

${NAME}:	${OBJ} ${MAIN_OBJ}
	${CC} ${LDFLAGS} -o ${NAME} ${OBJ} ${MAIN_OBJ}


debug:	CFLAGS += -g3
debug:	re

tests_run:	${UT_OBJ} ${OBJ}
	${CC} ${LDFLAGS} -o ${UT_NAME} ${UT_OBJ} ${SRC_CODE} ${LDLIBS}
	./${UT_NAME}


clean:	ut_clean
	${RM} ${OBJ}
	${RM} ${MAIN_OBJ}

ut_clean:
	${RM} ${UT_OBJ}

fclean:	clean
	${RM} ${NAME} ${UT_NAME}

re:	fclean	${NAME}

.PHONY:	all ${NAME} clean fclean re debug tests_run ut_clean