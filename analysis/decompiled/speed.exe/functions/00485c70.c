/* speed.exe 00485c70 FUN_00485c70; analysis pseudocode, not buildable source.
 * calls 00484fc0 FUN_00484fc0
 * calls 005d29d0 FUN_005d29d0
 */

undefined4 FUN_00485c70(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0086acb2;
  local_c = ExceptionList;
  puVar6 = DAT_0092d87c;
  ExceptionList = &local_c;
  if (DAT_0092d87c != DAT_0092d87c + DAT_0092d884) {
    do {
      piVar1 = (int *)*puVar6;
      iVar3 = *(int *)(param_1 + 8);
      iVar2 = (**(code **)(*piVar1 + 0x2c))();
      if (iVar2 == iVar3) {
        iVar3 = (**(code **)(*piVar1 + 0x14))();
        if (iVar3 == 0) {
          ExceptionList = local_c;
          return 0;
        }
        piVar4 = (int *)(**(code **)(*piVar1 + 4))();
        if (piVar4 == (int *)0x0) {
          ExceptionList = local_c;
          return 0;
        }
        iVar3 = (**(code **)(*piVar4 + 0x70))();
        if (iVar3 == 0) {
          ExceptionList = local_c;
          return 0;
        }
        iVar3 = FUN_005d29d0(0x4c,0);
        uStack_4 = 0;
        if (iVar3 == 0) {
          ExceptionList = local_c;
          return 0;
        }
        uVar5 = FUN_00484fc0(param_1,piVar1);
        ExceptionList = local_c;
        return uVar5;
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != DAT_0092d87c + DAT_0092d884);
  }
  ExceptionList = local_c;
  return 0;
}

