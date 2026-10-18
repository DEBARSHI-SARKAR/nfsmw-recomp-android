/* speed.exe 007e9600 FUN_007e9600; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007e9600(uint *param_1,int param_2)

{
  *param_1 = (uint)(param_2 == 1) << 8 | *param_1 & 0xfffffeff;
  return;
}

