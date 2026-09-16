# IGDC - C Gaming Project

A C programming project for building gaming software from scratch.

## Project Structure

```
c-project/
├── README.md
├── Makefile
├── .gitignore
├── src/
│   ├── main.c
│   ├── game.c
│   └── utils.c
├── include/
│   ├── game.h
│   └── utils.h
├── tests/
│   └── test_game.c
└── bin/
    └── (compiled binaries go here)
```

## Building the Project

### Prerequisites
- GCC or Clang compiler
- Make

### Compile
```bash
make
```

### Run
```bash
./bin/main
```

### Clean
```bash
make clean
```

### Run Tests
```bash
make test
```

## Getting Started

1. Edit source files in `src/`
2. Add headers in `include/`
3. Update `Makefile` as needed
4. Build with `make`

## Game Development Notes

- Keep game logic modular
- Use clear naming conventions
- Comment complex algorithms
- Write tests for critical functions
