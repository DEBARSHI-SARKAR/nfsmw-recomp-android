/* speed.exe 00866d30 FUN_00866d30; analysis pseudocode, not buildable source.
 */

uint FUN_00866d30(uint param_1)

{
  return (((param_1 & 0xff) << 8 | param_1 >> 8 & 0xff) << 8 | param_1 >> 0x10 & 0xff) << 8 |
         param_1 >> 0x18;
}

