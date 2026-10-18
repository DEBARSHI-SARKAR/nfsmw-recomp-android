/* speed.exe 005b1910 FUN_005b1910; analysis pseudocode, not buildable source.
 * calls 005b1560 FUN_005b1560
 * calls 005b1780 FUN_005b1780
 * calls 00464080 FUN_00464080
 * calls 005b16f0 FUN_005b16f0
 * calls 00465a70 FUN_00465a70
 */

int * __fastcall FUN_005b1910(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int local_30;
  int local_2c;
  undefined **local_28;
  int *local_24;
  int *local_20;
  undefined **local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00873ea0;
  local_c = ExceptionList;
  local_2c = 0;
  local_30 = 0;
  ExceptionList = &local_c;
  FUN_005b16f0(*(undefined4 *)(param_1 + 0x5c),&local_30,&local_2c);
  local_24 = &local_30;
  local_20 = &local_2c;
  local_28 = &PTR_FUN_008a2cc0;
  local_4 = 0;
  FUN_005b1560(&local_28);
  if (local_30 == 0) {
    ExceptionList = local_c;
    return (int *)0x0;
  }
  iVar1 = local_2c + 4 + local_30 * 8;
  uVar4 = 0;
  if (DAT_008f578c != 0xffffffff) {
    iVar2 = FUN_00464080(DAT_008f578c);
    if (iVar1 + 0x40 < iVar2) {
      uVar4 = DAT_008f578c;
    }
  }
  piVar3 = (int *)FUN_00465a70(iVar1,uVar4 & 0xf | 0x400);
  local_2c = iVar1 - local_2c;
  *piVar3 = local_30;
  local_30 = 0;
  FUN_005b1780(*(undefined4 *)(param_1 + 0x5c),&local_30,&local_2c,piVar3);
  local_18 = &local_30;
  local_14 = &local_2c;
  local_1c = &PTR_FUN_008a2cc8;
  local_4 = CONCAT31(local_4._1_3_,1);
  local_10 = piVar3;
  FUN_005b1560(&local_1c);
  ExceptionList = local_c;
  return piVar3;
}

