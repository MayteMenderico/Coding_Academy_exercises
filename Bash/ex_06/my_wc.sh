#!/bin/bash

#mayte@mayte-Aspire-A515-54:~/Escritorio/Rendu/pool_c_d02/ex_06$ echo "Welcome t#o this new day of pool" > test
#mayte@mayte-Aspire-A515-54:~/Escritorio/Rendu/pool_c_d02/ex_06$ cat test
#Welcome to this new day of pool
#mayte@mayte-Aspire-A515-54:~/Escritorio/Rendu/pool_c_d02/ex_06$ wc test
# 1  7 32 test
#mayte@mayte-Aspire-A515-54:~/Escritorio/Rendu/pool_c_d02/ex_06$ wc -w test
#7 test

FILE=$1
wc -w $FILE



