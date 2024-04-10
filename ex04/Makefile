NAME = noSed
SRCS = main.cpp fileStr.cpp
FLAGS = -std=c++98 -Wall -Wextra -Werror

OBJS = ${SRCS:.cpp=.o}

${NAME}: ${OBJS}
	c++ ${FLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

test : all
	@rm -rf test
	@mkdir test
	@echo "THIS IS 123 ALL IS 123 !!!\nARE YOU 123 ???\nAM I 123 ???\n123!123!123!123!123!\n123123123123123123" > test/normalFile.txt
	@touch test/noRights.txt
	@chmod -r test/noRights.txt
	@echo "test 1: Unvalid amount of argument test [0 arg]\n./noSed :"
	@echo "--------------------------"
	@./noSed
	@echo "--------------------------\n\n\n"
	@echo "test 2: Unvalid amount of argument test [1 arg]\n./noSed \"file\" :"
	@echo "--------------------------"
	@./noSed "file"
	@echo "--------------------------\n\n\n"
	@echo "test 3: Unvalid amount of argument test [2 arg]\n./noSed \"file\" \"str1\" :"
	@echo "--------------------------"
	@./noSed "file" "str1"
	@echo "--------------------------\n\n\n"
	@echo "test 4: Unvalid amount of argument test [4 arg]\n./noSed \"file\" \"str1\" \"str2\" \"str3\" :"
	@echo "--------------------------"
	@./noSed "file" "str1" "str2" "str3"
	@echo "--------------------------\n\n\n"
	@echo "test 5: Empty strings test \n./noSed \"\" \"\" \"\":"
	@echo "--------------------------"
	@./noSed "" "" ""
	@echo "--------------------------\n\n\n"
	@echo "test 6: Empty strings + Unvalid amount of argument test \n./noSed \"\":"
	@echo "--------------------------"
	@./noSed ""
	@echo "--------------------------\n\n\n"
	@echo "test 7: Non-existant file test \n./noSed \"nonExistant.txt\" \"abc\" \"123\":"
	@echo "--------------------------"
	@./noSed "nonExistant.txt" "abc" "123"
	@echo "--------------------------\n\n\n"
	@echo "test 8: No reading rights test \n./noSed \"test/noRights.txt\" \"abc\" \"123\":"
	@echo "--------------------------"
	@./noSed "test/noRights.txt" "abc" "123"
	@echo "--------------------------\n\n\n"
	@echo "test 9: Working file \n./noSed \"test/normalFile.txt\" \"123\" \"NORMAL\":"
	@echo "--------------------------"
	@echo "before:"
	@cat test/normalFile.txt
	@./noSed "test/normalFile.txt" "123" "NORMAL"
	@echo "\n\nafter:"
	@cat test/normalFile.txt.replace
	@echo "--------------------------"