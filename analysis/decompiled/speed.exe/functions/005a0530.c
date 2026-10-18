/* speed.exe 005a0530 FUN_005a0530; analysis pseudocode, not buildable source.
 * calls 0058bbd0 FUN_0058bbd0
 * calls 005af1c0 FUN_005af1c0
 * calls 00466410 FUN_00466410
 * calls 005251a0 FUN_005251a0
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_005a0530(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00873433;
  local_c = ExceptionList;
  puVar1 = param_1 + 2;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a1e80;
  *puVar1 = puVar1;
  param_1[3] = puVar1;
  param_1[4] = param_3;
  param_1[6] = 0x400000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar2 = param_1 + 0xc;
  local_4 = 0;
  *puVar2 = &PTR_FUN_00890970;
  param_1[0xd] = param_2;
  FUN_005d7930(&LAB_005659c0,puVar2);
  *puVar2 = &PTR_FUN_008a043c;
  *param_1 = &PTR_FUN_008a2524;
  *puVar2 = &PTR_LAB_008a24f8;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x14] = 0;
  uVar3 = FUN_005af1c0("Engage_Mechanic");
  uVar3 = FUN_0058bbd0(uVar3);
  param_1[0xe] = uVar3;
  uVar3 = FUN_005af1c0("EventIcon");
  iVar4 = FUN_005251a0(param_1[4],uVar3);
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00466410();
    piVar6 = (int *)0x0;
    if (piVar5 != (int *)0x0) {
      piVar5[2] = iVar4;
      piVar6 = piVar5;
    }
    puVar2 = (undefined4 *)param_1[3];
    *puVar2 = piVar6;
    param_1[3] = piVar6;
    piVar6[1] = (int)puVar2;
    *piVar6 = (int)puVar1;
  }
  param_1[0xf] = iVar4;
  uVar3 = FUN_0058bbd0(0xda8141d4);
  param_1[0x10] = uVar3;
  ExceptionList = local_c;
  return param_1;
}

