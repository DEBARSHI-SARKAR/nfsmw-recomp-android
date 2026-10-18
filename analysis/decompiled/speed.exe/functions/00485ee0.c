/* speed.exe 00485ee0 FUN_00485ee0; analysis pseudocode, not buildable source.
 * calls 00483d30 FUN_00483d30
 * calls 004856e0 FUN_004856e0
 * calls 005d29d0 FUN_005d29d0
 */

undefined4 FUN_00485ee0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0086ad12;
  local_c = ExceptionList;
  puVar7 = DAT_0092d87c;
  ExceptionList = &local_c;
  if (DAT_0092d87c != DAT_0092d87c + DAT_0092d884) {
    do {
      piVar1 = (int *)*puVar7;
      iVar4 = *(int *)(param_1 + 8);
      iVar3 = (**(code **)(*piVar1 + 0x2c))();
      if (iVar3 == iVar4) {
        iVar4 = (**(code **)(*piVar1 + 0x14))();
        if (iVar4 == 0) {
          ExceptionList = local_c;
          return 0;
        }
        piVar5 = (int *)(**(code **)(*piVar1 + 4))();
        if (piVar5 == (int *)0x0) {
          ExceptionList = local_c;
          return 0;
        }
        iVar4 = (**(code **)(*piVar5 + 0x70))();
        if (iVar4 == 0) {
          ExceptionList = local_c;
          return 0;
        }
        cVar2 = FUN_00483d30();
        if ((cVar2 == '\0') && (DAT_0091103a == '\0')) {
          ExceptionList = local_c;
          return 0;
        }
        iVar4 = FUN_005d29d0(0x2f0,0);
        uStack_4 = 0;
        if (iVar4 == 0) {
          ExceptionList = local_c;
          return 0;
        }
        uVar6 = FUN_004856e0(param_1,piVar1);
        ExceptionList = local_c;
        return uVar6;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != DAT_0092d87c + DAT_0092d884);
  }
  ExceptionList = local_c;
  return 0;
}

