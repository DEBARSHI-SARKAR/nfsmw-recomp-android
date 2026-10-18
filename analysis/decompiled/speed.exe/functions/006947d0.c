/* speed.exe 006947d0 FUN_006947d0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 006e9660 FUN_006e9660
 */

undefined4 __thiscall FUN_006947d0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087c058;
  local_c = ExceptionList;
  uVar4 = 0;
  if (*(int *)(param_1 + 0xec) != 0) {
    ExceptionList = &local_c;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0x4c))();
    FUN_006e9660(*(undefined4 *)(iVar1 + 0x38));
    uStack_4 = 0;
    if (iStack_1c == DAT_00988e84) {
      uVar3 = 0;
      iVar1 = (**(code **)(**(int **)(param_1 + 0xec) + 8))();
      if (iVar1 != 0) {
        do {
          iVar1 = (**(code **)(**(int **)(param_1 + 0xec) + 0x44))(uVar4);
          if (*(int *)(iVar1 + 4) == DAT_00988e84) {
            uVar3 = uVar3 + 1;
          }
          uVar4 = uVar4 + 1;
          uVar2 = (**(code **)(**(int **)(param_1 + 0xec) + 8))();
        } while (uVar4 < uVar2);
      }
      if (param_2 <= uVar3) {
        uStack_4 = 0xffffffff;
        FUN_0045a430();
        ExceptionList = local_c;
        return 0;
      }
    }
    uStack_4 = 0xffffffff;
    FUN_0045a430();
  }
  ExceptionList = local_c;
  return 1;
}

