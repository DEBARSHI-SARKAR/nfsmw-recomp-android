/* speed.exe 0047de30 FUN_0047de30; analysis pseudocode, not buildable source.
 * calls 0045f340 FUN_0045f340
 * calls 00468a90 FUN_00468a90
 * calls 0045f7c0 FUN_0045f7c0
 * calls 006519e0 FUN_006519e0
 * calls 0045ded0 FUN_0045ded0
 * calls 0064b680 FUN_0064b680
 * calls 006bd940 FUN_006bd940
 * calls 006cf0a0 FUN_006cf0a0
 * calls 0045f490 FUN_0045f490
 * calls 004700d0 FUN_004700d0
 * calls 00471a70 FUN_00471a70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0047de30(int param_1,undefined4 param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  short sVar7;
  ushort uVar8;
  int iVar9;
  float10 fVar10;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_58;
  undefined1 local_50 [76];
  
  cVar6 = FUN_0064b680();
  if (cVar6 == '\0') {
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xcc) = 0x3e4ccccd;
    iVar9 = *(int *)(param_1 + 0xa0);
    pfVar1 = (float *)(param_1 + 0x80);
    local_80 = 0;
    local_7c = 0;
    local_78 = 0x3f800000;
    local_b0 = *(float *)(param_1 + 0x80) - *(float *)(iVar9 + 0x20);
    local_ac = *(float *)(param_1 + 0x84) - *(float *)(iVar9 + 0x24);
    local_a8 = *(float *)(param_1 + 0x88) - *(float *)(iVar9 + 0x28);
    local_b4 = SQRT(local_b0 * local_b0 + local_ac * local_ac + local_a8 * local_a8);
    if (local_b4 < _DAT_0089096c) {
      local_b4 = 1.0;
    }
    sVar7 = FUN_0045ded0(local_b4,*(undefined4 *)("33S@33S@33S@" + *(int *)(param_1 + 0xd4) * 4));
    uVar8 = sVar7 << 1;
    if (uVar8 != 0) {
      if (uVar8 < 0x321) {
        uVar8 = 800;
      }
      else if (0x332c < uVar8) {
        uVar8 = 0x332c;
      }
      if (DAT_00911020 == 0) {
        *(ushort *)(*(int *)(param_1 + 0x1c) + 0xc4) = uVar8;
      }
    }
    iVar9 = *(int *)(param_1 + 0xa0);
    fVar4 = *(float *)(iVar9 + 0x20);
    uVar3 = *(undefined4 *)(iVar9 + 0x28);
    pfVar2 = (float *)(param_1 + 0x90);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar9 + 0x24);
    *(undefined4 *)(param_1 + 0x98) = uVar3;
    fVar5 = _DAT_0089096c;
    *pfVar2 = fVar4;
    fVar5 = fVar5 / local_b4;
    local_b0 = local_b0 * fVar5;
    local_ac = local_ac * fVar5;
    local_a8 = local_a8 * fVar5;
    FUN_0045f7c0(&local_a0,&local_b0,&local_80);
    local_a0 = local_a0 * _DAT_00890968;
    iVar9 = *(int *)(param_1 + 0xd4) * 4;
    local_9c = local_9c * _DAT_00890968;
    local_98 = local_98 * _DAT_00890968;
    *pfVar2 = local_a0 + *pfVar2;
    *(float *)(param_1 + 0x94) = local_9c + *(float *)(param_1 + 0x94);
    local_90 = *(float *)(&DAT_0089474c + iVar9);
    local_8c = *(float *)(&DAT_00894758 + iVar9);
    local_88 = *(float *)(&DAT_00894764 + iVar9);
    FUN_006bd940(&local_90,*(int *)(param_1 + 0xa0) + 0x50,&local_90);
    *pfVar2 = local_90 + *pfVar2;
    *(float *)(param_1 + 0x94) = local_8c + *(float *)(param_1 + 0x94);
    *(float *)(param_1 + 0x98) = local_88 + *(float *)(param_1 + 0x98);
    local_70 = *pfVar2 - *pfVar1;
    local_6c = *(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x84);
    local_68 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x88);
    local_58 = local_68;
    FUN_0045f490(&local_70,&local_70);
    FUN_006cf0a0(local_50,pfVar1,pfVar2,&local_80);
    fVar10 = (float10)FUN_0045f340(*(int *)(param_1 + 0xa0) + 0x20,pfVar1);
    if (DAT_00911020 == 0) {
      *(float *)(*(int *)(param_1 + 0x1c) + 0xb0) = (float)fVar10;
    }
    pfVar1 = (float *)(param_1 + 0xa4);
    *(float *)(param_1 + 0xb0) = *(float *)(param_1 + 0xa4) * _DAT_00894780;
    FUN_006519e0(pfVar1,param_2,0,0);
    fVar4 = (float)fVar10 + *pfVar1;
    if (fVar4 < _DAT_00890d3c) {
      fVar4 = _DAT_00890d3c;
    }
    if (((*(char *)(param_1 + 0xd0) != '\0') && (DAT_00911020 == 0)) &&
       (*(float *)(*(int *)(param_1 + 0x1c) + 0xb4) = fVar4 + *pfVar1, DAT_00911020 == 0)) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb8) = 0x40f00000;
    }
    FUN_004700d0(local_50,param_2);
    cVar6 = FUN_00468a90(*(int *)(param_1 + 0x1c) + 0x40,*(int *)(param_1 + 0xa0) + 0x20);
    if (((cVar6 != '\0') &&
        (iVar9 = FUN_00471a70(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x94)), iVar9 != 0)) &&
       (*(float *)(iVar9 + 0x2b8) < _DAT_0089096c)) {
      *(undefined4 *)(iVar9 + 0x2b8) = 0xbf800000;
    }
  }
  return;
}

