/* speed.exe 007e9630 FUN_007e9630; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007e9630(uint *param_1,int param_2)

{
  *param_1 = ((param_2 != 1) - 1 & 2) << 8 | *param_1 & 0xfffffdff;
  return;
}

