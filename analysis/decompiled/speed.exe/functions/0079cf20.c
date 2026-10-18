/* speed.exe 0079cf20 FUN_0079cf20; analysis pseudocode, not buildable source.
 * calls 0079ca30 FUN_0079ca30
 * calls 00794f80 FUN_00794f80
 * calls 00460d20 FUN_00460d20
 * calls 00793340 FUN_00793340
 * calls 0056e340 FUN_0056e340
 * calls 00798630 FUN_00798630
 * calls 0083c880 FUN_0083c880
 */

undefined4 __thiscall FUN_0079cf20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_60;
  undefined4 local_5f;
  undefined4 local_5b;
  undefined4 local_57;
  undefined4 local_53;
  undefined4 local_4f;
  undefined4 local_4b;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  undefined1 local_40;
  undefined4 local_3f;
  
  if (*(int *)(param_1 + 0x1c) == -1) {
    return 0xffffffff;
  }
  iVar1 = FUN_00794f80();
  iVar2 = *(int *)(iVar1 + 0x40);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 8) != 0x7564656c)) {
    for (puVar3 = *(undefined4 **)(iVar1 + 0x30); puVar3 != (undefined4 *)(iVar1 + 0x30);
        puVar3 = (undefined4 *)*puVar3) {
      if (puVar3[2] == 0x7564656c) {
        iVar2 = puVar3[8];
        goto LAB_0079cf65;
      }
    }
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x20);
LAB_0079cf65:
    if (iVar2 != -1) {
      return 0xffffffff;
    }
  }
  iVar1 = FUN_00794f80();
  iVar2 = *(int *)(iVar1 + 0x40);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 8) != 0x756c6561)) {
    for (puVar3 = *(undefined4 **)(iVar1 + 0x30); puVar3 != (undefined4 *)(iVar1 + 0x30);
        puVar3 = (undefined4 *)*puVar3) {
      if (puVar3[2] == 0x756c6561) {
        iVar2 = puVar3[8];
        goto LAB_0079cfa5;
      }
    }
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x20);
LAB_0079cfa5:
    if (iVar2 != -1) {
      return 0xffffffff;
    }
  }
  iVar2 = FUN_0079ca30();
  if ((*(int *)(iVar2 + 8) != -1) && (iVar2 != -8)) {
    uVar10 = 1;
    uVar8 = 0;
    uVar6 = 0;
    FUN_0079ca30(0,0,1);
    FUN_00798630(uVar6,uVar8,uVar10);
  }
  local_40 = 0;
  puVar3 = &local_3f;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  FUN_0083c880(&local_40,0x40,&DAT_008b4cbc,param_1 + 0x44);
  uVar6 = FUN_0056e340(param_1 + 0x2c);
  iVar2 = FUN_00460d20(uVar6);
  if (iVar2 != 0) {
    local_5f = 0;
    local_5b = 0;
    local_57 = 0;
    local_53 = 0;
    local_4f = 0;
    local_4b = 0;
    local_47 = 0;
    local_43 = 0;
    local_60 = 0;
    local_41 = 0;
    FUN_0083c880(&local_60,0x20,"USERSET0",&DAT_00890978);
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar10 = 0;
    uVar8 = 0;
    puVar4 = &local_60;
    uVar6 = 0x73656c65;
    FUN_00794f80(0x73656c65,puVar4,0,0,0,0,0);
    FUN_00793340(uVar6,puVar4,uVar8,uVar10,uVar7,uVar9,uVar11);
    uVar8 = 0;
    puVar5 = &LAB_00796380;
    puVar4 = &local_40;
    uVar6 = 0x756c6561;
    FUN_00794f80(0x756c6561,puVar4,&LAB_00796380,param_1,param_2,param_3,0);
    uVar6 = FUN_00793340(uVar6,puVar4,puVar5,param_1,param_2,param_3,uVar8);
    return uVar6;
  }
  puVar5 = &LAB_00796380;
  puVar4 = &local_40;
  uVar6 = 0x7564656c;
  FUN_00794f80(0x7564656c,puVar4,&LAB_00796380,param_1,param_2,param_3,0);
  uVar6 = FUN_00793340(uVar6,puVar4,puVar5,param_1,param_2,param_3,iVar2);
  return uVar6;
}

