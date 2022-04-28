README

1. Download the tinycc mob and replace the libtcc.c file with the included libtcc.c file

2. make compiler with bugged libtcc.c code
	- ./configure
	- make
	- make install

3. make clean compiler with bugged compiler and clean libtcc.c file (in /clean_libtcc)
	- make clean
	- ./configure
	- make CC=tcc -B
	- make install 

4. Compile login.c 
	- tcc -o login login.c

5. run ./login cactus

6. echo $? returns 0
