#ifndef main_h
#define main_h




#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copy_from_to_file(int argc, char **argv);
void exit_error(int exit_code, const char *message, const char *file, int fd);

#endif /* MAIN.H */
