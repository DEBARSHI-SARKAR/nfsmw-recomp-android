/* speed.exe 007e9830 FUN_007e9830; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007e9830(uint *param_1,int param_2)

{
  *param_1 = ((param_2 != 1) - 1 & 0x1000) << 8 | *param_1 & 0xffefffff;
  return;
}

