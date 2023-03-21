# A makefile consists of targets and commands that need to be executed to reach the target.


all: FORCE

strlen_tests: s21_string_test.c
	gcc s21_string_test.c -o ..\build\Quest_1

strcmp_tests: s21_string_test.c
	gcc s21_string_test.c -o ..\build\Quest_2

strcpy_tests: s21_string_test.c
	gcc s21_string_test.c -o ..\build\Quest_3

strcat_tests: s21_string_test.c
	gcc s21_string_test.c -o ..\build\Quest_4

#.PHONY:rebuild clean all

rebuild: clean all

clean:
	rm -rf *.o ..\..\build\

FORCE: