/* 
 * bitAnd - x&y using only ~ and | 
 *   Example: bitAnd(6, 5) = 4
 *   Legal ops: ~ |
 *   Max ops: 8
 *   Rating: 1
 * 用非与或运算实现与运算，热身题。
 */
int bitAnd(int x, int y) {
  return ~(~x|~y);
}

/* 
 * getByte - Extract byte n from word x
 *   Bytes numbered from 0 (LSB) to 3 (MSB)
 *   Examples: getByte(0x12345678,1) = 0x56
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 6
 *   Rating: 2
 * 表示一个16进制数需要4bit也就是半个字节，则原数每右移1字节需要右移8位,即右移8n位
 */
int getByte(int x, int n) {
  return (x >> (n << 3)) & (0xFF);
}

