/* 
 * bitAnd - x&y using only ~ and | 
 *   Example: bitAnd(6, 5) = 4
 *   Legal ops: ~ |
 *   Max ops: 8
 *   Rating: 1
 */
/*
 * 用非与或运算实现与运算，热身题。
 */
int bitAnd(int x, int y) {
  return ~(~x|~y);
}


