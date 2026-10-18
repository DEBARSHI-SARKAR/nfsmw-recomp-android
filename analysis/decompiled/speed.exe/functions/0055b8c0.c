/* speed.exe 0055b8c0 FUN_0055b8c0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 005487a0 FUN_005487a0
 * calls 0051fb60 FUN_0051fb60
 * calls 005b8550 FUN_005b8550
 * calls 00548810 FUN_00548810
 * calls 00573dd0 FUN_00573dd0
 * calls 00546400 FUN_00546400
 * calls 005488b0 FUN_005488b0
 * calls 005a5ea0 FUN_005a5ea0
 * calls 00722840 FUN_00722840
 * calls 00530f40 FUN_00530f40
 * calls 00514cc0 FUN_00514cc0
 * calls 005486a0 FUN_005486a0
 * calls 00651550 FUN_00651550
 * calls 005d59f0 FUN_005d59f0
 * calls 0055a280 FUN_0055a280
 * calls 00514fd0 FUN_00514fd0
 * calls 00515520 FUN_00515520
 * calls 005faa20 FUN_005faa20
 * calls 00516af0 FUN_00516af0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0055b8c0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  void *local_1c;
  undefined4 local_18;
  float fStack_14;
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870ea4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00573dd0();
  if ((((*(int *)(param_1 + 0x10) != 0) &&
       (iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 != 0)) &&
      (iVar3 = FUN_005b8550(0x5bc), iVar3 != 0)) &&
     ((*(int *)(iVar3 + 0x18) == 1 && (*(int *)(iVar3 + 0x24) != 0x5bc)))) {
    *(undefined4 *)(iVar3 + 0x24) = 0x5bc;
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x2400000;
  }
  if (((*(int *)(param_1 + 0x10) != 0) &&
      (iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 != 0)) &&
     ((iVar3 = FUN_005b8550(0x682), iVar3 != 0 &&
      ((*(int *)(iVar3 + 0x18) == 1 && (*(int *)(iVar3 + 0x24) != 0x682)))))) {
    *(undefined4 *)(iVar3 + 0x24) = 0x682;
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x2400000;
  }
  if ((((*(int *)(param_1 + 0x10) != 0) &&
       (iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 != 0)) &&
      (iVar3 = FUN_005b8550(0xfbb0b78e), iVar3 != 0)) &&
     ((*(int *)(iVar3 + 0x18) == 1 && (*(int *)(iVar3 + 0x24) != -0x44f4872)))) {
    *(undefined4 *)(iVar3 + 0x24) = 0xfbb0b78e;
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x2400000;
  }
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 == 0)) ||
     (iVar3 = FUN_005b8550(0xf365871), iVar3 == 0)) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x140) = iVar3;
  FUN_00514fd0(iVar3,param_1 + 0x144,param_1 + 0x148);
  FUN_00515520(*(undefined4 *)(param_1 + 0x140),param_1 + 0x14c,param_1 + 0x150);
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 == 0)) ||
     (iVar3 = FUN_005b8550(0xf156f6c5), iVar3 == 0)) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x124) = iVar3;
  bVar1 = *(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
  uVar6 = 0;
  if (bVar1 < 0xd) {
    if (8 < bVar1) {
      uVar6 = 2;
    }
  }
  else {
    uVar6 = 1;
  }
  local_1c = _malloc(0xd0);
  local_4 = 0;
  if (local_1c == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0055a280();
  }
  *(undefined4 *)(param_1 + 0x160) = uVar4;
  iVar3 = *(int *)(DAT_0091e000 + 0x1968);
  local_4 = 0xffffffff;
  FUN_00546400(iVar3,*(undefined4 *)(param_1 + 0x140),0,uVar6);
  iVar2 = *(int *)(param_1 + 0x160);
  *(undefined4 *)(iVar2 + 0x40) = 0x3f000000;
  *(undefined4 *)(iVar2 + 0x6c) = 0x3f000000;
  iVar2 = *(int *)(param_1 + 0x160);
  *(undefined4 *)(iVar2 + 0x98) = 0x3f000000;
  *(undefined4 *)(iVar2 + 0xc4) = 0x3f000000;
  iVar2 = *(int *)(param_1 + 0x160);
  *(undefined1 *)(iVar2 + 0xcc) = 0;
  local_1c = (void *)0x3f800000;
  local_18 = 0x3f800000;
  FUN_00651550(&local_1c);
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar2 + 0x28);
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar2 + 0x24);
  *(undefined2 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar2 + 0x50);
  *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined2 *)(iVar2 + 0x70) = 0;
  iVar2 = *(int *)(param_1 + 0x160);
  *(undefined1 *)(iVar2 + 0xcc) = 0;
  local_1c = (void *)0x3f000000;
  local_18 = 0x3f000000;
  FUN_00651550(&local_1c);
  *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(iVar2 + 0x7c);
  *(undefined4 *)(iVar2 + 0x78) = *(undefined4 *)(iVar2 + 0x80);
  *(undefined2 *)(iVar2 + 0x9c) = 0;
  *(undefined4 *)(iVar2 + 0xa0) = *(undefined4 *)(iVar2 + 0xa8);
  *(undefined4 *)(iVar2 + 0xa4) = *(undefined4 *)(iVar2 + 0xac);
  *(undefined2 *)(iVar2 + 200) = 0;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x16c) = 0xffffffff;
  }
  else {
    uVar6 = FUN_005faa20();
    *(undefined4 *)(param_1 + 0x16c) = uVar6;
  }
  uVar6 = FUN_00722840(DAT_00904fb8);
  *(undefined4 *)(param_1 + 0x13c) = uVar6;
  FUN_00530f40();
  (**(code **)(*(int *)*DAT_0092d87c + 4))();
  piVar5 = (int *)FUN_005d59f0(&LAB_004040e0);
  if (piVar5 != (int *)0x0) {
    piVar5 = (int *)(**(code **)(*piVar5 + 0xac))();
    iVar3 = (**(code **)(*piVar5 + 0xa0))();
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x164) = 3;
    }
  }
  if (*(int *)(param_1 + 0x164) != 3) {
    *(uint *)(param_1 + 0x164) = (uint)*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0x46);
  }
  iVar3 = *(int *)(param_1 + 0x164);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0x168) = (uint)*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0x44);
    FUN_00514cc0(*(undefined4 *)(param_1 + 0x124));
    FUN_005486a0(10);
    FUN_005486a0(8);
    FUN_005486a0(9);
  }
  else if (iVar3 == 1) {
    *(uint *)(param_1 + 0x168) = (uint)*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0x44);
    FUN_005487a0();
  }
  else if (iVar3 == 3) {
    *(uint *)(param_1 + 0x168) = (uint)*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0x45);
    FUN_00548810();
  }
  FUN_0051fb60();
  iVar3 = *(int *)(param_1 + 0x168);
  fStack_14 = _DAT_00890d3c;
  if (((iVar3 != 1) && (fStack_14 = _DAT_0089b1f0, iVar3 != 2)) &&
     (fStack_14 = _DAT_0089096c, iVar3 == 3)) {
    fStack_14 = _DAT_00890da4;
  }
  fStack_14 = _DAT_0089096c / fStack_14;
  iVar3 = *(int *)(param_1 + 0x160);
  fStack_10 = fStack_14;
  FUN_00651550(&fStack_14);
  *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 0x24);
  *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar3 + 0x28);
  *(undefined2 *)(iVar3 + 0x44) = 0;
  *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(iVar3 + 0x50);
  *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined2 *)(iVar3 + 0x70) = 0;
  FUN_005a5ea0(0);
  FUN_005488b0();
  ExceptionList = pvStack_c;
  return;
}

