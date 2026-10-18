/* speed.exe 0079c260 FUN_0079c260; analysis pseudocode, not buildable source.
 * calls 0078f860 FUN_0078f860
 * calls 00844710 FUN_00844710
 * calls 0083a670 FUN_0083a670
 * calls 0079bac0 FUN_0079bac0
 * calls 00460ca0 FUN_00460ca0
 * calls 00794f80 FUN_00794f80
 * calls 0083abc0 FUN_0083abc0
 * calls 0079b680 FUN_0079b680
 * calls 00460f20 FUN_00460f20
 * calls 00794e70 FUN_00794e70
 * calls 0078f4b0 FUN_0078f4b0
 */

undefined4 FUN_0079c260(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_8c [8];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 *puStack_7c;
  undefined4 *puStack_78;
  undefined4 **ppuStack_74;
  undefined4 *local_58;
  char local_54;
  undefined4 local_40 [15];
  undefined1 local_1;
  
  iVar4 = FUN_0079bac0();
  puVar3 = param_3;
  puVar2 = param_3 + 0x24;
  ppuStack_74 = (undefined4 **)&DAT_008b68e0;
  puStack_7c = (undefined4 *)0x79c28d;
  puStack_78 = puVar2;
  ppuStack_74 = (undefined4 **)FUN_0083a670();
  puStack_78 = (undefined4 *)0x79c296;
  iVar5 = FUN_0083abc0();
  ppuStack_74 = &param_3;
  puStack_78 = (undefined4 *)0x79c2b2;
  FUN_00794e70();
  puVar7 = param_3;
  if (param_3 == *(undefined4 **)(iVar4 + 4)) {
    ppuStack_74 = (undefined4 **)puVar3;
    param_3 = (undefined4 *)0xffffffff;
    puStack_78 = (undefined4 *)0x79c2d5;
    FUN_0078f4b0();
    ppuStack_74 = (undefined4 **)0x79c2df;
    FUN_0078f860();
    ppuStack_74 = &local_58;
    puStack_78 = (undefined4 *)0x79c2f0;
    FUN_0079b680();
    if (local_54 == '\0') {
      return 0;
    }
    puVar7 = local_58;
    if (iVar5 == 0x2ef67) goto LAB_0079c31b;
    *(int *)(iVar4 + 0xf4) = *(int *)(iVar4 + 0xf4) + -1;
  }
  if (iVar5 != 0x2ef67) {
    return 0;
  }
LAB_0079c31b:
  puVar1 = puVar3 + 0x13;
  ppuStack_74 = (undefined4 **)0x5e;
  puVar8 = local_40;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puStack_7c = (undefined4 *)0x79c334;
  puStack_78 = puVar1;
  iVar4 = FUN_00460f20();
  if (iVar4 == 0) {
    ppuStack_74 = (undefined4 **)0x3f;
    puStack_7c = local_40;
    uStack_80 = 0x79c362;
    puStack_78 = puVar1;
    FUN_00460ca0();
    local_1 = 0;
  }
  else {
    ppuStack_74 = (undefined4 **)((iVar4 - (int)puVar3) + -0x4c);
    puStack_7c = local_40;
    uStack_80 = 0x79c34e;
    puStack_78 = puVar1;
    FUN_00460ca0();
    auStack_8c[iVar4 - (int)puVar3] = 0;
  }
  ppuStack_74 = (undefined4 **)*puVar3;
  puStack_7c = local_40;
  puStack_78 = (undefined4 *)&LAB_0079bc10;
  uStack_80 = 0x79c37c;
  iVar4 = FUN_00794f80();
  uStack_80 = *(undefined4 *)(iVar4 + 0x3c);
  uStack_84 = 0x79c385;
  iVar4 = FUN_00844710();
  puVar7[4] = iVar4;
  if (iVar4 < 0) {
    ppuStack_74 = (undefined4 **)&DAT_008b68e8;
    puStack_7c = (undefined4 *)0x79c3a1;
    puStack_78 = puVar2;
    ppuStack_74 = (undefined4 **)FUN_0083a670();
    puStack_78 = (undefined4 *)0x79c3aa;
    uVar6 = FUN_0083abc0();
    puVar7[4] = uVar6;
  }
  if (0 < (int)puVar7[4]) {
    puVar7[4] = (int)puVar7[4] / 2;
  }
  return 1;
}

