/* speed.exe 0045a0c0 FUN_0045a0c0; analysis pseudocode, not buildable source.
 * calls 00454cc0 FUN_00454cc0
 * calls 00659260 FUN_00659260
 * calls 00459f80 FUN_00459f80
 * calls 0045c490 FUN_0045c490
 * calls 004561a0 FUN_004561a0
 * calls 00459fd0 FUN_00459fd0
 * calls 004595c0 FUN_004595c0
 */

void __fastcall FUN_0045a0c0(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00869e38;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_00454cc0(param_1[8]);
  FUN_004561a0(uVar1);
  iVar3 = param_1[5];
  if (*(uint *)(iVar3 + 4) < 2) {
    *(undefined4 *)(iVar3 + 4) = 0;
    FUN_00459fd0(iVar3,*(int *)(DAT_0090dcbc + 4) + 0x44);
  }
  else {
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) - 1;
  }
  iVar3 = param_1[4];
  if (iVar3 != 0) {
    if (*(uint *)(iVar3 + 0x1c) < 2) {
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      FUN_00459f80(iVar3,*(int *)(DAT_0090dcbc + 4) + 0x38);
    }
    else {
      *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) - 1;
    }
  }
  FUN_004595c0();
  if (param_1[9] == 0) {
    if (param_1[6] != 0) {
      uVar2 = (uint)*(ushort *)(*(int *)(param_1[5] + 8) + 0x2c);
      DAT_0090dcd4 = DAT_0090dcd4 - uVar2;
      if (DAT_0090dcd0 < DAT_0090dcd4) {
        DAT_0090dcd0 = DAT_0090dcd4;
      }
      if (uVar2 != 0) {
        (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(param_1[6],uVar2,0);
      }
    }
  }
  else {
    FUN_0045c490();
  }
  local_4 = 0xffffffff;
  if (*param_1 != 0) {
    iVar3 = param_1[1] * 0xc;
    DAT_0090dcd4 = DAT_0090dcd4 + param_1[1] * -0xc;
    if (DAT_0090dcd0 < DAT_0090dcd4) {
      DAT_0090dcd0 = DAT_0090dcd4;
    }
    if (iVar3 != 0) {
      (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(*param_1,iVar3,0);
    }
  }
  ExceptionList = local_c;
  return;
}

