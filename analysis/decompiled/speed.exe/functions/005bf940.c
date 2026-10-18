/* speed.exe 005bf940 FUN_005bf940; analysis pseudocode, not buildable source.
 * calls 005b9110 FUN_005b9110
 * calls 00652ad0 _malloc
 * calls 005b2d10 FUN_005b2d10
 * calls 005bf710 FUN_005bf710
 * calls 00652b10 thunk_FUN_007c7250
 * calls 005bf360 FUN_005bf360
 * calls 005bf620 FUN_005bf620
 */

undefined4 __fastcall FUN_005bf940(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 local_14 [5];
  
  iVar2 = FUN_005bf620("Image");
  *(undefined4 *)(iVar2 + 0x24) = 1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(int *)(param_1 + 8) = iVar2;
  }
  else {
    iVar1 = *(int *)(iVar3 + 4);
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(int *)(iVar2 + 8) = iVar3;
    *(int *)(iVar3 + 4) = iVar2;
  }
  if (*(int *)(param_1 + 0xc) == iVar3) {
    *(int *)(param_1 + 0xc) = iVar2;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar3 = FUN_005bf620("CBV Image");
  FUN_005b9110(PTR_s_Top_Left_008f579c,6);
  FUN_005b9110(PTR_s_Top_Right_008f57a0,6);
  FUN_005b9110(PTR_s_Bottom_Right_008f57a4,6);
  FUN_005b9110(PTR_s_Bottom_Left_008f57a8,6);
  local_14[4] = 0xff;
  local_14[3] = 0xff;
  local_14[2] = 0xff;
  local_14[1] = 0xff;
  iVar2 = FUN_005b2d10(PTR_s_Top_Left_008f579c);
  thunk_FUN_007c7250(*(undefined4 *)(iVar2 + 0x20));
  *(undefined4 *)(iVar2 + 0x20) = 0;
  if (*(size_t *)(iVar2 + 0x18) != 0) {
    puVar4 = _malloc(*(size_t *)(iVar2 + 0x18));
    uVar6 = *(uint *)(iVar2 + 0x18);
    *(undefined4 **)(iVar2 + 0x20) = puVar4;
    puVar7 = local_14;
    for (uVar5 = uVar6 >> 2; puVar7 = puVar7 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = *puVar7;
      puVar4 = puVar4 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  iVar2 = FUN_005b2d10(PTR_s_Top_Right_008f57a0);
  thunk_FUN_007c7250(*(undefined4 *)(iVar2 + 0x20));
  *(undefined4 *)(iVar2 + 0x20) = 0;
  if (*(size_t *)(iVar2 + 0x18) != 0) {
    puVar4 = _malloc(*(size_t *)(iVar2 + 0x18));
    uVar6 = *(uint *)(iVar2 + 0x18);
    *(undefined4 **)(iVar2 + 0x20) = puVar4;
    puVar7 = local_14;
    for (uVar5 = uVar6 >> 2; puVar7 = puVar7 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = *puVar7;
      puVar4 = puVar4 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  iVar2 = FUN_005b2d10(PTR_s_Bottom_Right_008f57a4);
  thunk_FUN_007c7250(*(undefined4 *)(iVar2 + 0x20));
  *(undefined4 *)(iVar2 + 0x20) = 0;
  if (*(size_t *)(iVar2 + 0x18) != 0) {
    puVar4 = _malloc(*(size_t *)(iVar2 + 0x18));
    uVar6 = *(uint *)(iVar2 + 0x18);
    *(undefined4 **)(iVar2 + 0x20) = puVar4;
    puVar7 = local_14;
    for (uVar5 = uVar6 >> 2; puVar7 = puVar7 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = *puVar7;
      puVar4 = puVar4 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  iVar2 = FUN_005b2d10(PTR_s_Bottom_Left_008f57a8);
  thunk_FUN_007c7250(*(undefined4 *)(iVar2 + 0x20));
  *(undefined4 *)(iVar2 + 0x20) = 0;
  if (*(size_t *)(iVar2 + 0x18) != 0) {
    puVar4 = _malloc(*(size_t *)(iVar2 + 0x18));
    uVar6 = *(uint *)(iVar2 + 0x18);
    *(undefined4 **)(iVar2 + 0x20) = puVar4;
    puVar7 = local_14;
    for (uVar5 = uVar6 >> 2; puVar7 = puVar7 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = *puVar7;
      puVar4 = puVar4 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  *(undefined4 *)(iVar3 + 0x24) = 9;
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(iVar3 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar3;
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    *(int *)(param_1 + 8) = iVar3;
  }
  else {
    iVar1 = *(int *)(iVar2 + 4);
    *(int *)(iVar3 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar3;
    }
    *(int *)(iVar3 + 8) = iVar2;
    *(int *)(iVar2 + 4) = iVar3;
  }
  if (*(int *)(param_1 + 0xc) == iVar2) {
    *(int *)(param_1 + 0xc) = iVar3;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar3 = FUN_005bf620("Anim Image");
  FUN_005b9110(PTR_s_Frame_Number_008f57ac,1);
  local_14[0] = 0;
  iVar2 = FUN_005b2d10(PTR_s_Frame_Number_008f57ac);
  thunk_FUN_007c7250(*(undefined4 *)(iVar2 + 0x20));
  *(undefined4 *)(iVar2 + 0x20) = 0;
  if (*(size_t *)(iVar2 + 0x18) != 0) {
    puVar4 = _malloc(*(size_t *)(iVar2 + 0x18));
    uVar6 = *(uint *)(iVar2 + 0x18);
    *(undefined4 **)(iVar2 + 0x20) = puVar4;
    puVar7 = local_14;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  *(undefined4 *)(iVar3 + 0x24) = 10;
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(iVar3 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar3;
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    *(int *)(param_1 + 8) = iVar3;
  }
  else {
    iVar1 = *(int *)(iVar2 + 4);
    *(int *)(iVar3 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar3;
    }
    *(int *)(iVar3 + 8) = iVar2;
    *(int *)(iVar2 + 4) = iVar3;
  }
  if (*(int *)(param_1 + 0xc) == iVar2) {
    *(int *)(param_1 + 0xc) = iVar3;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar2 = FUN_005bf360("Simple Image");
  *(undefined4 *)(iVar2 + 0x24) = 0xb;
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(int *)(param_1 + 8) = iVar2;
  }
  else {
    iVar1 = *(int *)(iVar3 + 4);
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(int *)(iVar2 + 8) = iVar3;
    *(int *)(iVar3 + 4) = iVar2;
  }
  if (*(int *)(param_1 + 0xc) == iVar3) {
    *(int *)(param_1 + 0xc) = iVar2;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar2 = FUN_005bf710("MultiImage");
  *(undefined4 *)(iVar2 + 0x24) = 0xc;
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(int *)(param_1 + 8) = iVar2;
  }
  else {
    iVar1 = *(int *)(iVar3 + 4);
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(int *)(iVar2 + 8) = iVar3;
    *(int *)(iVar3 + 4) = iVar2;
  }
  if (*(int *)(param_1 + 0xc) == iVar3) {
    *(int *)(param_1 + 0xc) = iVar2;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar2 = FUN_005bf360("String");
  *(undefined4 *)(iVar2 + 0x24) = 2;
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(int *)(param_1 + 8) = iVar2;
  }
  else {
    iVar1 = *(int *)(iVar3 + 4);
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(int *)(iVar2 + 8) = iVar3;
    *(int *)(iVar3 + 4) = iVar2;
  }
  if (*(int *)(param_1 + 0xc) == iVar3) {
    *(int *)(param_1 + 0xc) = iVar2;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar2 = FUN_005bf360("Model");
  *(undefined4 *)(iVar2 + 0x24) = 3;
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(int *)(param_1 + 8) = iVar2;
  }
  else {
    iVar1 = *(int *)(iVar3 + 4);
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(int *)(iVar2 + 8) = iVar3;
    *(int *)(iVar3 + 4) = iVar2;
  }
  if (*(int *)(param_1 + 0xc) == iVar3) {
    *(int *)(param_1 + 0xc) = iVar2;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar2 = FUN_005bf360("Movie");
  *(undefined4 *)(iVar2 + 0x24) = 7;
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(int *)(param_1 + 8) = iVar2;
  }
  else {
    iVar1 = *(int *)(iVar3 + 4);
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(int *)(iVar2 + 8) = iVar3;
    *(int *)(iVar3 + 4) = iVar2;
  }
  if (*(int *)(param_1 + 0xc) == iVar3) {
    *(int *)(param_1 + 0xc) = iVar2;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar2 = FUN_005bf360("Effect");
  *(undefined4 *)(iVar2 + 0x24) = 8;
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(int *)(param_1 + 8) = iVar2;
  }
  else {
    iVar1 = *(int *)(iVar3 + 4);
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(int *)(iVar2 + 8) = iVar3;
    *(int *)(iVar3 + 4) = iVar2;
  }
  if (*(int *)(param_1 + 0xc) == iVar3) {
    *(int *)(param_1 + 0xc) = iVar2;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar2 = FUN_005bf360(&DAT_008a2ee0);
  *(undefined4 *)(iVar2 + 0x24) = 4;
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(int *)(param_1 + 8) = iVar2;
  }
  else {
    iVar1 = *(int *)(iVar3 + 4);
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(int *)(iVar2 + 8) = iVar3;
    *(int *)(iVar3 + 4) = iVar2;
  }
  if (*(int *)(param_1 + 0xc) == iVar3) {
    *(int *)(param_1 + 0xc) = iVar2;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar2 = FUN_005bf360("Group");
  *(undefined4 *)(iVar2 + 0x24) = 5;
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(int *)(param_1 + 8) = iVar2;
  }
  else {
    iVar1 = *(int *)(iVar3 + 4);
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(int *)(iVar2 + 8) = iVar3;
    *(int *)(iVar3 + 4) = iVar2;
  }
  if (*(int *)(param_1 + 0xc) == iVar3) {
    *(int *)(param_1 + 0xc) = iVar2;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar2 = FUN_005bf360("Code List");
  *(undefined4 *)(iVar2 + 0x24) = 6;
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(int *)(param_1 + 8) = iVar2;
  }
  else {
    iVar1 = *(int *)(iVar3 + 4);
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(int *)(iVar2 + 8) = iVar3;
    *(int *)(iVar3 + 4) = iVar2;
  }
  if (*(int *)(param_1 + 0xc) == iVar3) {
    *(int *)(param_1 + 0xc) = iVar2;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return 1;
}

