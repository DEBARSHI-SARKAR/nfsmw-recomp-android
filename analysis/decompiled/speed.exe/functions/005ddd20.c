/* speed.exe 005ddd20 FUN_005ddd20; analysis pseudocode, not buildable source.
 * calls 00620f80 FUN_00620f80
 * calls 00627400 FUN_00627400
 * calls 0056d720 FUN_0056d720
 * calls 0056d740 FUN_0056d740
 */

void FUN_005ddd20(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00874e9f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_0056d720(param_1);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 1) == '\0')) {
    *(undefined1 *)(iVar2 + 1) = 2;
    uVar1 = FUN_0056d740();
    *(undefined2 *)(iVar2 + 2) = uVar1;
    iVar2 = FUN_00627400(0xc);
    local_4 = 0;
    if (iVar2 != 0) {
      FUN_00620f80(param_1);
    }
  }
  ExceptionList = local_c;
  return;
}

