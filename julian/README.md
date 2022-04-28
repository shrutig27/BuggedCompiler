for compiler: `./configure, make, make install`

for login.c: `tcc -o login login.c`

```
clean tcc + bug tcc(src) => bug tcc

bug tcc + clean tcc(src) => bug tcc[2]

bug tcc[2] + clean login.c => bug login```
