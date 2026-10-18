/* speed.exe 007e9660 FUN_007e9660; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007e9660(uint *param_1,int param_2)

{
  *param_1 = ((param_2 != 1) - 1 & 8) << 8 | *param_1 & 0xfffff7ff;
  return;
}

