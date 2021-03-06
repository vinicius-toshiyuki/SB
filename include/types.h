/**
 * @file types.h
 * @author Henrique Mariano
 * @author Vinicius Toshiyuki
 * @date 11 Jul 2019
 * @brief File contain the definition of the jvm types.
 */
#ifndef types_h
#define types_h

#include <stdint.h>

typedef uint8_t u1;
typedef uint16_t u2;
typedef uint32_t u4;
typedef uint64_t u8;
typedef int32_t integer;
typedef int8_t byte;
typedef int8_t character;
typedef int8_t boolean;

/**
 * Read one byte from classfile.
 */
#define u1_read(buffer, file) { fread(&buffer, sizeof(u1), 1, file); }

/**
 * Read two bytes from classfile.
 */
#define u2_read(buffer, file) \
{ \
  buffer = 0x0000; \
  u1 __byte; \
  u1_read(__byte, file); \
  buffer |= __byte; \
  u1_read(__byte, file); \
  buffer = (buffer << 8) | __byte; \
}

/**
 * Read four bytes from classfile.
 */
#define u4_read(buffer, file) { int ____i; for(____i = 0; ____i < 4; ____i++){u1 ____byte; u1_read(____byte, file); buffer <<= ____i == 0 ? 0 : 8; buffer |= ____byte;} }

#endif /* types_h */

