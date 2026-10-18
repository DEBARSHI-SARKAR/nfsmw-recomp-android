/* speed.exe 007b09f0 FUN_007b09f0; analysis pseudocode, not buildable source.
 * calls 007a5c80 FUN_007a5c80
 * calls 00515520 FUN_00515520
 * calls 00573d10 FUN_00573d10
 * calls 007bb150 FUN_007bb150
 * calls 00573d80 FUN_00573d80
 * calls 00652ad0 _malloc
 * calls 00589150 FUN_00589150
 * calls 00573cc0 FUN_00573cc0
 * calls 007a5c40 FUN_007a5c40
 * calls 00514fd0 FUN_00514fd0
 * calls 00573e70 FUN_00573e70
 */

void __thiscall FUN_007b09f0(int param_1,float param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008830b4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar3 = _malloc(0x58);
  local_4 = 0;
  local_18 = piVar3;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_00589150(1);
    *piVar3 = (int)&PTR_FUN_008b7520;
    piVar3[0x15] = (int)param_2;
  }
  local_4 = 0xffffffff;
  iVar4 = FUN_00573cc0("PART_NAME_");
  piVar3[0xb] = iVar4;
  iVar4 = FUN_00573cc0("PRICE_");
  piVar3[0xc] = iVar4;
  iVar4 = FUN_00573d80(*(undefined4 *)(param_1 + 0xbc));
  piVar3[9] = iVar4;
  iVar4 = FUN_00573d10("CHECK_ICON_");
  piVar3[0x13] = iVar4;
  iVar4 = FUN_00573cc0("TRADE_IN_");
  piVar3[0x14] = iVar4;
  piVar3[3] = *(int *)(param_1 + 0xd4);
  piVar3[4] = *(int *)(param_1 + 0xd8);
  piVar3[0xd] = *(int *)(param_1 + 0xe4);
  piVar3[0xe] = *(int *)(param_1 + 0xe8);
  piVar3[0xf] = *(int *)(param_1 + 0xec);
  piVar3[0x10] = *(int *)(param_1 + 0xf0);
  piVar3[0x11] = *(int *)(param_1 + 0xf4);
  piVar3[0x12] = *(int *)(param_1 + 0xf8);
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  piVar1 = piVar3 + 1;
  *puVar2 = piVar1;
  *(int **)(param_1 + 0x30) = piVar1;
  *piVar1 = param_1 + 0x2c;
  piVar3[2] = (int)puVar2;
  *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
  FUN_00573e70();
  (**(code **)(*piVar3 + 0x14))();
  (**(code **)(*piVar3 + 0xc))();
  (**(code **)(*piVar3 + 0x10))();
  FUN_00514fd0(piVar3[0xc],&local_18,local_14);
  FUN_00515520(piVar3[0xc],&param_2,local_10);
  piVar3[5] = (int)ABS((float)piVar3[3] - (param_2 + (float)local_18));
  ExceptionList = local_c;
  return;
}

