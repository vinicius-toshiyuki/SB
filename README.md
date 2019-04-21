# Bytecode reader and printer
## breader

![Java 8 Logo](https://images.app.goo.gl/L698G6ecc2xYEQsS7 "Java Logo")

### Description:
Reads a .class file and prints it's structure as described in Oracle's official [Java Virtual Machine Specification](https://docs.oracle.com/javase/specs/jvms/se7/html/jvms-4.html "Documentation")

### Compile: (only tested in Ubuntu 18.04)
	$ cd test/
	$ make

### Run:
	$ ./breader <class file name>

test/class has two simple .class files for testing

## TODO:
* Translate Bytecode to 'Java assembly'
* Print correctly non-ASCII Utf8 characters
* Documentation
