/* speed.exe 007e98c0 FUN_007e98c0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007e98c0(uint *param_1,int param_2)

{
  *param_1 = ((param_2 != 1) - 1 & 0x10000) << 8 | *param_1 & 0xfeffffff;
  return;
}

