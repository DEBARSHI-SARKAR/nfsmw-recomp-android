/* speed.exe 00588db0 FUN_00588db0; analysis pseudocode, not buildable source.
 * calls 00524850 FUN_00524850
 * calls 00573e90 FUN_00573e90
 * calls 004647c0 FUN_004647c0
 * calls 00586290 FUN_00586290
 * calls 00515d70 FUN_00515d70
 * calls 005af1c0 FUN_005af1c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00588db0(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 local_4c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872338;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00586290(param_2);
  uVar3 = param_1[4];
  local_4 = 0;
  *param_1 = &PTR_FUN_008a137c;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0x1f;
  param_1[0x14] = 0xc;
  *(undefined2 *)(param_1 + 0x15) = 0x7bc;
  *(undefined2 *)((int)param_1 + 0x56) = 0x7df;
  uVar2 = FUN_005af1c0("DATA_1");
  uVar2 = FUN_00524850(uVar3,uVar2);
  uVar3 = param_1[4];
  param_1[0xb] = uVar2;
  uVar2 = FUN_005af1c0("DATA_2");
  uVar2 = FUN_00524850(uVar3,uVar2);
  uVar3 = param_1[4];
  param_1[0xc] = uVar2;
  uVar2 = FUN_005af1c0("DATA_3");
  uVar3 = FUN_00524850(uVar3,uVar2);
  param_1[0xd] = uVar3;
  param_1[0x12] = 0;
  param_1[0xf] = param_1[0xb];
  param_1[0xe] = param_1[0xc];
  param_1[0x10] = uVar3;
  if (param_2 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(param_2 + 8);
  }
  param_1[0x11] = piVar5;
  if (piVar5 != (int *)0x0) {
    param_1[0x13] = piVar5[0x13];
    param_1[0x14] = piVar5[0x14];
    *(short *)(param_1 + 0x15) = (short)piVar5[0x15];
    uVar1 = (**(code **)(*piVar5 + 0x3c))();
    *(undefined2 *)((int)param_1 + 0x56) = uVar1;
    uVar3 = FUN_00524850(param_1[4],0x42adb44c);
    uVar2 = (**(code **)(*(int *)param_1[0x11] + 0x38))();
    FUN_00515d70(uVar3,uVar2);
  }
  iVar4 = 0;
  puVar6 = param_1 + 0x16;
  do {
    iVar4 = iVar4 + 1;
    FUN_004647c0(local_4c,"ScrollBar_Arrow_%d",iVar4);
    uVar3 = param_1[4];
    uVar2 = FUN_005af1c0(local_4c);
    uVar3 = FUN_00524850(uVar3,uVar2);
    *puVar6 = uVar3;
    puVar6 = puVar6 + 1;
  } while (iVar4 < 6);
  FUN_00573e90(0xffffffff);
  _DAT_0091d3cc = param_1;
  ExceptionList = pvStack_c;
  return param_1;
}

