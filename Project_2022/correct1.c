#include "thetalib.h"


/* program */ 


int limit, num, counter;
int prime (int n) {
int i;
int result, isPrime;
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

void printFibonacci (int n) {
int i, n1, n2, n3;
n1 = 0;
n2 = 1;
writeInteger(n1);
writeStr(" ");
writeInteger(n2);
for (i = 2; i<n; i+=1){
n3 = n1 + n2;
writeStr(" ");
writeInteger(n3);
n1 = n2;
n2 = n3;
}
}

int main() {
int n, i, fact, number, option;
writeStr("\nENTER: \t1 - Fibonacci\n\t2 - Factorial \n\t3 - Prime numbers\n\t0 - Terminate\n");
option = readInteger();
if (option == 1){
writeStr("\nEnter the number of elements: ");
n = readInteger();
writeStr("\nFibonacci Series: ");
printFibonacci(n);
writeStr("\n");
} else {
if (option == 2){
fact = 1;
writeStr("\nEnter a number: ");
number = readInteger();
for (i = 1; i<number + 1; i+=1){
fact = fact * i;
}
writeStr("\nFactorial of ");
writeInteger(number);
writeStr(" is: ");
writeInteger(fact);
} else {
if (option == 3){
writeStr("Enter a number: ");
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
writeStr("\nThe total number of primes found is: ");
writeInteger(counter);
writeStr("\n");
} else {
writeStr("Termination...");
}
}
}
writeStr("\n");
}


/* Accepted! */
