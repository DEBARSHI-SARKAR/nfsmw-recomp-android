/* speed.exe 006d8a60 FUN_006d8a60; analysis pseudocode, not buildable source.
 * calls 006d88b0 FUN_006d88b0
 */

void __thiscall FUN_006d8a60(int param_1,undefined4 param_2,int param_3,int param_4)

{
  FUN_006d88b0(param_2,(*(int *)(param_1 + 0x4988 + (param_4 % 0x168) * 4) * param_3) / 1000);
  return;
}

