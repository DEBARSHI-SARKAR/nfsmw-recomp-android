/* speed.exe 006f5750 FUN_006f5750; analysis pseudocode, not buildable source.
 * calls 00659640 FUN_00659640
 * calls 006459e0 FUN_006459e0
 * calls 006253d0 FUN_006253d0
 * calls 004478a0 FUN_004478a0
 * calls 004b45b0 FUN_004b45b0
 * calls 004b8d80 FUN_004b8d80
 * calls 00737490 FUN_00737490
 * calls 0050d280 FUN_0050d280
 * calls 006dfaf0 FUN_006dfaf0
 * calls 0044fe30 FUN_0044fe30
 * calls 00627400 FUN_00627400
 * calls 0073de50 FUN_0073de50
 * calls 00460bf0 FUN_00460bf0
 */

void __fastcall FUN_006f5750(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087ebdf;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0050d280();
  iVar1 = FUN_00460bf0();
  if (*(int *)(param_1 + 0x394) == iVar1) {
    DAT_009a3a70 = DAT_009a3a70 + 1;
  }
  *(undefined4 *)(param_1 + 0x3a8) = DAT_008f8304;
  DAT_008f8304 = 0x40e00000;
  DAT_00911024 = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(int **)(param_1 + 0x3b8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3b8) + 4))();
  }
  FUN_00659640();
  uVar2 = FUN_006459e0(param_1 + 0x10,param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x3b8) = uVar2;
  *(undefined4 *)(param_1 + 0x2f4) = 5;
  (**(code **)(*(int *)(param_1 + 0x48) + 0x54))();
  FUN_004b8d80();
  if (DAT_00912100 != 0) {
    FUN_004b45b0();
  }
  FUN_0044fe30();
  iVar1 = FUN_004478a0();
  if (iVar1 == 2) {
    FUN_00737490();
    puVar3 = (undefined4 *)FUN_006dfaf0();
    if (puVar3 != (undefined4 *)0x0) {
      FUN_0073de50();
      *puVar3 = 1;
    }
    iVar1 = FUN_00627400();
    uStack_4 = 0;
    if (iVar1 != 0) {
      FUN_006253d0();
    }
    uStack_4 = 0xffffffff;
  }
  if ((DAT_0092d884 != 0) && ((int *)*DAT_0092d87c != (int *)0x0)) {
    piVar4 = (int *)(**(code **)(*(int *)*DAT_0092d87c + 0x38))();
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
  }
  ExceptionList = pvStack_c;
  return;
}

