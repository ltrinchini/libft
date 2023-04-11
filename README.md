# 42 Libft

## Table of Contents

- [About](#about)
- [Getting Started](#getting_started)
- [Usage](#usage)

## About <a name = "about"></a>

The goal of this project is to create a library equivalent to libc.
<br>
Thanks to this project, I now understand how these functions work.
It also helped me to improve and enrich my knowledge on the C language.

### Libc functions
| Function     | Description                                                                          |
| ------------ | ------------------------------------------------------------------------------------ |
| ft_isaplha() | Checks if a character is alphabetic                                                  |
| ft_isdigit() | Checks if a character is a digit                                                     |
| ft_isalnum() | Checks if a character is alphabetic or numeric                                       |
| ft_isascii() | Checks if a character is a valid ASCII character                                     |
| ft_isprint() | Checks if a character is printable                                                   |
| ft_strlen()  | Returns the length of a string                                                       |
| ft_memset()  | Fills a block of memory with a given value                                           |
| ft_bzero()   | Erases a block of memory by filling it with zeroes                                   |
| ft_memcpy()  | Copies a block of memory from a source to a destination                              |
| ft_memmove() | Copies a block of memory from a source to a destination (even if the blocks overlap) |
| ft_strlcpy() | Copies a string to a buffer, guaranteeing the size of the destination buffer         |
| ft_strlcat() | Concatenates two strings, guaranteeing the size of the destination buffer            |
| ft_toupper() | Converts a character to uppercase                                                    |
| ft_tolower() | Converts a character to lowercase                                                    |
| ft_strchr()  | Searches for the first occurrence of a character in a string                         |
| ft_strrchr() | Searches for the last occurrence of a character in a string                          |
| ft_strncmp() | Compares two strings up to a certain number of characters                            |
| ft_memchr()  | Searches for the first occurrence of a character in a block of memory.               |
| ft_memcmp()  | Compares two blocks of memory up to a certain number of bytes                        |
| ft_strnstr() | Searches for a substring in a string up to a certain number of characters            |
| ft_atoi()    | Converts a string to an integer                                                      |
| ft_calloc()  | Allocates memory for an array and initializes all bytes to zero                      |
| ft_strdup()  | Allocates memory for a copy of a string                                              |

### More functions
| Function        | Description                                                                                                                                                                              |
| --------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| ft_substr()     | Allocates with malloc and returns a string from the string 's'                                                                                                                           |
| ft_strjoin()    | Allocates with malloc and return a new string, result of the concatenation of s1 and s2                                                                                                  |
| ft_strtrim()    | Allocates with malloc and return a copy of the string 's1', without the characters specified in 'set' at the beginning and end of the string                                             |
| ft_split()      | Allocates with malloc and return an array of character strings obtained by separating 's' using the character 'c', used as a delimiter. The array must be NULL terminated                |
| ft_itoa()       | Allocates with malloc and return a string representing the integer received as argument                                                                                                  |
| ft_strmapi()    | Applies the 'f' function to each character of the character string passed as an argument to create a new character string with malloc resulting from the successive applications of 'f'  |
| ft_striteri()   | Applies the function f to each character in the string passed as argument, passing its index as the first argument. Each character is passed by address to f to be modified if necessary |
| ft_putchar_fd() | Write the character 'c' to the given file descriptor                                                                                                                                     |
| ft_putstr_fd()  | Write the string 's' to the given file descriptor                                                                                                                                        |
| ft_putendl_fd() | Write the string 's' to the given file descriptor, followed by a newline.                                                                                                                |
| ft_putnbr_fd    | Write the integer 'n' to the given file descriptor                                                                                                                                       |

### Bonus functions
```C
// Our links will be represented by this structure
typedef struct s_list
{
	void	*content;
	struct	s_list *next;
}	t_list;
```

| Function          | Description                                                                                                                                                                                                                                |
| ----------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| ft_lstnew()       | Allocates with malloc and return a new element. The 'content' member variable is initialized using the value of the parameter 'thrilled'. The 'next' variable is initialized to NULL                                                       |
| ft_lstadd_front() | Adds the 'new' element to the beginning of the list                                                                                                                                                                                        |
| ft_lstsize()      | Counts the number of items in the list                                                                                                                                                                                                     |
| ft_lstlast()      | Returns the last item in the list                                                                                                                                                                                                          |
| ft_lstadd_back()  | Adds the 'new' element at the end of the list                                                                                                                                                                                              |
| ft_lstdelone()    | Frees the memory of the element passed as an argument by using the 'del' function then with free                                                                                                                                           |
| ft_lstclear()     | Deletes and frees the memory of the element passed as parameter, and of all the elements that follow, using ’del’ and free The initial pointer will be set to NULL                                                                         |
| ft_lstiter()      | Iterates over the 'lst' list and apply the function 'f' to content each element                                                                                                                                                            |
| ft_lstmap()       | Iterates over the 'lst' list and apply the function 'f' to the content of each element. Create a new list resulting from the successive applications of 'f'. The 'del' function is there to destroy the content of an element if necessary |
## Getting Started <a name = "getting_started"></a>

To create the static library, all you have to do is:

``` Bash
	git clone git@github.com:ltrinchini/libft.git
	cd libft
	make
```

## Usage <a name = "usage"></a>

To use it you must include libft.h in your project and when compiling call the static library like this:
``` Bash
	gcc -o myprogram myprogam.c -L. -lft 
```
