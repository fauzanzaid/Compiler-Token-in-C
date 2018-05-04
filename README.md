# Compiler-Token-in-C
A small library implementing tokens for use by lexers and parsers, written in C

### Building
To build the static library,  run the following commands from the terminal:
```bash
mkdir build && cd build && cmake .. && make ; cd ..
```
This will build ```libToken.a``` in ```./bin``` directory.

### Usage
Include ```Token.h``` in the source file and link to ```libToken.a``` while compiling the source file.

See ```include/Token.h``` for information about functionality provided by this module.
