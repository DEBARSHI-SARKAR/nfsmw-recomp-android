/* speed.exe 007e97d0 FUN_007e97d0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007e97d0(uint *param_1,int param_2)

{
  *param_1 = ((param_2 != 1) - 1 & 0x400) << 8 | *param_1 & 0xfffbffff;
  return;
}

