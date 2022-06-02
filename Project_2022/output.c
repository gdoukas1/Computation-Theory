token KW_COMP: comp
token IDENTIFIER: Address
token D_COLON: :
token "#": #
token IDENTIFIER: street
token D_COLON: :
token KW_STRING: str
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: number
token D_COLON: :
token KW_INT: integer
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: city
token D_COLON: :
token KW_STRING: str
token D_SEMCOL: ;
token KW_DEF: def
token IDENTIFIER: setAddress
token D_L_PARENTH: (
token IDENTIFIER: s
token D_COLON: :
token KW_STRING: str
token D_COMMA: ,
token IDENTIFIER: n
token D_COLON: :
token KW_INT: integer
token D_COMMA: ,
token IDENTIFIER: c
token D_COLON: :
token KW_STRING: str
token D_R_PARENTH: )
token D_COLON: :
token "#": #
token IDENTIFIER: street
token OP_ASGN: =
token IDENTIFIER: s
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: number
token OP_ASGN: =
token IDENTIFIER: n
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: city
token OP_ASGN: =
token IDENTIFIER: c
token D_SEMCOL: ;
token KW_ENDDEF: enddef
token D_SEMCOL: ;
token KW_DEF: def
token IDENTIFIER: printAddress
token D_L_PARENTH: (
token D_R_PARENTH: )
token D_COLON: :
token IDENTIFIER: write
token D_L_PARENTH: (
token STRING: "Address: %s %d, %s\n"
token D_COMMA: ,
token "#": #
token IDENTIFIER: street
token D_COMMA: ,
token "#": #
token IDENTIFIER: number
token D_COMMA: ,
token "#": #
token IDENTIFIER: city
token D_R_PARENTH: )
token D_SEMCOL: ;
token KW_ENDDEF: enddef
token D_SEMCOL: ;
token KW_ENDCOMP: endcomp
token D_SEMCOL: ;
token KW_COMP: comp
token IDENTIFIER: Person
token D_COLON: :
token "#": #
token IDENTIFIER: firstName
token D_COMMA: ,
token "#": #
token IDENTIFIER: lastName
token D_COLON: :
token KW_STRING: str
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: email
token D_COLON: :
token KW_STRING: str
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: phone
token D_COLON: :
token KW_INT: integer
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: address
token D_COLON: :
token IDENTIFIER: Address
token D_SEMCOL: ;
token KW_DEF: def
token IDENTIFIER: setPerson
token D_L_PARENTH: (
token IDENTIFIER: fn
token D_COLON: :
token KW_STRING: str
token D_COMMA: ,
token IDENTIFIER: ln
token D_COLON: :
token KW_STRING: str
token D_COMMA: ,
token IDENTIFIER: email
token D_COLON: :
token KW_STRING: str
token D_COMMA: ,
token IDENTIFIER: phone
token D_COLON: :
token KW_INT: integer
token D_COMMA: ,
token IDENTIFIER: addr
token D_COLON: :
token IDENTIFIER: Address
token D_R_PARENTH: )
token D_COLON: :
token "#": #
token IDENTIFIER: firstName
token OP_ASGN: =
token IDENTIFIER: fn
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: lastName
token OP_ASGN: =
token IDENTIFIER: ln
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: email
token OP_ASGN: =
token IDENTIFIER: email
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: phone
token OP_ASGN: =
token IDENTIFIER: phone
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: address
token OP_ASGN: =
token IDENTIFIER: addr
token D_SEMCOL: ;
token KW_ENDDEF: enddef
token D_SEMCOL: ;
token KW_DEF: def
token IDENTIFIER: printPersonInfo
token D_L_PARENTH: (
token D_R_PARENTH: )
token D_COLON: :
token IDENTIFIER: write
token D_L_PARENTH: (
token STRING: "%s %s, email: %s phone: %d\n"
token D_COMMA: ,
token "#": #
token IDENTIFIER: firstName
token D_COMMA: ,
token "#": #
token IDENTIFIER: lastName
token D_COMMA: ,
token "#": #
token IDENTIFIER: email
token D_COMMA: ,
token "#": #
token IDENTIFIER: phone
token D_R_PARENTH: )
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: address
token "DOT": .
token IDENTIFIER: printAddress
token D_L_PARENTH: (
token D_R_PARENTH: )
token D_SEMCOL: ;
token KW_ENDDEF: enddef
token D_SEMCOL: ;
token KW_ENDCOMP: endcomp
token D_SEMCOL: ;
token KW_COMP: comp
token IDENTIFIER: Book
token D_COLON: :
token "#": #
token IDENTIFIER: title
token D_COMMA: ,
token "#": #
token IDENTIFIER: isbn
token D_COLON: :
token KW_STRING: str
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: author
token D_COLON: :
token IDENTIFIER: Person
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: numOfCopies
token D_COLON: :
token KW_INT: integer
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: price
token D_COLON: :
token KW_SCALAR: scalar
token D_SEMCOL: ;
token KW_DEF: def
token IDENTIFIER: setBook
token D_L_PARENTH: (
token IDENTIFIER: t
token D_COLON: :
token KW_STRING: str
token D_COMMA: ,
token IDENTIFIER: a
token D_COLON: :
token IDENTIFIER: Person
token D_COMMA: ,
token IDENTIFIER: numOfCopies
token D_COLON: :
token KW_INT: integer
token D_COMMA: ,
token IDENTIFIER: price
token D_COLON: :
token KW_SCALAR: scalar
token D_R_PARENTH: )
token D_COLON: :
token "#": #
token IDENTIFIER: title
token OP_ASGN: =
token IDENTIFIER: t
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: author
token OP_ASGN: =
token IDENTIFIER: a
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: numOfCopies
token OP_ASGN: =
token IDENTIFIER: numOfCopies
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: price
token OP_ASGN: =
token IDENTIFIER: price
token D_SEMCOL: ;
token KW_ENDDEF: enddef
token D_SEMCOL: ;
token KW_DEF: def
token IDENTIFIER: printBook
token D_L_PARENTH: (
token D_R_PARENTH: )
token D_COLON: :
token IDENTIFIER: write
token D_L_PARENTH: (
token STRING: "Title: %s\n"
token D_COMMA: ,
token "#": #
token IDENTIFIER: title
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: writeStr
token D_L_PARENTH: (
token STRING: "Author:"
token D_R_PARENTH: )
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: author
token "DOT": .
token IDENTIFIER: printPersonInfo
token D_L_PARENTH: (
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: write
token D_L_PARENTH: (
token STRING: "Price:%f\n"
token D_COMMA: ,
token "#": #
token IDENTIFIER: price
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: write
token D_L_PARENTH: (
token STRING: "Number of available copies: %d\n"
token D_COMMA: ,
token "#": #
token IDENTIFIER: numOfCopies
token D_R_PARENTH: )
token D_SEMCOL: ;
token KW_ENDDEF: enddef
token D_SEMCOL: ;
token KW_ENDCOMP: endcomp
token D_SEMCOL: ;
token KW_COMP: comp
token IDENTIFIER: Order
token D_COLON: :
token "#": #
token IDENTIFIER: orderNum
token D_COLON: :
token KW_INT: integer
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: book
token D_COLON: :
token IDENTIFIER: Book
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: quantity
token D_COLON: :
token KW_INT: integer
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: shippingAddress
token D_COLON: :
token IDENTIFIER: Address
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: delivered
token D_COLON: :
token KW_BOOL: boolean
token D_SEMCOL: ;
token KW_DEF: def
token IDENTIFIER: setOrder
token D_L_PARENTH: (
token IDENTIFIER: orNum
token D_COLON: :
token KW_INT: integer
token D_COMMA: ,
token IDENTIFIER: b
token D_COLON: :
token IDENTIFIER: Book
token D_COMMA: ,
token IDENTIFIER: q
token D_COLON: :
token KW_INT: integer
token D_COMMA: ,
token IDENTIFIER: sh
token D_COLON: :
token IDENTIFIER: Address
token D_COMMA: ,
token IDENTIFIER: del
token D_COLON: :
token KW_BOOL: boolean
token D_R_PARENTH: )
token D_COLON: :
token "#": #
token IDENTIFIER: orderNum
token OP_ASGN: =
token IDENTIFIER: orNum
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: book
token OP_ASGN: =
token IDENTIFIER: b
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: quantity
token OP_ASGN: =
token IDENTIFIER: q
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: shippingAddress
token OP_ASGN: =
token IDENTIFIER: sh
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: delivered
token OP_ASGN: =
token IDENTIFIER: del
token D_SEMCOL: ;
token KW_ENDDEF: enddef
token D_SEMCOL: ;
token KW_DEF: def
token IDENTIFIER: printOrder
token D_L_PARENTH: (
token D_R_PARENTH: )
token D_COLON: :
token KW_ENDDEF: enddef
token D_SEMCOL: ;
token KW_ENDCOMP: endcomp
token D_SEMCOL: ;
token KW_COMP: comp
token IDENTIFIER: Bookstore
token D_COLON: :
token "#": #
token IDENTIFIER: name
token D_COLON: :
token KW_STRING: str
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: listOfBooks
token D_L_BRCK: [
token POSINT: 100
token D_R_BRCK: ]
token D_COLON: :
token IDENTIFIER: Book
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: numOfBooks
token D_COLON: :
token KW_INT: integer
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: listOfOrders
token D_L_BRCK: [
token POSINT: 100
token D_R_BRCK: ]
token D_COLON: :
token IDENTIFIER: Order
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: numOfOrders
token D_COLON: :
token KW_INT: integer
token D_SEMCOL: ;
token KW_DEF: def
token IDENTIFIER: putOrder
token D_L_PARENTH: (
token IDENTIFIER: o
token D_COLON: :
token IDENTIFIER: Order
token D_R_PARENTH: )
token D_COLON: :
token "#": #
token IDENTIFIER: listOfOrders
token D_L_BRCK: [
token "#": #
token IDENTIFIER: numOfOrders
token D_R_BRCK: ]
token OP_ASGN: =
token IDENTIFIER: o
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: numOfOrders
token OP_ASGN_ADD: +=
token POSINT: 1
token D_SEMCOL: ;
token KW_ENDDEF: enddef
token D_SEMCOL: ;
token KW_DEF: def
token IDENTIFIER: addBook
token D_L_PARENTH: (
token IDENTIFIER: b
token D_COLON: :
token IDENTIFIER: Book
token D_R_PARENTH: )
token D_COLON: :
token "#": #
token IDENTIFIER: listOfBooks
token D_L_BRCK: [
token "#": #
token IDENTIFIER: numOfBooks
token D_R_BRCK: ]
token OP_ASGN: =
token IDENTIFIER: b
token D_SEMCOL: ;
token "#": #
token IDENTIFIER: numOfBooks
token OP_ASGN_ADD: +=
token POSINT: 1
token D_SEMCOL: ;
token KW_ENDDEF: enddef
token D_SEMCOL: ;
token KW_DEF: def
token IDENTIFIER: printBookStoreBooks
token D_L_PARENTH: (
token D_R_PARENTH: )
token D_COLON: :
token KW_FOR: for
token IDENTIFIER: i
token KW_IN: in
token D_L_BRCK: [
token POSINT: 0
token D_COLON: :
token "#": #
token IDENTIFIER: numOfBooks
token D_R_BRCK: ]
token D_COLON: :
token "#": #
token IDENTIFIER: listOfBooks
token D_L_BRCK: [
token IDENTIFIER: i
token D_R_BRCK: ]
token "DOT": .
token IDENTIFIER: printBook
token D_L_PARENTH: (
token D_R_PARENTH: )
token D_SEMCOL: ;
token KW_ENDFOR: endfor
token D_SEMCOL: ;
token KW_ENDDEF: enddef
token D_SEMCOL: ;
token KW_DEF: def
token IDENTIFIER: calculateTotalOrdersIncome
token D_L_PARENTH: (
token D_R_PARENTH: )
token OP_SUB: -
token OP_GRT: >
token KW_SCALAR: scalar
token D_COLON: :
token IDENTIFIER: total
token D_COLON: :
token KW_SCALAR: scalar
token D_SEMCOL: ;
token IDENTIFIER: total
token OP_ASGN: =
token POSINT: 0
token D_SEMCOL: ;
token KW_FOR: for
token IDENTIFIER: i
token KW_IN: in
token D_L_BRCK: [
token POSINT: 0
token D_COLON: :
token "#": #
token IDENTIFIER: numOfOrders
token D_R_BRCK: ]
token D_COLON: :
token KW_IF: if
token D_L_PARENTH: (
token "#": #
token IDENTIFIER: listOfOrders
token D_L_BRCK: [
token IDENTIFIER: i
token D_R_BRCK: ]
token "DOT": .
token "#": #
token IDENTIFIER: delivered
token D_R_PARENTH: )
token D_COLON: :
token IDENTIFIER: total
token OP_ASGN: =
token IDENTIFIER: total
token OP_ADD: +
token "#": #
token IDENTIFIER: listOfOrders
token D_L_BRCK: [
token IDENTIFIER: i
token D_R_BRCK: ]
token "DOT": .
token "#": #
token IDENTIFIER: quantity
token OP_MUL: *
token "#": #
token IDENTIFIER: listOfOrders
token D_L_BRCK: [
token IDENTIFIER: i
token D_R_BRCK: ]
token "DOT": .
token "#": #
token IDENTIFIER: book
token "DOT": .
token "#": #
token IDENTIFIER: price
token D_SEMCOL: ;
token KW_ENDIF: endif
token D_SEMCOL: ;
token KW_ENDFOR: endfor
token D_SEMCOL: ;
token KW_RETURN: return
token IDENTIFIER: total
token D_SEMCOL: ;
token KW_ENDDEF: enddef
token D_SEMCOL: ;
token KW_ENDCOMP: endcomp
token D_SEMCOL: ;
token IDENTIFIER: orderId
token D_COLON: :
token KW_INT: integer
token D_SEMCOL: ;
token KW_DEF: def
token IDENTIFIER: createAddress
token D_L_PARENTH: (
token IDENTIFIER: s
token D_COLON: :
token KW_STRING: str
token D_COMMA: ,
token IDENTIFIER: n
token D_COLON: :
token KW_INT: integer
token D_COMMA: ,
token IDENTIFIER: c
token D_COLON: :
token KW_STRING: str
token D_R_PARENTH: )
token OP_SUB: -
token OP_GRT: >
token IDENTIFIER: Address
token D_COLON: :
token IDENTIFIER: a
token D_COLON: :
token IDENTIFIER: Address
token D_SEMCOL: ;
token IDENTIFIER: a
token "DOT": .
token IDENTIFIER: setAddress
token D_L_PARENTH: (
token IDENTIFIER: s
token D_COMMA: ,
token IDENTIFIER: n
token D_COMMA: ,
token IDENTIFIER: c
token D_R_PARENTH: )
token D_SEMCOL: ;
token KW_RETURN: return
token IDENTIFIER: a
token D_SEMCOL: ;
token KW_ENDDEF: enddef
token D_SEMCOL: ;
token KW_DEF: def
token IDENTIFIER: createPerson
token D_L_PARENTH: (
token IDENTIFIER: fn
token D_COLON: :
token KW_STRING: str
token D_COMMA: ,
token IDENTIFIER: ln
token D_COLON: :
token KW_STRING: str
token D_COMMA: ,
token IDENTIFIER: email
token D_COLON: :
token KW_STRING: str
token D_COMMA: ,
token IDENTIFIER: phone
token D_COLON: :
token KW_INT: integer
token D_COMMA: ,
token IDENTIFIER: addr
token D_COLON: :
token IDENTIFIER: Address
token D_R_PARENTH: )
token OP_SUB: -
token OP_GRT: >
token IDENTIFIER: Person
token D_COLON: :
token IDENTIFIER: p
token D_COLON: :
token IDENTIFIER: Person
token D_SEMCOL: ;
token IDENTIFIER: p
token "DOT": .
token IDENTIFIER: setPerson
token D_L_PARENTH: (
token IDENTIFIER: fn
token D_COMMA: ,
token IDENTIFIER: ln
token D_COMMA: ,
token IDENTIFIER: email
token D_COMMA: ,
token IDENTIFIER: phone
token D_COMMA: ,
token IDENTIFIER: addr
token D_R_PARENTH: )
token D_SEMCOL: ;
token KW_RETURN: return
token IDENTIFIER: p
token D_SEMCOL: ;
token KW_ENDDEF: enddef
token D_SEMCOL: ;
token KW_DEF: def
token IDENTIFIER: createBook
token D_L_PARENTH: (
token IDENTIFIER: t
token D_COLON: :
token KW_STRING: str
token D_COMMA: ,
token IDENTIFIER: a
token D_COLON: :
token IDENTIFIER: Person
token D_COMMA: ,
token IDENTIFIER: numOfCopies
token D_COLON: :
token KW_INT: integer
token D_COMMA: ,
token IDENTIFIER: price
token D_COLON: :
token KW_SCALAR: scalar
token D_R_PARENTH: )
token OP_SUB: -
token OP_GRT: >
token IDENTIFIER: Book
token D_COLON: :
token IDENTIFIER: b
token D_COLON: :
token IDENTIFIER: Book
token D_SEMCOL: ;
token IDENTIFIER: b
token "DOT": .
token IDENTIFIER: setBook
token D_L_PARENTH: (
token IDENTIFIER: t
token D_COMMA: ,
token IDENTIFIER: a
token D_COMMA: ,
token IDENTIFIER: numOfCopies
token D_COMMA: ,
token IDENTIFIER: price
token D_R_PARENTH: )
token D_SEMCOL: ;
token KW_RETURN: return
token IDENTIFIER: b
token D_SEMCOL: ;
token KW_ENDDEF: enddef
token D_SEMCOL: ;
token KW_DEF: def
token IDENTIFIER: createOrder
token D_L_PARENTH: (
token IDENTIFIER: orNum
token D_COLON: :
token KW_INT: integer
token D_COMMA: ,
token IDENTIFIER: b
token D_COLON: :
token IDENTIFIER: Book
token D_COMMA: ,
token IDENTIFIER: q
token D_COLON: :
token KW_INT: integer
token D_COMMA: ,
token IDENTIFIER: sh
token D_COLON: :
token IDENTIFIER: Address
token D_COMMA: ,
token IDENTIFIER: del
token D_COLON: :
token KW_BOOL: boolean
token D_R_PARENTH: )
token OP_SUB: -
token OP_GRT: >
token IDENTIFIER: Order
token D_COLON: :
token IDENTIFIER: ord
token D_COLON: :
token IDENTIFIER: Order
token D_SEMCOL: ;
token IDENTIFIER: ord
token "DOT": .
token IDENTIFIER: setOrder
token D_L_PARENTH: (
token IDENTIFIER: orNum
token D_COMMA: ,
token IDENTIFIER: b
token D_COMMA: ,
token IDENTIFIER: q
token D_COMMA: ,
token IDENTIFIER: sh
token D_COMMA: ,
token IDENTIFIER: del
token D_R_PARENTH: )
token D_SEMCOL: ;
token KW_RETURN: return
token IDENTIFIER: ord
token D_SEMCOL: ;
token KW_ENDDEF: enddef
token D_SEMCOL: ;
token KW_DEF: def
token IDENTIFIER: createBookstore
token D_L_PARENTH: (
token IDENTIFIER: n
token D_COLON: :
token KW_STRING: str
token D_R_PARENTH: )
token OP_SUB: -
token OP_GRT: >
token IDENTIFIER: Bookstore
token D_COLON: :
token IDENTIFIER: bs
token D_COLON: :
token IDENTIFIER: Bookstore
token D_SEMCOL: ;
token IDENTIFIER: bs
token "DOT": .
token "#": #
token IDENTIFIER: name
token OP_ASGN: =
token IDENTIFIER: n
token D_SEMCOL: ;
token IDENTIFIER: bs
token "DOT": .
token "#": #
token IDENTIFIER: numOfBooks
token OP_ASGN: =
token POSINT: 0
token D_SEMCOL: ;
token IDENTIFIER: bs
token "DOT": .
token "#": #
token IDENTIFIER: numOfOrders
token OP_ASGN: =
token POSINT: 0
token D_SEMCOL: ;
token KW_RETURN: return
token IDENTIFIER: bs
token D_SEMCOL: ;
token KW_ENDDEF: enddef
token D_SEMCOL: ;
token KW_DEF: def
token KW_MAIN: main
token D_L_PARENTH: (
token D_R_PARENTH: )
token D_COLON: :
token IDENTIFIER: orderId
token OP_ASGN: =
token POSINT: 0
token D_SEMCOL: ;
token IDENTIFIER: a
token D_COMMA: ,
token IDENTIFIER: a1
token D_COLON: :
token IDENTIFIER: Address
token D_SEMCOL: ;
token IDENTIFIER: a
token OP_ASGN: =
token IDENTIFIER: createAddress
token D_L_PARENTH: (
token STRING: "Stadiou", 10, "Stadiou"
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: author
token D_COLON: :
token IDENTIFIER: Person
token D_SEMCOL: ;
token IDENTIFIER: author
token OP_ASGN: =
token IDENTIFIER: createPerson
token D_L_PARENTH: (
token STRING: "Christos","Papadimitriou","cpap@gmail.com"
token D_COMMA: ,
token POSINT: 12345
token D_COMMA: ,
token IDENTIFIER: a
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: b
token D_COLON: :
token IDENTIFIER: Book
token D_SEMCOL: ;
token IDENTIFIER: b
token OP_ASGN: =
token IDENTIFIER: createBook
token D_L_PARENTH: (
token STRING: "Computation Theory"
token D_COMMA: ,
token IDENTIFIER: author
token D_COMMA: ,
token REAL: 34.3
token D_COMMA: ,
token POSINT: 100
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: bs
token D_COLON: :
token IDENTIFIER: Bookstore
token D_SEMCOL: ;
token IDENTIFIER: bs
token OP_ASGN: =
token IDENTIFIER: createBookstore
token D_L_PARENTH: (
token STRING: "Papasotiriou"
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: bs
token "DOT": .
token IDENTIFIER: addBook
token D_L_PARENTH: (
token IDENTIFIER: b
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: a
token OP_ASGN: =
token IDENTIFIER: createAddress
token D_L_PARENTH: (
token STRING: "Wall Street", 10, "NY"
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: author
token OP_ASGN: =
token IDENTIFIER: createPerson
token D_L_PARENTH: (
token STRING: "Dennis", "Richie", "richie@gmail.com"
token D_COMMA: ,
token POSINT: 54321
token D_COMMA: ,
token IDENTIFIER: a
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: b
token OP_ASGN: =
token IDENTIFIER: createBook
token D_L_PARENTH: (
token STRING: "C Programming"
token D_COMMA: ,
token IDENTIFIER: author
token D_COMMA: ,
token REAL: 10.3
token D_COMMA: ,
token POSINT: 100
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: bs
token "DOT": .
token IDENTIFIER: addBook
token D_L_PARENTH: (
token IDENTIFIER: b
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: bs
token "DOT": .
token IDENTIFIER: printBookStoreBooks
token D_L_PARENTH: (
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: ord
token D_COLON: :
token IDENTIFIER: Order
token D_SEMCOL: ;
token IDENTIFIER: ord
token OP_ASGN: =
token IDENTIFIER: createOrder
token D_L_PARENTH: (
token IDENTIFIER: orderId
token D_COMMA: ,
token IDENTIFIER: b
token D_COMMA: ,
token POSINT: 2
token D_COMMA: ,
token IDENTIFIER: a
token D_COMMA: ,
token KW_FALSE: False
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: orderId
token OP_ASGN_ADD: +=
token POSINT: 1
token D_SEMCOL: ;
token IDENTIFIER: bs
token "DOT": .
token IDENTIFIER: putOrder
token D_L_PARENTH: (
token IDENTIFIER: ord
token D_R_PARENTH: )
token D_SEMCOL: ;
token IDENTIFIER: write
token D_L_PARENTH: (
token STRING: "Bookstore orders income: %.2f\n"
token D_COMMA: ,
token IDENTIFIER: bs
token "DOT": .
token IDENTIFIER: calculateTotalOrdersIncome
token D_L_PARENTH: (
token D_R_PARENTH: )
token D_R_PARENTH: )
token D_SEMCOL: ;
token KW_ENDDEF: enddef
token D_SEMCOL: ;
#include "thetalib.h"


/* program */ 


#define SELF struct Address *self 
typedef struct Address {
char* street;
int number;
char* city;
void (*setAddress)(SELF, char* s, int n, char* c);
void (*printAddress)(SELF, );
} Address;


void setAddress (SELF, char* s, int n, char* c) {
self->street = s;
self->number = n;
self->city = c;
}


void printAddress (SELF, ) {
write("Address: %s %d, %s\n", self->street, self->number, self->city);
}

const Address ctor_Address = {.setAddress=setAddress, .printAddress=printAddress};
#undef SELF

#define SELF struct Person *self 
typedef struct Person {
char* firstName , lastName;
char* email;
int phone;
Address address;
void (*setPerson)(SELF, char* fn, char* ln, char* email, int phone, Address addr);
void (*printPersonInfo)(SELF );
} Person;


void setAddress (SELF, char* s, int n, char* c) {
self->street = s;
self->number = n;
self->city = c;
}


void printAddress (SELF, ) {
write("Address: %s %d, %s\n", self->street, self->number, self->city);
}


void setPerson (SELF, char* fn, char* ln, char* email, int phone, Address addr) {
self->firstName = fn;
self->lastName = ln;
self->email = email;
self->phone = phone;
self->address = addr;
}


void printPersonInfo (SELF ) {
write("%s %s, email: %s phone: %d\n", self->firstName, self->lastName, self->email, self->phone);
self->address.printAddress(&self->address);
}

const Person ctor_Person = {.setAddress=setAddress, .printAddress=printAddress, .setPerson=setPerson, .printPersonInfo=printPersonInfo};
#undef SELF

#define SELF struct Book *self 
typedef struct Book {
char* title , isbn;
Person author;
int numOfCopies;
double price;
void (*setBook)(SELF, char* t, Person a, int numOfCopies, double price);
void (*printBook)(SELF, );
} Book;


void setAddress (SELF, char* s, int n, char* c) {
self->street = s;
self->number = n;
self->city = c;
}


void printAddress (SELF, ) {
write("Address: %s %d, %s\n", self->street, self->number, self->city);
}


void setPerson (SELF, char* fn, char* ln, char* email, int phone, Address addr) {
self->firstName = fn;
self->lastName = ln;
self->email = email;
self->phone = phone;
self->address = addr;
}


void printPersonInfo (SELF ) {
write("%s %s, email: %s phone: %d\n", self->firstName, self->lastName, self->email, self->phone);
self->address.printAddress(&self->address);
}


void setBook (SELF, char* t, Person a, int numOfCopies, double price) {
self->title = t;
self->author = a;
self->numOfCopies = numOfCopies;
self->price = price;
}


void printBook (SELF, ) {
write("Title: %s\n", self->title);
writeStr("Author:");
self->author.printPersonInfo(&self->author);
write("Price:%f\n", self->price);
write("Number of available copies: %d\n", self->numOfCopies);
}

const Book ctor_Book = {.setAddress=setAddress, .printAddress=printAddress, .setPerson=setPerson, .printPersonInfo=printPersonInfo, .setBook=setBook, .printBook=printBook};
#undef SELF

#define SELF struct Order *self 
typedef struct Order {
int orderNum;
Book book;
int quantity;
Address shippingAddress;
int delivered;
void (*setOrder)(SELF, int orNum, Book b, int q, Address sh, int del);
void (*printOrder)(SELF );
} Order;


void setAddress (SELF, char* s, int n, char* c) {
self->street = s;
self->number = n;
self->city = c;
}


void printAddress (SELF, ) {
write("Address: %s %d, %s\n", self->street, self->number, self->city);
}


void setPerson (SELF, char* fn, char* ln, char* email, int phone, Address addr) {
self->firstName = fn;
self->lastName = ln;
self->email = email;
self->phone = phone;
self->address = addr;
}


void printPersonInfo (SELF ) {
write("%s %s, email: %s phone: %d\n", self->firstName, self->lastName, self->email, self->phone);
self->address.printAddress(&self->address);
}


void setBook (SELF, char* t, Person a, int numOfCopies, double price) {
self->title = t;
self->author = a;
self->numOfCopies = numOfCopies;
self->price = price;
}


void printBook (SELF, ) {
write("Title: %s\n", self->title);
writeStr("Author:");
self->author.printPersonInfo(&self->author);
write("Price:%f\n", self->price);
write("Number of available copies: %d\n", self->numOfCopies);
}


void setOrder (SELF, int orNum, Book b, int q, Address sh, int del) {
self->orderNum = orNum;
self->book = b;
self->quantity = q;
self->shippingAddress = sh;
self->delivered = del;
}


void printOrder (SELF ) {
}

const Order ctor_Order = {.setAddress=setAddress, .printAddress=printAddress, .setPerson=setPerson, .printPersonInfo=printPersonInfo, .setBook=setBook, .printBook=printBook, .setOrder=setOrder, .printOrder=printOrder};
#undef SELF

#define SELF struct Bookstore *self 
typedef struct Bookstore {
char* name;
Book listOfBooks[100];
int numOfBooks;
Order listOfOrders[100];
int numOfOrders;
void (*putOrder)(SELF, Order o);
void (*addBook)(SELF, Book b);
void (*printBookStoreBooks)(SELF );
double(*calculateTotalOrdersIncome)(SELF );
} Bookstore;


void setAddress (SELF, char* s, int n, char* c) {
self->street = s;
self->number = n;
self->city = c;
}


void printAddress (SELF, ) {
write("Address: %s %d, %s\n", self->street, self->number, self->city);
}


void setPerson (SELF, char* fn, char* ln, char* email, int phone, Address addr) {
self->firstName = fn;
self->lastName = ln;
self->email = email;
self->phone = phone;
self->address = addr;
}


void printPersonInfo (SELF ) {
write("%s %s, email: %s phone: %d\n", self->firstName, self->lastName, self->email, self->phone);
self->address.printAddress(&self->address);
}


void setBook (SELF, char* t, Person a, int numOfCopies, double price) {
self->title = t;
self->author = a;
self->numOfCopies = numOfCopies;
self->price = price;
}


void printBook (SELF, ) {
write("Title: %s\n", self->title);
writeStr("Author:");
self->author.printPersonInfo(&self->author);
write("Price:%f\n", self->price);
write("Number of available copies: %d\n", self->numOfCopies);
}


void setOrder (SELF, int orNum, Book b, int q, Address sh, int del) {
self->orderNum = orNum;
self->book = b;
self->quantity = q;
self->shippingAddress = sh;
self->delivered = del;
}


void printOrder (SELF ) {
}


void putOrder (SELF, Order o) {
self->listOfOrders[self->numOfOrders] = o;
self->numOfOrders += 1;
}


void addBook (SELF, Book b) {
self->listOfBooks[self->numOfBooks] = b;
self->numOfBooks += 1;
}


void printBookStoreBooks (SELF ) {
for (i = 0; i<self->numOfBooks; i+=1){
self->listOfBooks[i].printBook(&self->listOfBooks[i]);
}
}


double calculateTotalOrdersIncome (SELF ) {
double total;
total = 0;
for (i = 0; i<self->numOfOrders; i+=1){
if (self->listOfOrders[i].delivered){
total = total + self->listOfOrders[i].quantity * self->listOfOrders[i].book.price;
}
}
return total;
}

const Bookstore ctor_Bookstore = {.setAddress=setAddress, .printAddress=printAddress, .setPerson=setPerson, .printPersonInfo=printPersonInfo, .setBook=setBook, .printBook=printBook, .setOrder=setOrder, .printOrder=printOrder, .putOrder=putOrder, .addBook=addBook, .printBookStoreBooks=printBookStoreBooks, .calculateTotalOrdersIncome=calculateTotalOrdersIncome};
#undef SELF

int orderId;
Address createAddress (char* s, int n, char* c) {
Address a=ctor_Address;
a.setAddress(&a, s, n, c);
;
return a;
}

Person createPerson (char* fn, char* ln, char* email, int phone, Address addr) {
Person p=ctor_Person;
p.setPerson(&p, fn, ln, email, phone, addr);
;
return p;
}

Book createBook (char* t, Person a, int numOfCopies, double price) {
Book b=ctor_Book;
b.setBook(&b, t, a, numOfCopies, price);
;
return b;
}

Order createOrder (int orNum, Book b, int q, Address sh, int del) {
Order ord=ctor_Order;
ord.setOrder(&ord, orNum, b, q, sh, del);
;
return ord;
}

Bookstore createBookstore (char* n) {
Bookstore bs=ctor_Bookstore;
bs.name = n;
bs.numOfBooks = 0;
bs.numOfOrders = 0;
return bs;
}

int main() {
orderId = 0;
Address a, a1=ctor_Address;
a = createAddress("Stadiou", 10, "Stadiou");
Person author=ctor_Person;
author = createPerson("Christos","Papadimitriou","cpap@gmail.com", 12345, a);
Book b=ctor_Book;
b = createBook("Computation Theory", author, 34.3, 100);
Bookstore bs=ctor_Bookstore;
bs = createBookstore("Papasotiriou");
bs.addBook(&bs, b);
;
a = createAddress("Wall Street", 10, "NY");
author = createPerson("Dennis", "Richie", "richie@gmail.com", 54321, a);
b = createBook("C Programming", author, 10.3, 100);
bs.addBook(&bs, b);
;
bs.printBookStoreBooks(&bs);
Order ord=ctor_Order;
ord = createOrder(orderId, b, 2, a, 0);
orderId += 1;
bs.putOrder(&bs, ord);
;
write("Bookstore orders income: %.2f\n", bs.calculateTotalOrdersIncome(&bs));
}


/* Accepted! */
