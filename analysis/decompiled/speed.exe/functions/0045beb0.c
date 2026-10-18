/* speed.exe 0045beb0 FUN_0045beb0; analysis pseudocode, not buildable source.
 * calls 00459f80 FUN_00459f80
 */

undefined4 * __thiscall FUN_0045beb0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    if (*(uint *)(iVar1 + 0x1c) < 2) {
      *(undefined4 *)(iVar1 + 0x1c) = 0;
      FUN_00459f80(iVar1,*(int *)(DAT_0090dcbc + 4) + 0x38);
    }
    else {
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) - 1;
    }
    param_1[2] = 0;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  iVar1 = param_2[2];
  param_1[2] = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  }
  return param_1;
}

