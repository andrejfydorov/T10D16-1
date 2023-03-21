#include "s21_string.h"

int s21_strlen(const char *str) {
  int i = 0, count = 0;

  while (str[i++] != '\0') {
    count++;
  }

  return count;
}

int s21_strcmp(const char *str1, const char *str2) {
  int i = 0;
  const char *str3 = s21_strlen(str1) > s21_strlen(str2) ? str1 : str2;

  while (str3[i] != '\0') {
    if (str1[i] < str2[i]) {
      return -1;
    }
    if (str1[i] > str2[i]) {
      return 1;
    }

    i++;
  }

  return 0;
}

char *s21_strcpy(char *str_out, const char *str_in) {
  int i = 0;
  while (str_in[i] != '\0') {
    str_out[i] = str_in[i];
    i++;
  }
  str_out[i] = '\0';

  return str_out;
}

char *s21_strcat(char *str_out, const char *str_in1, const char *str_in2) {

  int i = 0, k = 0;

  while (str_in1[i] != '\0') {
    str_out[i] = str_in1[i];
    i++;
  }
  while (str_in2[k] != '\0') {
    str_out[i] = str_in2[k];
    i++, k++;
  }

  str_out[i] = '\0';

  return str_out;
}