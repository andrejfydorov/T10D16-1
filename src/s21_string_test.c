#include "s21_string.c"
#include <stdio.h>
#include <stdlib.h>

void s21_string_test() {

  char *str = "QWERTY";

  printf("Input: %s\n", str);

  int len = s21_strlen(str);

  printf("Output: %d\n", len);

  if (len == 6)
    printf("%s\n", "SUCCESS");
  else
    printf("%s\n", "FAIL");

  //-------------------------------

  str = "1234";

  printf("Input: %s\n", str);

  len = s21_strlen(str);

  printf("Output: %d\n", len);

  if (len == 4)
    printf("%s\n", "SUCCESS");
  else
    printf("%s\n", "FAIL");

  //-----------------------------------

  str = "";

  printf("Input: %s\n", str);

  len = s21_strlen(str);

  printf("Output: %d\n", len);

  if (len == 0)
    printf("%s\n", "SUCCESS");
  else
    printf("%s\n", "FAIL");
}

void s21_strcmp_test() {

  char *str1 = "QWERTY";
  char *str2 = "QWERTY";

  printf("Input: %s\t%s\n", str1, str2);

  int res = s21_strcmp(str1, str2);

  printf("Output: %d\n", res);

  if (res == 0)
    printf("%s\n", "SUCCESS");
  else
    printf("%s\n", "FAIL");

  //-------------------------------

  str1 = "QWERTY";
  str2 = "qwerty";

  printf("Input: %s\t%s\n", str1, str2);

  res = s21_strcmp(str1, str2);

  printf("Output: %d\n", res);

  if (res == -1)
    printf("%s\n", "SUCCESS");
  else
    printf("%s\n", "FAIL");

  //-----------------------------------

  str1 = "qwerty";
  str2 = "QWERTY";

  printf("Input: %s\t%s\n", str1, str2);

  res = s21_strcmp(str1, str2);

  printf("Output: %d\n", res);

  if (res == 1)
    printf("%s\n", "SUCCESS");
  else
    printf("%s\n", "FAIL");
}

void s21_strcpy_test() {
  char *str1 = "QWERTY";
  char *str2 = malloc(s21_strlen(str1) * sizeof(char));

  printf("Input: %s\n", str1);

  s21_strcpy(str2, str1);

  printf("Output: %s\n", str2);

  if (!s21_strcmp(str1, str2))
    printf("%s\n", "SUCCESS");
  else
    printf("%s\n", "FAIL");

  //-------------------------------

  str1 = "123";

  printf("Input: %s\n", str1);

  str2 = malloc(s21_strlen(str1) * sizeof(char));

  s21_strcpy(str2, str1);

  printf("Output: %s\n", str2);

  if (!s21_strcmp(str1, str2))
    printf("%s\n", "SUCCESS");
  else
    printf("%s\n", "FAIL");

  //-----------------------------------

  str1 = "";

  printf("Input: %s\n", str1);

  str2 = malloc(s21_strlen(str1) * sizeof(char));

  s21_strcpy(str2, str1);

  printf("Output: %s\n", str2);

  if (!s21_strcmp(str1, str2))
    printf("%s\n", "SUCCESS");
  else
    printf("%s\n", "FAIL");

  free(str2);
}

void s21_strcat_test() {
  char *str1 = "Hello";
  char *str2 = "World";

  char *str3 = malloc(sizeof(char) * (s21_strlen(str1) + s21_strlen(str2)));

  printf("Input: %s\t%s\n", str1, str2);

  s21_strcat(str3, str2, str1);

  printf("Output: %s\n", str3);

  if (!s21_strcmp(str3, "WorldHello"))
    printf("%s\n", "SUCCESS");
  else
    printf("%s\n", "FAIL");

  //-------------------------------

  str1 = "123";
  str2 = "456";

  str3 = malloc(sizeof(char) * (s21_strlen(str1) + s21_strlen(str2)));

  printf("Input: %s\t%s\n", str1, str2);

  s21_strcat(str3, str2, str1);

  printf("Output: %s\n", str3);

  if (!s21_strcmp(str3, "456123"))
    printf("%s\n", "SUCCESS");
  else
    printf("%s\n", "FAIL");

  //-----------------------------------

  str1 = "-";
  str2 = "_";

  str3 = malloc(sizeof(char) * (s21_strlen(str1) + s21_strlen(str2)));

  printf("Input: %s\t%s\n", str1, str2);

  str3 = s21_strcat(str3, str2, str1);

  printf("Output: %s\n", str3);

  if (!s21_strcmp(str3, "_-"))
    printf("%s\n", "SUCCESS");
  else
    printf("%s\n", "FAIL");

  free(str3);
}

int main() {
  s21_string_test();
  s21_strcmp_test();
  s21_strcpy_test();
  s21_strcat_test();

  return 0;
}