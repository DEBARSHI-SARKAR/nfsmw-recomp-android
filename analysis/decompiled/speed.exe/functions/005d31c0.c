/* speed.exe 005d31c0 FUN_005d31c0; analysis pseudocode, not buildable source.
 * calls 005d0df0 FUN_005d0df0
 */

void FUN_005d31c0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874984;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 0xc);
  if ((*(byte *)(param_1 + 4) & 2) != 0) {
    iVar2 = iVar2 + param_1;
  }
  uVar1 = 0;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      local_4 = 0;
      if (iVar2 != -0x1c) {
        FUN_005d0df0(param_2);
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x40;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  ExceptionList = local_c;
  return;
}

