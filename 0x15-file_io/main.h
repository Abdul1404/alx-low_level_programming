#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdarg.h>
#define BUFFSIZE 1024
#include <elf.h>

void get_entry(Elf64_Ehdr *ehdr);
void get_type(Elf64_Ehdr *ehdr);
void get_vabi(Elf64_Ehdr *ehdr);
void get_osabi(Elf64_Ehdr *ehdr);
void get_velf(Elf64_Ehdr *ehdr);
void get_data(Elf64_Ehdr *ehdr);
void get_class(Elf64_Ehdr *ehdr);
void get_magic(Elf64_Ehdr *ehdr, char *fname, int fd);
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void _err(int stat, ...);

#endif
