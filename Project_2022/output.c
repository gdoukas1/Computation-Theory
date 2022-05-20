token IDENTIFIER: limit
token D_COMMA: ,
token IDENTIFIER: num
token D_COMMA: ,
token IDENTIFIER: counter
token D_COLON: :
token KW_INT: integer
token D_SEMCOL: ;
token KW_DEF: def
token IDENTIFIER: prime
token D_L_PARENTH: (
token IDENTIFIER: n
token D_COLON: :
token KW_INT: integer
token D_R_PARENTH: )
token OP_SUB: -
token OP_GRT: >
token KW_BOOL: boolean
token D_COLON: :
token IDENTIFIER: i
token D_COLON: :
token KW_INT: integer
token D_SEMCOL: ;
token IDENTIFIER: result
token D_COMMA: ,
token IDENTIFIER: isPrime
token D_COLON: :
token KW_BOOL: boolean
token D_SEMCOL: ;
token KW_IF: if
token D_L_PARENTH: (
token IDENTIFIER: n
token OP_LS: <
token POSINT: 0
token D_R_PARENTH: )
token D_COLON: :
token IDENTIFIER: result
token OP_ASGN: =
token IDENTIFIER: prime
token D_L_PARENTH: (
token OP_SUB: -
token IDENTIFIER: n
token D_R_PARENTH: )
token D_SEMCOL: ;
token KW_ELSE: else
token D_COLON: :
token KW_IF: if
token D_L_PARENTH: (
token IDENTIFIER: n
token OP_LS: <
token POSINT: 2
token D_R_PARENTH: )
token D_COLON: :
token IDENTIFIER: result
token OP_ASGN: =
token KW_FALSE: False
token D_SEMCOL: ;
token KW_ELSE: else
token D_COLON: :
token KW_IF: if
token D_L_PARENTH: (
token IDENTIFIER: n
token OP_EQUALS: ==
token POSINT: 2
token D_R_PARENTH: )
token D_COLON: :
token IDENTIFIER: result
token OP_ASGN: =
token KW_TRUE: True
token D_SEMCOL: ;
token KW_ELSE: else
token D_COLON: :
token KW_IF: if
token D_L_PARENTH: (
token IDENTIFIER: n
token OP_MOD: %
token POSINT: 2
token OP_EQUALS: ==
token POSINT: 0
token D_R_PARENTH: )
token D_COLON: :
token IDENTIFIER: result
token OP_ASGN: =
token KW_FALSE: False
token D_SEMCOL: ;
token KW_ELSE: else
token D_COLON: :
token IDENTIFIER: i
token OP_ASGN: =
token POSINT: 3
token D_SEMCOL: ;
token IDENTIFIER: isPrime
token OP_ASGN: =
token KW_TRUE: True
token D_SEMCOL: ;
token KW_WHILE: while
token D_L_PARENTH: (
token IDENTIFIER: isPrime
token KW_AND: and
token D_L_PARENTH: (
token IDENTIFIER: i
token OP_LS: <
token IDENTIFIER: n
token OP_DIV: /
token POSINT: 2
token D_R_PARENTH: )
token D_R_PARENTH: )
token D_COLON: :
token IDENTIFIER: isPrime
token OP_ASGN: =
token IDENTIFIER: n
token OP_MOD: %
token IDENTIFIER: i
token OP_NOT_EQ: !=
token POSINT: 0
token D_SEMCOL: ;
token IDENTIFIER: i
token OP_ASGN: =
token IDENTIFIER: i
token OP_ADD: +
token POSINT: 2
token D_SEMCOL: ;
token KW_ENDWHILE: endwhile
token D_SEMCOL: ;
token IDENTIFIER: result
token OP_ASGN: =
token IDENTIFIER: isPrime
token D_SEMCOL: ;
token KW_ENDIF: endif
token D_SEMCOL: ;
token KW_ENDIF: endif
token D_SEMCOL: ;
token KW_ENDIF: endif
token D_SEMCOL: ;
token KW_ENDIF: endif
token D_SEMCOL: ;
token KW_RETURN: return
token IDENTIFIER: result
token D_SEMCOL: ;
token KW_ENDDEF: enddef
token D_SEMCOL: ;
token KW_DEF: def
token KW_MAIN: main
token D_L_PARENTH: (
token D_R_PARENTH: )
token D_COLON: :
token IDENTIFIER: limit
token OP_ASGN: =
token IDENTIFIER: readInteger
token D_L_PARENTH: (
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: writeInteger
token D_L_PARENTH: (
token POSINT: 2
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: writeStr
token D_L_PARENTH: (
token STRING: " "
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: counter
token OP_ASGN: =
token POSINT: 1
token D_SEMCOL: ;
token KW_FOR: for
token IDENTIFIER: num
token KW_IN: in
token D_L_BRCK: [
token POSINT: 3
token D_COLON: :
token IDENTIFIER: limit
token OP_ADD: +
token POSINT: 1
token D_COLON: :
token POSINT: 2
token D_R_BRCK: ]
token D_COLON: :
token KW_IF: if
token D_L_PARENTH: (
token IDENTIFIER: prime
token D_L_PARENTH: (
token IDENTIFIER: num
token D_R_PARENTH: )
token D_R_PARENTH: )
token D_COLON: :
token IDENTIFIER: counter
token OP_ASGN: =
token IDENTIFIER: counter
token OP_ADD: +
token POSINT: 1
token D_SEMCOL: ;
token IDENTIFIER: writeInteger
token D_L_PARENTH: (
token IDENTIFIER: num
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: writeStr
token D_L_PARENTH: (
token STRING: " "
token D_R_PARENTH: )
token D_SEMCOL: ;
token KW_ENDIF: endif
token D_SEMCOL: ;
token KW_ENDFOR: endfor
token D_SEMCOL: ;
token IDENTIFIER: writeStr
token D_L_PARENTH: (
token STRING: "\nThe total number of primes found is:"
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: writeInteger
token D_L_PARENTH: (
token IDENTIFIER: counter
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: writeStr
token D_L_PARENTH: (
token STRING: "\n"
token D_R_PARENTH: )
token D_SEMCOL: ;
token KW_ENDDEF: enddef
token D_SEMCOL: ;
#include "thetalib.h"


/* program */ 


int limit , num , counter;
int prime (int n) {
int i;
int result , isPrime;
if (n < 0){
result = prime(-n);
} else {
if (n < 2){
result = 0;
} else {
if (n == 2){
result = 1;
} else {
if (n % 2 == 0){
result = 0;
} else {
i = 3;
isPrime = 1;
while (isPrime && (i < n / 2)){
isPrime = n % i != 0;
i = i + 2;
}
result = isPrime;
}
}
}
}
return result;
}

int main() {
limit = readInteger();
writeInteger(2);
writeStr(" ");
counter = 1;
for (num = 3; num<limit + 1; num+=2){
if (prime(num)){
counter = counter + 1;
writeInteger(num);
writeStr(" ");
}
}
writeStr("\nThe total number of primes found is:");
writeInteger(counter);
writeStr("\n");
}


/* Accepted! */
