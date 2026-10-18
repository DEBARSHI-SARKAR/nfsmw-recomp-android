/* speed.exe 00786a90 FUN_00786a90; analysis pseudocode, not buildable source.
 * calls 004560d0 FUN_004560d0
 * calls 00452410 FUN_00452410
 * calls 00784ec0 FUN_00784ec0
 * calls 00503c50 FUN_00503c50
 * calls 00768570 FUN_00768570
 * calls 006269b0 FUN_006269b0
 * calls 0050c7b0 FUN_0050c7b0
 * calls 006eeb40 FUN_006eeb40
 * calls 00454810 FUN_00454810
 * calls 0045a430 FUN_0045a430
 * calls 00452380 FUN_00452380
 * calls 004ff160 FUN_004ff160
 */

undefined4 * __thiscall FUN_00786a90(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0088226e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006eeb40(param_2);
  *param_1 = &PTR_FUN_008b5d90;
  local_4 = 0;
  FUN_00768570(*(undefined4 *)(param_3 + 4),0,0);
  iVar3 = *(int *)(param_3 + 8);
  local_4._0_1_ = 1;
  param_1[0xb] = iVar3;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (iVar3 != 0) {
    iVar3 = FUN_00784ec0(iVar3);
    param_1[0xc] = iVar3;
    param_1[0xd] = iVar3 + 0x40;
    param_1[0xe] = iVar3 + 0x50;
  }
  DAT_009b391c = DAT_009b391c + 1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = *(undefined4 *)(param_3 + 0x14);
  local_4._0_1_ = 2;
  uVar4 = 0;
  FUN_00452380(*(undefined4 *)(param_3 + 0xc),0,0);
  local_4._0_1_ = 3;
  iVar3 = FUN_00452410();
  if (iVar3 == 0x4a97ec8f) {
    uVar4 = 0x10000000;
  }
  else if (iVar3 == -0x318f2825) {
    uVar4 = 0x20000000;
  }
  FUN_00452380(*(undefined4 *)(param_3 + 0x10),0,0);
  local_4 = CONCAT31(local_4._1_3_,4);
  iVar3 = FUN_00452410();
  if (iVar3 == -0x4eee011) {
    uVar4 = uVar4 | 0x1000000;
  }
  else {
    uVar4 = uVar4 | 0x2000000;
  }
  puVar1 = param_1 + 4;
  *DAT_009b3940 = puVar1;
  puVar2 = puVar1;
  param_1[5] = DAT_009b3940;
  DAT_009b3940 = puVar2;
  *puVar1 = &DAT_009b393c;
  iVar3 = FUN_00454810(0xaba86e60,0);
  if (iVar3 == 0) {
    FUN_006269b0(0xc);
  }
  iVar3 = FUN_004560d0();
  param_1[0xf] = 0;
  if (iVar3 != 0) {
    iVar3 = FUN_0050c7b0(iVar3,uVar4 | 0x800000);
    param_1[0xf] = iVar3;
    if (iVar3 != 0) {
      FUN_004ff160(param_1,&LAB_00768b70);
      FUN_00503c50();
    }
  }
  local_4._0_1_ = 3;
  FUN_0045a430();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0045a430();
  ExceptionList = local_c;
  return param_1;
}

