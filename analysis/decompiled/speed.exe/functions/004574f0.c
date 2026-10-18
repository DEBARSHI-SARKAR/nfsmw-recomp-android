/* speed.exe 004574f0 FUN_004574f0; analysis pseudocode, not buildable source.
 * calls 00626c50 FUN_00626c50
 * calls 00456f40 FUN_00456f40
 */

int __thiscall FUN_004574f0(int param_1,int param_2)

{
  int iVar1;
  int local_14 [5];
  
  local_14[0] = param_2;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  local_14[4] = FUN_00626c50(param_2);
  iVar1 = *(int *)(param_1 + 4);
  FUN_00456f40(&param_2,local_14);
  if (param_2 != *(int *)(iVar1 + 0x30)) {
    return param_2 + 0xc;
  }
  return **(int **)(iVar1 + 0x20);
}

