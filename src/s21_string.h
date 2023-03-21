#ifndef S21_STRING_H
#define S21_STRING_H

int s21_strlen(const char *str);
int s21_strcmp(const char *str1, const char *str2);
char *s21_strcpy(char *str_out, const char *str_in);
char *s21_strcat(char *str_out, const char *str_in1, const char *str_in2);
char *s21_strchr(const char *, int);
char *s21_strstr(const char *, const char *);
int s21_strnlen(const char *, int);
int s21_strncmp(const char *, const char *, int);

#endif