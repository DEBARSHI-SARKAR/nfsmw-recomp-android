/* speed.exe 007e98f0 FUN_007e98f0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007e98f0(uint *param_1,int param_2)

{
  *param_1 = ((param_2 != 1) - 1 & 0x4000) << 8 | *param_1 & 0xffbfffff;
  return;
}

