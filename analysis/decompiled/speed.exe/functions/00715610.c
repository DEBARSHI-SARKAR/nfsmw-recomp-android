/* speed.exe 00715610 FUN_00715610; analysis pseudocode, not buildable source.
 * calls 00713850 FUN_00713850
 * calls 007124f0 FUN_007124f0
 * calls 0045da30 FUN_0045da30
 * calls 005d0370 FUN_005d0370
 */

/* WARNING: Removing unreachable block (ram,0x007157be) */
/* WARNING: Removing unreachable block (ram,0x007157cb) */
/* WARNING: Removing unreachable block (ram,0x007157db) */

undefined4 __thiscall FUN_00715610(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00880190;
  local_c = ExceptionList;
  local_20 = 0;
  if (((param_2 == 0) && (iVar2 = *(int *)(param_1 + 0x5c), iVar2 != 0)) &&
     (1 < (uint)(*(int *)(param_1 + 0x60) - iVar2 >> 3))) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x60) - iVar2 >> 3;
    }
    ExceptionList = &local_c;
    iVar2 = FUN_0045da30(iVar2);
    local_20 = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 4 + iVar2 * 8);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x5c);
    if ((iVar2 == 0) || (*(int *)(param_1 + 0x60) - iVar2 >> 3 != 1)) {
      if (param_2 == 1) {
        local_4 = 0;
        if (*(int *)(param_1 + 0x5c) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 3;
        }
        ExceptionList = &local_c;
        FUN_007124f0(iVar2);
        iVar2 = *(int *)(param_1 + 0x5c);
        if (iVar2 != *(int *)(param_1 + 0x60)) {
          do {
            cVar1 = (**(code **)(**(int **)(iVar2 + 4) + 0x19c))();
            if (cVar1 != '\0') {
              FUN_00713850(iVar2 + 4);
            }
            iVar2 = iVar2 + 8;
          } while (iVar2 != *(int *)(param_1 + 0x60));
        }
      }
      else if (param_2 == 2) {
        local_4 = 1;
        if (*(int *)(param_1 + 0x5c) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 3;
        }
        ExceptionList = &local_c;
        FUN_007124f0(iVar2);
        iVar2 = *(int *)(param_1 + 0x5c);
        if (iVar2 != *(int *)(param_1 + 0x60)) {
          do {
            cVar1 = (**(code **)(**(int **)(iVar2 + 4) + 0x19c))();
            if (cVar1 == '\0') {
              FUN_00713850(iVar2 + 4);
            }
            iVar2 = iVar2 + 8;
          } while (iVar2 != *(int *)(param_1 + 0x60));
        }
      }
    }
    else {
      if (param_2 != 0) {
        if (param_2 == 1) {
          ExceptionList = &local_c;
          cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x5c) + 4) + 0x19c))();
          if (cVar1 == '\0') {
            ExceptionList = local_c;
            return 0;
          }
          ExceptionList = local_c;
          return *(undefined4 *)(*(int *)(param_1 + 0x5c) + 4);
        }
        if (param_2 != 2) {
          return 0;
        }
        ExceptionList = &local_c;
        cVar1 = (**(code **)(**(int **)(iVar2 + 4) + 0x19c))();
        if (cVar1 != '\0') {
          ExceptionList = local_c;
          return 0;
        }
      }
      local_20 = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 4);
    }
  }
  ExceptionList = local_c;
  return local_20;
}

