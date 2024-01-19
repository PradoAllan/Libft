<h1 align="center">
	Libft
<h1>

## WELCOME!

> _Hi! Hope you are doing great! 
This is my first project from my common core journey, as a cadet, at 42 RIO._

> _The main proposal of this project is to create my own C library with some basic functions, like: strlen, split, join and some others importants functions. This project is very important because it will be the library that I'm going to use for the rest of the common core._ 

> _To develop the 34 mandatory functions + 9 bonus functions (linked list), I had to study how does the original functions works, and make my own version of them. But, the most important part is that, the ones that I make, has to behave the same way as the original one._ 

> _Every line of code was made in C._

### Functions

* [`ft_isascii`](ft_isascii.c)		- Test for ASCII character.
* [`ft_isalnum`](ft_isalnum.c)		- Test for alphanumeric character.
* [`ft_isalpha`](ft_isalpha.c)		- Test for alphabetic character.
* [`ft_isprint`](ft_isprint.c)		- Test for printing character.
* [`ft_isdigit`](ft_isdigit.c)		- Test for decimal-digit character.
* [`ft_toupper`](ft_toupper.c)		- Transform lower to upper case letters.
* [`ft_tolower`](ft_tolower.c)		- Transform upper to lower case letters.
* [`ft_strlen`](ft_strlen.c)		- Use to get the size of a String.
* [`ft_strlcpy`](ft_strlcpy.c)		- Use to copy N bytes of a String into a new one.
* [`ft_strlcat`](ft_strlcat.c)		- Use to concatenate at least N bytes of a String.
* [`ft_strchr`](ft_strchr.c)		- Use to locate the first occurence of a character in a String.
* [`ft_strrchr`](ft_strrchr.c)		- Use to locate the last occurence of a character in a String.
* [`ft_strncmp`](ft_strncmp.c)		- Use to compare N characters of a Strings.
* [`ft_strnstr`](ft_strnstr.c)		- Use to locate a little String in a big String.
* [`ft_strdup`](ft_strdup.c)		- Use to duplicate a String including the Null terminator.
* [`ft_strjoin`](ft_strjoin.c)		- Use to create a new String (malloc) from two others.
* [`ft_strtrim`](ft_strtrim.c)		- Use to remove a set of characters from a String.
* [`ft_striteri`](ft_striteri.c)	- Use to pass all characters to another void func.
* [`ft_strmapi`](ft_strmapi.c)		- Use to pass all characters to another char func.
* [`ft_substr`](ft_substr.c)		- Use to create a new String from another String.
* [`ft_split`](ft_split.c)		- Use to break a String into a array of Strings.
* [`ft_bzero`](ft_bzero.c)		- Use to write zeroes to a byte String.
* [`ft_memset`](ft_memset.c)		- Use to write a byte to a byte String.
* [`ft_memcpy`](ft_memcpy.c)		- Use to copy a memory area into a new one.
* [`ft_memmove`](ft_memmove.c)		- Use to copy byte String.
* [`ft_memchr`](ft_memchr.c)		- Use to locate byte in a byte string
* [`ft_memcmp`](ft_memcmp.c)		- Use to compare byte string.
* [`ft_calloc`](ft_calloc.c)		- Use to allocate memory.
* [`ft_atoi`](ft_atoi.c)		- Use to convert ASCII String to Integer.
* [`ft_itoa`](ft_itoa.c)		- Use to convert a Integer to a alphanumeric String.
* [`ft_putchar_fd`](ft_putchar_fd.c)	- Use to output a character into a File Descriptor.
* [`ft_putstr_fd`](ft_putstr_fd.c)	- Use to output a String into a File Descriptor.
* [`ft_putendl_fd`](ft_putendl_fd.c)	- Use to output a String into a File Desciptor + \n.
* [`ft_putnbr_fd`](ft_putnbr_fd.c)	- Use to output a Integer into a File Descriptor.

## Want to use or even test my libft? 

In your terminal, paste this command:
> _ git clone https://github.com/PradoAllan/Libft.git_

Now you have all my functions.
To use it, you can do reply this code:
> _#include "libft.h"
	int	main(int ac, char **av) {
 		/* your C code will be here! */
 		return (0);
 	}_

Before you compile your code, type "make" to compile all my functions and create the "libft.a" file. This one is important! Dont forget that!

Now you are able to compile your code. 
Here is an example for you to compile: 
> _cc your_file.c libft.a_

Then execute it:

> _./a.out

Hope this little guide can help you to use my libft! 
Fell welcome to get in touch with me on my social medias! 
Hope I can help you with some coding problems!

## BYE!

