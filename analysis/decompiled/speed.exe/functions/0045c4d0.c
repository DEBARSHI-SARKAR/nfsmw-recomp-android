/* speed.exe 0045c4d0 FUN_0045c4d0; analysis pseudocode, not buildable source.
 * calls 0045c380 FUN_0045c380
 * calls 00659260 FUN_00659260
 * calls 0045ac50 FUN_0045ac50
 * calls 00456400 FUN_00456400
 * calls 00454db0 FUN_00454db0
 */

void __fastcall FUN_0045c4d0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0086a03e;
  pvStack_c = ExceptionList;
  piVar1 = (int *)param_1[0xd];
  ExceptionList = &pvStack_c;
  param_1[5] = 0;
  iVar2 = *piVar1;
  local_4 = 2;
  *piVar1 = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    FUN_0045c380();
    DAT_0090dcd4 = DAT_0090dcd4 - 0x3c;
    if (DAT_0090dcd0 < DAT_0090dcd4) {
      DAT_0090dcd0 = DAT_0090dcd4;
    }
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(piVar1,0x3c,0);
  }
  local_4._0_1_ = 1;
  FUN_0045ac50();
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_1[3] != 0) {
    iVar2 = param_1[4] * 0xc;
    DAT_0090dcd4 = DAT_0090dcd4 + param_1[4] * -0xc;
    if (DAT_0090dcd0 < DAT_0090dcd4) {
      DAT_0090dcd0 = DAT_0090dcd4;
    }
    if (iVar2 != 0) {
      (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(param_1[3],iVar2,0);
    }
  }
  uVar3 = FUN_00454db0(*param_1);
  FUN_00456400(uVar3);
  ExceptionList = pvStack_c;
  return;
}

