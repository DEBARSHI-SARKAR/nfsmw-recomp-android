/* speed.exe 006307f0 FUN_006307f0; analysis pseudocode, not buildable source.
 * calls 004c2170 FUN_004c2170
 * calls 005ff2e0 FUN_005ff2e0
 * calls 0062c9a0 FUN_0062c9a0
 * calls 00624a40 FUN_00624a40
 * calls 0065faf0 FUN_0065faf0
 * calls 005faa20 FUN_005faa20
 */

undefined4 * __fastcall FUN_006307f0(undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878247;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  *param_1 = &PTR_FUN_008a7b30;
  local_4 = 0;
  local_20 = param_1;
  if ((DAT_0091e000 == 0) || (*(char *)(DAT_0091e000 + 0x198a) == '\0')) {
LAB_00630851:
    uVar3 = 0;
  }
  else {
    if (*(int *)(DAT_0091e000 + 0x1968) != 0) {
      iVar1 = FUN_005faa20();
      if (iVar1 == 8) goto LAB_00630851;
    }
    uVar3 = 1;
  }
  FUN_004c2170(uVar3);
  FUN_005ff2e0(5,0);
  DAT_0091cf28 = 1;
  FUN_00624a40(&local_24);
  local_1c = local_24;
  local_14 = 0x10;
  local_10 = 0;
  local_18 = 0x20d60dbf;
  FUN_0065faf0();
  iVar1 = DAT_00920390 + 0x10;
  local_24 = DAT_00920390;
  bVar2 = DAT_00920390 != 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  DAT_00920390 = iVar1;
  if (bVar2) {
    FUN_0062c9a0(0);
  }
  ExceptionList = local_c;
  return param_1;
}

