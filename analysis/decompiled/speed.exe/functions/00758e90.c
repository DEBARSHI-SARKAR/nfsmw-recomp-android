/* speed.exe 00758e90 FUN_00758e90; analysis pseudocode, not buildable source.
 * calls 0078a3a0 FUN_0078a3a0
 * calls 00758b30 FUN_00758b30
 */

void __thiscall FUN_00758e90(int param_1,undefined4 param_2)

{
  uint local_4;
  
  local_4 = 0;
  FUN_0078a3a0(&local_4,8);
  if (*(int *)(param_1 + 8 + (local_4 & 0xff) * 4) != 0) {
    FUN_00758b30(param_2);
  }
  return;
}

