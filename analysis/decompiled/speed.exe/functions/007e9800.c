/* speed.exe 007e9800 FUN_007e9800; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007e9800(uint *param_1,int param_2)

{
  *param_1 = ((param_2 != 1) - 1 & 0x800) << 8 | *param_1 & 0xfff7ffff;
  return;
}

