/* speed.exe 006b59f0 FUN_006b59f0; analysis pseudocode, not buildable source.
 * calls 006717f0 FUN_006717f0
 * calls 005c5e80 FUN_005c5e80
 * calls 005d7930 FUN_005d7930
 * calls 00674c40 FUN_00674c40
 * calls 00674d20 FUN_00674d20
 * calls 00696d90 FUN_00696d90
 * calls 006a6e30 FUN_006a6e30
 * calls 00787580 FUN_00787580
 * calls 006b57b0 FUN_006b57b0
 * calls 006a6440 FUN_006a6440
 * calls 006b5650 FUN_006b5650
 * calls 006b4cc0 FUN_006b4cc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_006b59f0(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087d7b6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006717f0(param_2,0);
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4) + 0x10;
  }
  FUN_006b57b0(iVar4);
  local_4._0_1_ = 1;
  if (*(int *)(param_2 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4) + 0x10;
  }
  FUN_006b5650(iVar4);
  local_4._0_1_ = 2;
  if (*(int *)(param_2 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar8 = param_1 + 0x16;
  *puVar8 = &PTR_FUN_00890970;
  param_1[0x17] = iVar4;
  FUN_005d7930(&LAB_00622540,puVar8);
  param_1[0x18] = &PTR___purecall_008ab0a8;
  *puVar8 = &PTR_FUN_008ab360;
  param_1[0x18] = &PTR___purecall_008ab070;
  param_1[0x19] = &PTR___purecall_00894ac8;
  local_4._0_1_ = 3;
  if (*(int *)(param_2 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar9 = param_1 + 0x1a;
  *puVar9 = &PTR_FUN_00890970;
  param_1[0x1b] = iVar4;
  FUN_005d7930(&LAB_00620c50,puVar9);
  *puVar9 = &PTR_FUN_008ab060;
  param_1[0x14] = &PTR_LAB_008ac4a0;
  puVar1 = param_1 + 0x1e;
  *param_1 = &PTR_FUN_008ac448;
  param_1[2] = &PTR_LAB_008ac43c;
  param_1[0x12] = &PTR_LAB_008ac390;
  *puVar8 = &PTR_LAB_008ac38c;
  param_1[0x18] = &PTR_LAB_008ac354;
  param_1[0x19] = &PTR_FUN_008ac350;
  *puVar9 = &PTR_LAB_008ac340;
  FUN_006a6440();
  local_4._0_1_ = 5;
  uVar5 = FUN_00674c40(param_1[0xd],0);
  FUN_00674d20(uVar5);
  puVar8 = &DAT_008a3028;
  puVar9 = param_1 + 0x24;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0x3f800000;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0x3f800000;
  param_1[0x39] = 0x3f800000;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0x3f800000;
  param_1[0x3f] = *(undefined4 *)(param_3 + 0x30);
  param_1[0x41] = *(undefined4 *)(param_3 + 0x34);
  puVar8 = param_1 + 0x44;
  param_1[0x43] = 0;
  *puVar8 = puVar8;
  param_1[0x45] = puVar8;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  puVar8 = param_1 + 0x48;
  *puVar8 = puVar8;
  param_1[0x49] = puVar8;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  local_4 = CONCAT31(local_4._1_3_,8);
  uVar5 = (**(code **)(*(int *)param_1[0xd] + 4))();
  param_1[0x42] = uVar5;
  puVar8 = param_1 + 0x1c;
  *DAT_009382f0 = puVar8;
  puVar9 = puVar8;
  param_1[0x1d] = DAT_009382f0;
  DAT_009382f0 = puVar9;
  *puVar8 = &DAT_009382ec;
  iVar4 = *(int *)*puVar1;
  *(undefined4 *)(iVar4 + 0x50) = DAT_008a2fb4;
  *(undefined4 *)(iVar4 + 0x54) = DAT_008a2fb8;
  *(undefined4 *)(iVar4 + 0x58) = DAT_008a2fbc;
  iVar4 = *(int *)*puVar1;
  *(undefined4 *)(iVar4 + 0x60) = DAT_008a2fb4;
  *(undefined4 *)(iVar4 + 100) = DAT_008a2fb8;
  *(undefined4 *)(iVar4 + 0x68) = DAT_008a2fbc;
  uVar6 = 0;
  do {
    if ((&DAT_009376c8)[uVar6] == 0) goto LAB_006b5c77;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x40);
  uVar6 = 0xffffffff;
LAB_006b5c77:
  *(char *)(*(int *)*puVar1 + 0x5e) = (char)uVar6;
  iVar4 = *(int *)*puVar1;
  *(undefined4 *)(iVar4 + 0x60) = DAT_008a2fb4;
  *(undefined4 *)(iVar4 + 100) = DAT_008a2fb8;
  *(undefined4 *)(iVar4 + 0x68) = DAT_008a2fbc;
  *(undefined4 *)(*(int *)*puVar1 + 0x2c) = *(undefined4 *)(param_3 + 0x20);
  *(undefined1 *)(*(int *)*puVar1 + 0x5c) = 0;
  iVar4 = *(int *)*puVar1;
  puVar8 = *(undefined4 **)(param_3 + 0x10);
  *(undefined4 *)(iVar4 + 0x10) = *puVar8;
  *(undefined4 *)(iVar4 + 0x14) = puVar8[1];
  *(undefined4 *)(iVar4 + 0x18) = puVar8[2];
  if (*(char *)(param_3 + 0x2c) == '\0') {
    puVar8 = &DAT_008a2fb4;
  }
  else {
    puVar8 = *(undefined4 **)(param_3 + 0x14);
  }
  iVar4 = *(int *)*puVar1;
  *(undefined4 *)(iVar4 + 0x20) = *puVar8;
  *(undefined4 *)(iVar4 + 0x24) = puVar8[1];
  *(undefined4 *)(iVar4 + 0x28) = puVar8[2];
  fVar2 = _DAT_0089096c;
  if (*(char *)(param_3 + 0x2c) == '\0') {
    puVar8 = &DAT_008a2fb4;
  }
  else {
    puVar8 = *(undefined4 **)(param_3 + 0x18);
  }
  iVar4 = *(int *)*puVar1;
  *(undefined4 *)(iVar4 + 0x30) = *puVar8;
  *(undefined4 *)(iVar4 + 0x34) = puVar8[1];
  *(undefined4 *)(iVar4 + 0x38) = puVar8[2];
  puVar8 = &DAT_008a3028;
  puVar9 = (undefined4 *)(*(int *)*puVar1 + 0x70);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  iVar4 = *(int *)*puVar1;
  puVar8 = *(undefined4 **)(param_3 + 0x24);
  *(undefined4 *)(iVar4 + 0x40) = *puVar8;
  *(undefined4 *)(iVar4 + 0x44) = puVar8[1];
  *(undefined4 *)(iVar4 + 0x48) = puVar8[2];
  *(undefined2 *)(*(int *)*puVar1 + 0x1c) = 0;
  *(undefined2 *)(*(int *)*puVar1 + 0x1e) = 0;
  *(float *)(*(int *)*puVar1 + 0x3c) = fVar2 / *(float *)(*(int *)*puVar1 + 0x2c);
  *(undefined1 *)(*(int *)*puVar1 + 0x5d) = 0;
  pfVar3 = *(float **)(param_3 + 0x28);
  iVar4 = *(int *)*puVar1;
  fVar10 = (float10)FUN_005c5e80(pfVar3[2] * pfVar3[2] + pfVar3[1] * pfVar3[1] + *pfVar3 * *pfVar3);
  *(float *)(iVar4 + 0x6c) = (float)fVar10;
  FUN_00696d90(*(undefined4 *)(param_3 + 0x1c));
  pfVar3 = *(float **)(param_3 + 0x28);
  iVar4 = *(int *)*puVar1;
  fVar10 = (float10)FUN_005c5e80(pfVar3[2] * pfVar3[2] + pfVar3[1] * pfVar3[1] + *pfVar3 * *pfVar3);
  if ((*(byte *)(iVar4 + 0x5e) < 0x40) &&
     (puVar7 = &DAT_00935a48 + (uint)*(byte *)(iVar4 + 0x5e) * 0x6c, puVar7 != (undefined *)0x0)) {
    FUN_006b4cc0(param_1,*(undefined4 *)(param_3 + 0x10),(float)fVar10);
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  iVar4 = param_1[0x21];
  param_1[0x40] = puVar7;
  param_1[0x3c] = *(undefined4 *)(iVar4 + 0x90);
  param_1[0x3d] = *(undefined4 *)(iVar4 + 0x94);
  param_1[0x3e] = *(undefined4 *)(iVar4 + 0x98);
  fVar2 = **(float **)(param_3 + 0x28);
  if (**(float **)(param_3 + 0x28) < _DAT_00890d60) {
    fVar2 = _DAT_00890d60;
  }
  param_1[0x38] = fVar2;
  fVar2 = *(float *)(*(int *)(param_3 + 0x28) + 4);
  if (fVar2 < _DAT_00890d60) {
    fVar2 = _DAT_00890d60;
  }
  param_1[0x39] = fVar2;
  fVar2 = *(float *)(*(int *)(param_3 + 0x28) + 8);
  if (fVar2 < _DAT_00890d60) {
    fVar2 = _DAT_00890d60;
  }
  param_1[0x3a] = fVar2;
  if (*(char *)(param_3 + 0x2c) == '\0') {
    *(undefined1 *)(*(int *)*puVar1 + 0x5d) = 1;
  }
  iVar4 = param_1[0x21];
  if (*(float *)(iVar4 + 0x18) * *(float *)(iVar4 + 0x18) +
      *(float *)(iVar4 + 0x14) * *(float *)(iVar4 + 0x14) +
      *(float *)(iVar4 + 0x10) * *(float *)(iVar4 + 0x10) <= _DAT_00890968) {
    *(byte *)(*(int *)*puVar1 + 0x1c) = *(byte *)(*(int *)*puVar1 + 0x1c) & 0xdf;
  }
  else {
    *(byte *)(*(int *)*puVar1 + 0x1c) = *(byte *)(*(int *)*puVar1 + 0x1c) | 0x20;
  }
  iVar4 = param_1[0x21];
  if (*(float *)(iVar4 + 0x68) * *(float *)(iVar4 + 0x68) +
      *(float *)(iVar4 + 100) * *(float *)(iVar4 + 100) +
      *(float *)(iVar4 + 0x60) * *(float *)(iVar4 + 0x60) <= _DAT_00890968) {
    *(byte *)(*(int *)*puVar1 + 0x1d) = *(byte *)(*(int *)*puVar1 + 0x1d) & 0xf7;
  }
  else {
    *(byte *)(*(int *)*puVar1 + 0x1d) = *(byte *)(*(int *)*puVar1 + 0x1d) | 8;
  }
  if (param_1[0x42] == 1) {
    *(byte *)(*(int *)*puVar1 + 0x1c) = *(byte *)(*(int *)*puVar1 + 0x1c) | 0x40;
  }
  uVar5 = (**(code **)(*(int *)param_1[0xd] + 0x70))();
  uVar5 = FUN_00787580(uVar5,1,0x1c,param_1[0x41]);
  param_1[0x3b] = uVar5;
  FUN_006a6e30();
  (&DAT_009376c8)[*(byte *)(*(int *)*puVar1 + 0x5e)] = param_1;
  DAT_009377c8 = DAT_009377c8 + 1;
  *(byte *)(*(int *)*puVar1 + 0x1d) = *(byte *)(*(int *)*puVar1 + 0x1d) | 2;
  ExceptionList = pvStack_c;
  return param_1;
}

