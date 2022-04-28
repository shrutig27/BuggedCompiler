README

1. Download the tinycc mob and replace the libtcc.c file with the included libtcc.c file

2. make compiler with bugged libtcc.c code
	---a. ./configure
	---b. make
	---c. make install

3. make clean compiler with bugged compiler and clean libtcc.c file (in /clean_libtcc)
	---a. make clean
	---b. ./configure
	---c. make CC=tcc -B
	---d. make install 

4. Compile login.c 
	---a. tcc -o login login.c

5. run ./login cactus

6. echo $? returns 0
