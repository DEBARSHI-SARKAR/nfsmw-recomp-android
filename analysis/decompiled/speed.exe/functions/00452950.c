/* speed.exe 00452950 FUN_00452950; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00452950(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  iVar1 = param_2[2];
  param_1[2] = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  }
  return;
}

