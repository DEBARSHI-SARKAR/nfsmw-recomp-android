/* speed.exe 007e9860 FUN_007e9860; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007e9860(uint *param_1,int param_2)

{
  *param_1 = ((param_2 != 1) - 1 & 0x2000) << 8 | *param_1 & 0xffdfffff;
  return;
}

