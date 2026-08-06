# Solutions to The C Programming Language (2nd Edition)

This repository contains my solutions for *The C Programming Language (2nd Edition)* by Brian W. Kernighan and Dennis M. Ritchie.

---

## Goals

- Study C systematically
- Solve every exercise in the book
- Practice writing clean and idiomatic C
- Improve version control workflow with Git

---

## Repository Structure

```
.
├── README.md
├── LICENSE
├── .gitignore
├── chapter01
│   ├── exercise01.c
│   ├── exercise02.c
│   └── ...
├── chapter02
│   ├── exercise01.c
│   └── ...
└── ...
```

---

## Build

Most source files are intended to be compiled individually with GCC.

Basic compilation:

```bash
gcc source.c -o output
./output
```

For exercises expected to compile cleanly, the following warning flags are recommended:

```bash
gcc -Wall -Wextra -Wpedantic source.c -o output
```

Some exercises intentionally contain syntax errors, compiler warnings, or undefined behavior to demonstrate language features discussed in the book. Such programs may not compile or execute correctly by design.

---

## Conventions

- Each exercise is implemented in a separate source file.
- Solutions reflect my own understanding of the material.
- Compiler flags may differ depending on the objective of the exercise.
- Some source files intentionally contain invalid code to demonstrate compiler diagnostics or language behavior described in the book.

---

## Disclaimer

This repository contains my own solutions for educational purposes.

The original exercise statements remain the copyright of the publisher and are not reproduced in this repository.

---

## License

This project is licensed under the MIT License.
