/* speed.exe 005a0ef0 FUN_005a0ef0; analysis pseudocode, not buildable source.
 * calls 0058bbd0 FUN_0058bbd0
 * calls 005251e0 FUN_005251e0
 * calls 005af1c0 FUN_005af1c0
 * calls 00466410 FUN_00466410
 * calls 005251a0 FUN_005251a0
 * calls 00524850 FUN_00524850
 * calls 005d7930 FUN_005d7930
 * calls 00514fd0 FUN_00514fd0
 */

undefined4 * __thiscall FUN_005a0ef0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087350e;
  local_c = ExceptionList;
  puVar1 = param_1 + 2;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a1e80;
  *puVar1 = puVar1;
  param_1[3] = puVar1;
  param_1[4] = param_3;
  param_1[6] = 2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar3 = param_1 + 0xc;
  local_4 = 0;
  *puVar3 = &PTR_FUN_00890970;
  param_1[0xd] = param_2;
  FUN_005d7930(&LAB_00565190,puVar3);
  *puVar3 = &PTR_FUN_008a02cc;
  puVar2 = param_1 + 0xe;
  local_4._0_1_ = 1;
  *puVar2 = &PTR_FUN_00890970;
  param_1[0xf] = param_2;
  FUN_005d7930(&LAB_00565270,puVar2);
  *puVar2 = &PTR_FUN_008a02f4;
  *puVar3 = &PTR_LAB_008a2630;
  local_4 = CONCAT31(local_4._1_3_,2);
  *param_1 = &PTR_FUN_008a261c;
  *puVar2 = &PTR_LAB_008a2618;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 1;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x66) = 0;
  uVar4 = FUN_005af1c0("RPM_fill");
  iVar5 = FUN_005251a0(param_1[4],uVar4);
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_00466410();
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6[2] = iVar5;
    }
    puVar3 = (undefined4 *)param_1[3];
    *puVar3 = piVar6;
    param_1[3] = piVar6;
    piVar6[1] = (int)puVar3;
    *piVar6 = (int)puVar1;
  }
  uVar4 = FUN_005af1c0("Drag_Turbo_Backing");
  iVar5 = FUN_005251a0(param_1[4],uVar4);
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_00466410();
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6[2] = iVar5;
    }
    puVar3 = (undefined4 *)param_1[3];
    *puVar3 = piVar6;
    param_1[3] = piVar6;
    piVar6[1] = (int)puVar3;
    *piVar6 = (int)puVar1;
  }
  uVar4 = FUN_005af1c0("Drag_Turbo_Lines");
  iVar5 = FUN_005251a0(param_1[4],uVar4);
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_00466410();
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6[2] = iVar5;
    }
    puVar3 = (undefined4 *)param_1[3];
    *puVar3 = piVar6;
    param_1[3] = piVar6;
    piVar6[1] = (int)puVar3;
    *piVar6 = (int)puVar1;
  }
  uVar4 = FUN_005af1c0("3rdPersonSpeedUnits");
  iVar5 = FUN_005251a0(param_1[4],uVar4);
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_00466410();
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6[2] = iVar5;
    }
    puVar3 = (undefined4 *)param_1[3];
    *puVar3 = piVar6;
    param_1[3] = piVar6;
    piVar6[1] = (int)puVar3;
    *piVar6 = (int)puVar1;
  }
  uVar4 = FUN_005af1c0("SPEED_BACKING");
  iVar5 = FUN_005251a0(param_1[4],uVar4);
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_00466410();
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6[2] = iVar5;
    }
    puVar3 = (undefined4 *)param_1[3];
    *puVar3 = piVar6;
    param_1[3] = piVar6;
    piVar6[1] = (int)puVar3;
    *piVar6 = (int)puVar1;
  }
  uVar4 = FUN_005af1c0(&PTR_LAB_008a25dc);
  FUN_0058bbd0(uVar4);
  uVar4 = FUN_005af1c0("TAC_Lines_7500");
  iVar5 = FUN_005251a0(param_1[4],uVar4);
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_00466410();
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6[2] = iVar5;
    }
    puVar3 = (undefined4 *)param_1[3];
    *puVar3 = piVar6;
    param_1[3] = piVar6;
    piVar6[1] = (int)puVar3;
    *piVar6 = (int)puVar1;
  }
  param_1[0x13] = iVar5;
  uVar4 = FUN_005af1c0("RPM_Redline");
  iVar5 = FUN_00524850(param_1[4],uVar4);
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_00466410();
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6[2] = iVar5;
    }
    puVar3 = (undefined4 *)param_1[3];
    *puVar3 = piVar6;
    param_1[3] = piVar6;
    piVar6[1] = (int)puVar3;
    *piVar6 = (int)puVar1;
  }
  param_1[0x12] = iVar5;
  uVar4 = FUN_005af1c0("3rdPersonNeedle");
  iVar5 = FUN_005251a0(param_1[4],uVar4);
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_00466410();
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6[2] = iVar5;
    }
    puVar3 = (undefined4 *)param_1[3];
    *puVar3 = piVar6;
    param_1[3] = piVar6;
    piVar6[1] = (int)puVar3;
    *piVar6 = (int)puVar1;
  }
  param_1[0x10] = iVar5;
  uVar4 = FUN_005af1c0("3rdPersonGear");
  iVar5 = FUN_005251e0(param_1[4],uVar4);
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_00466410();
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6[2] = iVar5;
    }
    puVar3 = (undefined4 *)param_1[3];
    *puVar3 = piVar6;
    param_1[3] = piVar6;
    piVar6[1] = (int)puVar3;
    *piVar6 = (int)puVar1;
  }
  param_1[0x14] = iVar5;
  param_1[0x1a] = *(undefined4 *)(*(int *)(param_1[0x10] + 0x2c) + 0x38);
  FUN_00514fd0(param_1[0x10],&param_2,&param_3);
  param_1[0x1b] = param_2;
  ExceptionList = local_c;
  return param_1;
}

