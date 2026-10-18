/* speed.exe 004e0c60 FUN_004e0c60; analysis pseudocode, not buildable source.
 * calls 004b8db0 FUN_004b8db0
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 * calls 00831782 FUN_00831782
 * calls 00831682 FUN_00831682
 * calls 00831a8a FUN_00831a8a
 */

void __fastcall FUN_004e0c60(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *unaff_EBX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0086cd5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x10) != 0) {
    ExceptionList = &pvStack_c;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x3c) = 1;
  }
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_00831782();
    }
    FUN_00831682(piVar1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x14);
  iVar3 = **(int **)(param_1 + 0x40);
  uVar2 = (**(code **)**(undefined4 **)(iVar4 + 0x44))();
  (**(code **)(iVar3 + 0x38))(uVar2);
  (**(code **)(**(int **)(param_1 + 0x40) + 0x40))(0);
  FUN_004b8db0(param_1);
  iVar3 = FUN_00831667(0x28);
  pvStack_c = (void *)0x0;
  if (iVar3 != 0) {
    iVar4 = (**(code **)(**(int **)(iVar4 + 0x44) + 4))();
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0x32 < iVar4) {
      iVar4 = 0x32;
    }
    piVar1 = (int *)(iVar3 + 4);
    *piVar1 = iVar4;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x18) = 25000;
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    *(undefined4 *)(iVar3 + 0x20) = 0x7fff;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    iVar4 = FUN_00831a8a(&DAT_00914924,piVar1,iVar3);
    if (iVar4 < 0) {
      FUN_0083198b(&PTR_s_ENV_STATIC_008f0288);
      FUN_00831a8a(&DAT_00914924,piVar1,iVar3);
    }
    *(int *)(param_1 + 0x28) = iVar3;
    ExceptionList = unaff_EBX;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  ExceptionList = unaff_EBX;
  return;
}

