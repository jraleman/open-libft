## About the Libft

Challenge where I build from scratch many of the standard functions
of the Standard Library from the programming language C.
I also include other functions that I have used throughout my academic career
in École 42.

All of these functions follows the applicable style guide standard (Norm) at
WeThinkCode_. Read the `norminette.pdf` provided to learn more.

## How do to compile it?

Download the repository, and compile the library using the makefile.
You can use the following commands:

* `make` : compiles the library
* `make clean` : remove the objects files, and the `objs/` directory.
* `make fclean` : remove the objects files, the `objs/` directory,
the program `libft.a` and the `libs/` directory.
* `make re` : re-compiles the library (making a fresh compiling).

The program `libft.a` will be created inside the `libs/` directory.

## How to use it?

Copy the `libs/` and `includes/` directories into the root of your project, and
make sure to compile your source code with the following flag:
`gcc -L./libs -lft <your_code.c>`

## Try it!

Test it with a test file that I made for my array type functions.

1. `make`
2. `gcc -L./libs -lft assets/array_test.c`
3. `./a.out`
