Variables and Data Types

- Declaration: type variable_name; (e.g., int x;)
- Assignment: variable_name = value; (e.g., x = 10;)

Operators

- Arithmetic: +, -, *, /, %, etc.
- Comparison: ==, !=, <, >, <=, >=
- Logical: &&, ||, !
- Assignment: =, +=, -=, *=, /=, etc.

Control Structures

- If-Else
    - Syntax: if (condition) { code } else { code }
    - Example: if (x > 10) { printf("x is greater than 10"); } else { printf("x is less than or equal to 10"); }
- Nested If-Else
    - Syntax: if (condition) { code } else if (condition) { code } else { code }
    - Example: if (x > 10) { printf("x is greater than 10"); } else if (x == 10) { printf("x is equal to 10"); } else { printf("x is less than 10"); }
- Switch-Case
    - Syntax: switch (expression) { case value: code; break; default: code; }
    - Example: switch (x) { case 1: printf("x is 1"); break; case 2: printf("x is 2"); break; default: printf("x is something else"); }
- While Loop
    - Syntax: while (condition) { code }
    - Example: while (x < 10) { printf("x is %d\n", x); x++; }
- Do-While Loop
    - Syntax: do { code } while (condition);
    - Example: do { printf("x is %d\n", x); x++; } while (x < 10);
- For Loop
    - Syntax: for (init; condition; increment) { code }
    - Example: for (int i = 0; i < 10; i++) { printf("i is %d\n", i); }

Functions

- Declaration: return_type function_name(parameter_list);
- Definition: return_type function_name(parameter_list) { code }
- Call: function_name(arguments);

Arrays and Strings

- Array Declaration: type array_name[size]; (e.g., int myArray[10];)
- Array Initialization: type array_name[] = { elements }; (e.g., int myArray[] = { 1, 2, 3 };)
- String Declaration: char string_name[size]; (e.g., char myString[20];)
- String Initialization: char string_name[] = "string_value"; (e.g., char myString[] = "hello";)

Pointers

- Declaration: type *pointer_name; (e.g., int *ptr;)
- Initialization: pointer_name = &variable; (e.g., ptr = &x;)
- Dereferencing: *pointer_name (e.g., *ptr)

Structures

- Definition: struct struct_name { type member1; type member2; }; (e.g., struct Person { int age; char name[20]; };)
- Declaration: struct struct_name variable; (e.g., struct Person person1;)
- Accessing members: variable.member (e.g., person1.age)

File Input/Output

- fopen() : FILE *fopen(const char *filename, const char *mode);
- fclose() : int fclose(FILE *fp);
- fread() : size_t fread(void *ptr, size_t size, size_t nmemb, FILE *fp);
- fwrite() : size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *fp);

Preprocessor Directives

- #include <filename> : includes a header file
- #define constant_name value : defines a constant
- #ifdef, #ifndef, #if, #else, #endif : conditional compilation

Error Handling

- errno : global variable for error number
- perror() : prints an error message
- strerror() : returns a string describing the error

Type Casting

- Syntax: (type) expression
- Example: (int) 3.14 (converts the float value to an integer)

Unary Operators

- & (address of)
- * (dereference)
- ! (logical not)
- ~ (bitwise not)
- ++ (increment)
- -- (decrement)
- sizeof (returns the size of a type or variable)

Conditional Operators

- Syntax: expression1 ? expression2 : expression3
- Example: x > 5 ? y = 10 : y = 5

Comma Operators

- Syntax: expression1, expression2
- Example: x = 5, y = 10

Cast Operators

- Syntax: (type) expression
- Example: (int) 3.14

Sizeof Operators

- Syntax: sizeof expression
- Example: sizeof(int)

Alignof Operators (C11+)

- Syntax: alignof(type)
- Example: alignof(int)

Noexcept Operators (C11+)

- Syntax: noexcept(expression)
- Example: noexcept(x > 5)

Assignement Operators

- Syntax: variable = value
- Example: x = 5

Addition Assignment Operators

- Syntax: variable += value
- Example: x += 5

Subtraction Assignment Operators

- Syntax: variable -= value
- Example: x -= 5

Multiplication Assignment Operators

- Syntax: variable *= value
- Example: x *= 5

Division Assignment Operators

- Syntax: variable /= value
- Example: x /= 5

Modulus Assignment Operators

- Syntax: variable %= value
- Example: x %= 5

Bitwise AND Assignment Operators

- Syntax: variable &= value
- Example: x &= 5

Bitwise OR Assignment Operators

- Syntax: variable |= value
- Example: x |= 5

Bitwise XOR Assignment Operators

- Syntax: variable ^= value
- Example: x ^= 5

Bitwise Left Shift Assignment Operators

- Syntax: variable <<= value
- Example: x <<= 5

Bitwise Right Shift Assignment Operators

- Syntax: variable >>= value
- Example: x >>= 5


Bitwise Operators

- & (bitwise and)
- | (bitwise or)
- ^ (bitwise xor)
- ~ (bitwise not)
- << (left shift)
- >> (right shift)

Complex Data Types

- Arrays of structures
- Structures containing arrays
- Arrays of pointers
- Pointers to structures

Enum

- Declaration: enum enum_name { enumerator1, enumerator2, ... };
- Example: enum Color { RED, GREEN, BLUE };

Typedef

- Syntax: typedef type new_type;
- Example: typedef int integer;

Storage Classes

- auto
- register
- static
- extern

Goto

- Syntax: goto label;
- Example: goto end;

Constants

- Integer constants: 123, 0x7b, 017
- Floating-point constants: 3.14, 0.5, 1e-3
- Character constants: 'a', '\n', '\x7f'
- String constants: "hello", "goodbye"

Macros

- Object-like macros: #define PI 3.14
- Function-like macros: #define SQUARE(x) ((x) * (x))

Inline Assembly

- Syntax: asm("assembly_code");
- Example: asm("movl %eax, %ebx");

Volatile

- Syntax: volatile type variable;
- Example: volatile int flag;

Restrict

- Syntax: restrict type *pointer;
- Example: restrict int *ptr;

Alignas

- Syntax: alignas(type) variable;
- Example: alignas(double) float x;

Aatributes

- Syntax: [[attribute]] type variable;
- Example: [[noreturn]] void abort();

GNU Extensions

- Label addresses: &&label
- Statement expressions: ({ statement })
- Typeof: typeof(expression)

Please note that some of these features are GNU extensions or specific to certain compilers, and may not be part of the standard C language.

Designated Initializers

- Syntax: type variable = {.member1 = value1, .member2 = value2};
- Example: struct Person person = {.name = "John", .age = 30};

Compound Literals

- Syntax: (type) {value1, value2, ...}
- Example: (int []) {1, 2, 3}

Variadic Macros

- Syntax: #define macro(name, ...)
- Example: #define printf("format string: " #__VA_ARGS__)

Generic Selections

- Syntax: _Generic(expression, type1: value1, type2: value2, ...)
- Example: _Generic(x, int: 1, float: 2, default: 0)

Atributes

- Syntax: [[attribute]] type variable;
- Example: [[noreturn]] void abort();

Statement Expressions

- Syntax: ({ statement })
- Example: ({ int x = 5; x; })

Typedefs with Type Parameters

- Syntax: typedef type name(type_param1, type_param2, ...);
- Example: typedef int my_int_t(size_t);

Please note that some of these features are part of the C11 or C17 standards, and may not be supported in earlier versions of the C language. 
Additionally, some features may be specific to certain compilers or platforms.

Static Assertions

- Syntax: _Static_assert(expression, message);
- Example: _Static_assert(sizeof(int) == 4, "int is not 32-bit");

Thread Local Storage

- Syntax: _Thread_local type variable;
- Example: _Thread_local int tls_var;

Atomic Types

- Syntax: _Atomic(type) variable;
- Example: _Atomic(int) atomic_var;

Sync Primitives

- Syntax: atomic_fetch_add(&atomic_var, 1);
- Example: atomic_fetch_add(&atomic_var, 1);

Explicitly Thread-Local Variables

- Syntax: __thread type variable;
- Example: __thread int tls_var;

C11/C17 Features

- Syntax: aligned(type) variable; (C11)
- Example: aligned(int) x; (C11)
- Syntax: noreturn type function(); (C11)
- Example: noreturn void abort(); (C11)
- Syntax: atomic_type atomic_var; (C17)
- Example: atomic_int atomic_var; (C17)

Please note that some of these features are part of the C11 or C17 standards, and may not be supported in earlier versions of the C language. 
Additionally, some features may be specific to certain compilers or platforms.

Designated Initializers (C99+)

- Syntax: type variable = {.member1 = value1, .member2 = value2};
- Example: struct Person person = {.name = "John", .age = 30};

Compound Literals (C99+)

- Syntax: (type) {value1, value2, ...}
- Example: (int []) {1, 2, 3}

Variadic Macros (C99+)

- Syntax: #define macro(name, ...)
- Example: #define printf("format string: " #__VA_ARGS__)

Generic Selections (C11+)

- Syntax: _Generic(expression, type1: value1, type2: value2, ...)
- Example: _Generic(x, int: 1, float: 2, default: 0)

Static Assertions (C11+)

- Syntax: _Static_assert(expression, message);
- Example: _Static_assert(sizeof(int) == 4, "int is not 32-bit");

Thread Local Storage (C11+)

- Syntax: _Thread_local type variable;
- Example: _Thread_local int tls_var;

Atomic Types (C11+)

- Syntax: _Atomic(type) variable;
- Example: _Atomic(int) atomic_var;

Sync Primitives (C11+)

- Syntax: atomic_fetch_add(&atomic_var, 1);
- Example: atomic_fetch_add(&atomic_var, 1);

Please note that some of these features are part of the C99, C11, or C17 standards, and may not be supported in earlier versions of the C language. 
Additionally, some features may be specific to certain compilers or platforms.

Alignas (C11+)

- Syntax: alignas(type) variable;
- Example: alignas(double) float x;

Attributes (C23+)

- Syntax: [[attribute]] type variable;
- Example: [[noreturn]] void abort();

Bitfields (C23+)

- Syntax: struct { int field1 : 1; int field2 : 2; };
- Example: struct { int is_ready : 1; int count : 2; };

Complex Numbers (C99+)

- Syntax: complex type variable;
- Example: complex float z;

Decimal Floating Point (C23+)

- Syntax: decimal type variable;
- Example: decimal float x;

Imaginary Numbers (C99+)

- Syntax: imaginary type variable;
- Example: imaginary float z;

Generic Math (C11+)

- Syntax: generic math_function(type x) { ... }
- Example: generic sqrt(type x) { return x * x; }

Lambda Expressions (C23+)

- Syntax: ^type(parameters) { body }
- Example: ^int(int x) { return x * x; }

Restrict Keyword (C99+)

- Syntax: restrict type *pointer;
- Example: restrict int *ptr;

Sync Primitives (C11+)

- Syntax: atomic_fetch_add(&atomic_var, 1);
- Example: atomic_fetch_add(&atomic_var, 1);

Typedef Extentions (C23+)

- Syntax: typedef type name(type_param1, type_param2, ...);
- Example: typedef int my_int_t(size_t);

Variadic Functions (C99+)

- Syntax: type function(type param1, ...) { ... }
- Example: int printf(const char *format, ...) { ... }


Boolean Type (C99+)

- Syntax: _Bool bool_var;
- Example: _Bool is_true = 1;

Complex Math (C99+)

- Syntax: complex type complex_var;
- Example: complex float z = 3.0 + 4.0 * I;

Decimal Math (C23+)

- Syntax: decimal type decimal_var;
- Example: decimal float x = 2.5;

Fixed-Point Math (C23+)

- Syntax: fixed type fixed_var;
- Example: fixed int x = 5;

Imaginary Math (C99+)

- Syntax: imaginary type imaginary_var;
- Example: imaginary float z = 3.0 + 4.0 * I;

Scalar Types (C23+)

- Syntax: scalar type scalar_var;
- Example: scalar int x = 5;

Vector Types (C23+)

- Syntax: vector type vector_var;
- Example: vector int x = (1, 2, 3);

Dynamic Memory Allocation

- Syntax: malloc(size_t size)
- Example: int* ptr = malloc(10 * sizeof(int))

Pointer Arithmetic

- Syntax: pointer + integer
- Example: int* ptr = array + 5

Structures

- Syntax: struct { type member1; type member2; }
- Example: struct Person { int age; char name[20]; }

Unions

- Syntax: union { type member1; type member2; }
- Example: union Data { int i; float f; }

Enumerations

- Syntax: enum { enumerator1, enumerator2, ... }
- Example: enum Color { RED, GREEN, BLUE }

TypeDefs

- Syntax: typedef type name
- Example: typedef int my_int

Enumerations with TypeDefs

- Syntax: typedef enum { enumerator1, enumerator2, ... } name
- Example: typedef enum { RED, GREEN, BLUE } Color

Goto Statements

- Syntax: goto label;
- Example: goto end;

Lables

- Syntax: label:
- Example: end:

Switch Statements

- Syntax: switch(expression) { case value1: ...; break; case value2: ...; break; default: ...; }
- Example: switch(x) { case 1: printf("x is 1"); break; case 2: printf("x is 2"); break; default: printf("x is something else"); }

Constant Expressions

- Syntax: const type variable = value;
- Example: const int MAX_SIZE = 1024;

Inline Functions

- Syntax: inline type function(type param1, ...) { ... }
- Example: inline int max(int a, int b) { return (a > b) ? a : b; }

Pragmas

- Syntax: #pragma directive
- Example: #pragma once

Variadic Functions

- Syntax: type function(type param1, ...) { ... }
- Example: int printf(const char *format, ...) { ... }

Null Pointer Constants

- Syntax: NULL
- Example: int* ptr = NULL;

Static Assertions

- Syntax: _Static_assert(expression, message);
- Example: _Static_assert(sizeof(int) == 4, "int is not 32-bit");

Thread Local Storage

- Syntax: _Thread_local type variable;
- Example: _Thread_local int tls_var;

Atomic Operations

- Syntax: atomic_fetch_add(&atomic_var, 1);
- Example: atomic_fetch_add(&atomic_var, 1);

Sync Primitives

- Syntax: sync_fetch_and_add(&sync_var, 1);
- Example: sync_fetch_and_add(&sync_var, 1);

Lambda Expressions (C23+)

- Syntax: ^type(parameters) { body }
- Example: ^int(int x) { return x * x; }

Generic Selections (C11+)

- Syntax: _Generic(expression, type1: value1, type2: value2, ...)
- Example: _Generic(x, int: 1, float: 2, default: 0)

Designated Initializers (C99+)

- Syntax: type variable = {.member1 = value1, .member2 = value2};
- Example: struct Person person = {.name = "John", .age = 30};

Compound Literals (C99+)

- Syntax: (type) {value1, value2, ...}
- Example: (int []) {1, 2, 3}

Variadic Macros (C99+)

- Syntax: #define macro(name, ...)
- Example: #define printf("format string: " #__VA_ARGS__)

Generic Selections (C11+)

- Syntax: _Generic(expression, type1: value1, type2: value2, ...)
- Example: _Generic(x, int: 1, float: 2, default: 0)

Static Assertions (C11+)

- Syntax: _Static_assert(expression, message);
- Example: _Static_assert(sizeof(int) == 4, "int is not 32-bit");

Thread Local Storage (C11+)

- Syntax: _Thread_local type variable;
- Example: _Thread_local int tls_var;

Atomic Types (C11+)

- Syntax: _Atomic(type) variable;
- Example: _Atomic(int) atomic_var;

Sync Primitives (C11+)

- Syntax: sync_fetch_add(&sync_var, 1);
- Example: sync_fetch_add(&sync_var, 1);
