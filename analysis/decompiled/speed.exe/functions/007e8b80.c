/* speed.exe 007e8b80 FUN_007e8b80; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007e8b80(uint *param_1,int param_2)

{
  *param_1 = ((param_2 != 1) - 1 & 4) << 8 | *param_1 & 0xfffffbff;
  return;
}

