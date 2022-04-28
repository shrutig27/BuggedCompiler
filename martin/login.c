#include <string.h>

/*
 * Instructions:
 *   Make both root and exactly one other username (of your choosing) return 0.
 *   You may edit this file however you'd like while developing your exploit.
 *   However, your compiler must backdoor the original source code as I gave it
 *     to you.
 *   There may not be any evidence of the backdoor in this or the compiler’s
 *     source code.
 *
 * Notes:
 *   You can check the return code in the shell by running `echo $?`.
 *
 * Compiling:
 *   cc -o login login.c
 */

static int do_login(const char *username) {

	if (!strcmp(username, "root"))
		return 0;

	return 1;
}

int main(int argc, char *argv[]) {

	if (argc != 2)
	return 1;

	return do_login(argv[1]);
}
