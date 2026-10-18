/* speed.exe 007ce448 FUN_007ce448; analysis pseudocode, not buildable source.
 */

uint FUN_007ce448(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}

