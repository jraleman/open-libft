## About Libft

Challenge where I build from scratch many of the standard functions
of the Standard Library from the programming language C.
I also include other functions that I have used throughout my academic career
in École 42.

All of these functions follows the applicable style guide standard (Norm) at
WeThinkCode_. Read `assets/norminette.pdf` provided to learn more.

To install norminette, run the following commands:
* `gem install norminette --pre`
* `gem install --user-install json -v 1.8.3`

Run it in the following way:
* `norminette < source-path >`

## How to compile it?

Download the repository, and compile the library using the makefile.
You can use the following commands:

* `make` : compiles the library
* `make clean` : remove the objects files (including the `objs/` directory).
* `make fclean` : remove the objects files (including the `objs/` directory),
and the library `libft.a`.
* `make re` : re-compiles the library, remaking everything :)

The binary `libft.a` will be created at the root of the project's directory.

## How to use it?

Copy the `includes/` directory into the root of your project, and
make sure to compile your source code with the following flags:
`gcc libft.a -I./includes <your_code.c> -o <output_name>`.

## Try it!

Run it with `assets/array_test.c`, a test file used for my array type functions.
1. `make`
2. `gcc libft.a -I./includes ./assets/array_test.c -o array_test.o`
3. `./array_test.o`

Run it with `assets/printf_test.c`, a test file used for my array type functions.
2. `gcc libft.a -I./includes ./assets/printf_test.c -o printf_test.o`
3. `./printf_test.o`
