/* speed.exe 005a1380 FUN_005a1380; analysis pseudocode, not buildable source.
 * calls 0058bbd0 FUN_0058bbd0
 * calls 005251e0 FUN_005251e0
 * calls 004647c0 FUN_004647c0
 * calls 005af1c0 FUN_005af1c0
 * calls 00466410 FUN_00466410
 * calls 00524850 FUN_00524850
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_005a1380(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00873573;
  local_c = ExceptionList;
  puVar5 = param_1 + 2;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a1e80;
  *puVar5 = puVar5;
  param_1[3] = puVar5;
  param_1[4] = param_3;
  param_1[6] = 0;
  param_1[7] = 2;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar1 = param_1 + 0xc;
  local_4 = 0;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0xd] = param_2;
  FUN_005d7930(&LAB_00565aa0,puVar1);
  *puVar1 = &PTR_FUN_008a0478;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_008a268c;
  *puVar1 = &PTR_LAB_008a2684;
  uVar2 = FUN_005af1c0("INFRACTIONS_HEADER_GROUP");
  FUN_0058bbd0(uVar2);
  uVar2 = FUN_005af1c0("GENERIC_ICONS");
  iVar3 = FUN_00524850(param_1[4],uVar2);
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00466410();
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4[2] = iVar3;
    }
    puVar1 = (undefined4 *)param_1[3];
    *puVar1 = piVar4;
    param_1[3] = piVar4;
    piVar4[1] = (int)puVar1;
    *piVar4 = (int)puVar5;
  }
  param_1[0xe] = iVar3;
  uVar2 = FUN_005af1c0("TOTAL_INFRACTIONS_TEXT");
  iVar3 = FUN_005251e0(param_1[4],uVar2);
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00466410();
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4[2] = iVar3;
    }
    puVar1 = (undefined4 *)param_1[3];
    *puVar1 = piVar4;
    param_1[3] = piVar4;
    piVar4[1] = (int)puVar1;
    *piVar4 = (int)puVar5;
  }
  param_1[0x13] = iVar3;
  iVar3 = 0;
  puVar5 = param_1 + 0xf;
  do {
    iVar3 = iVar3 + 1;
    FUN_004647c0(local_2c,"INFRACTION_GROUP_%d",iVar3);
    uVar2 = FUN_005af1c0(local_2c);
    uVar2 = FUN_0058bbd0(uVar2);
    *puVar5 = uVar2;
    puVar5 = puVar5 + 1;
  } while (iVar3 < 4);
  ExceptionList = local_c;
  return param_1;
}

