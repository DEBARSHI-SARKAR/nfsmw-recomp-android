/* speed.exe 0083fa70 FUN_0083fa70; analysis pseudocode, not buildable source.
 */

uint FUN_0083fa70(uint param_1)

{
  return (((param_1 & 0xff) << 8 | param_1 >> 8 & 0xff) << 8 | param_1 >> 0x10 & 0xff) << 8 |
         param_1 >> 0x18;
}

