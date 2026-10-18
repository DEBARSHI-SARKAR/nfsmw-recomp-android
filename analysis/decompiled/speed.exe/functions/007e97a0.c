/* speed.exe 007e97a0 FUN_007e97a0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007e97a0(uint *param_1,int param_2)

{
  *param_1 = ((param_2 != 1) - 1 & 0x200) << 8 | *param_1 & 0xfffdffff;
  return;
}

