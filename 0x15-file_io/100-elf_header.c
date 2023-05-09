#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_error - prints an error message to stderr and exits with status code 98
 * @msg: the error message to print
 */
void print_error(char *msg)
{
    fprintf(stderr, "%s\n", msg);
    exit(98);
}

/**
 * main - displays the information contained in the ELF header at the start of an ELF file
 * @argc: the number of command-line arguments
 * @argv: an array of command-line arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
    int fd;
    Elf64_Ehdr header;

    if (argc != 2)
        print_error("Usage: elf_header elf_filename");

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        print_error("Error opening file");

    if (read(fd, &header, sizeof(header)) != sizeof(header))
        print_error("Error reading ELF header");

    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3)
        print_error("Not an ELF file");

    printf("Magic:   %02x %02x %02x %02x\n",
           header.e_ident[EI_MAG0],
           header.e_ident[EI_MAG1],
           header.e_ident[EI_MAG2],
           header.e_ident[EI_MAG3]);
    printf("Class:   %d-bit\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
    printf("Data:    %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version: %d\n", header.e_ident[EI_VERSION]);
    printf("OS/ABI:  %s\n", header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX System V ABI" : "Other");
    printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
    printf("Type:    %s\n", header.e_type == ET_EXEC ? "Executable file" : header.e_type == ET_DYN ? "Shared object file" : "Other");
    printf("Entry point address: 0x%lx\n", header.e_entry);

    close(fd);
    return (0);
}
