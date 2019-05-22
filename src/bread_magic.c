#include <stdio.h>
#include <stdlib.h>
#include "../include/bread_magic.h"

int bread_magic(ClassFile *class, FILE *classfile){
	//class->magic = 0x00000000;
	u4_read(class->magic, classfile);
	return class->magic == 0xcafebabe ? 0 : 1;
}
  
