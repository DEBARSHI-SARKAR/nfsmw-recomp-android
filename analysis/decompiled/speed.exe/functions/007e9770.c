/* speed.exe 007e9770 FUN_007e9770; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007e9770(uint *param_1,int param_2)

{
  *param_1 = ((param_2 != 1) - 1 & 0x100) << 8 | *param_1 & 0xfffeffff;
  return;
}

