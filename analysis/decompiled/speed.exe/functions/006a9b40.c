/* speed.exe 006a9b40 FUN_006a9b40; analysis pseudocode, not buildable source.
 * calls 0068ef10 FUN_0068ef10
 * calls 006a9760 FUN_006a9760
 * calls 0069ebf0 FUN_0069ebf0
 * calls 0069eac0 FUN_0069eac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006a9b40(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint extraout_ECX;
  int *extraout_EDX;
  float10 fVar11;
  float10 fVar12;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  uint uStack_18;
  float local_10 [4];
  
  fVar1 = *(float *)(param_2 + 0x7c);
  fVar4 = *(float *)(param_2 + 0x48) * _DAT_008967e0;
  fVar5 = *(float *)(param_2 + 0x9c) * _DAT_008aabd8;
  if (fVar1 < _DAT_008933d4) {
    fVar2 = *(float *)(param_1 + 0x1b0) + _DAT_008f8d28 * *(float *)(param_2 + 0xc0);
    if (_DAT_0089096c < fVar2) {
      fVar2 = _DAT_0089096c;
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0x1b0) - _DAT_008f8d2c * *(float *)(param_2 + 0xc0);
    if (fVar2 < _DAT_008f8d24) {
      fVar2 = _DAT_008f8d24;
    }
  }
  *(float *)(param_1 + 0x1b0) = fVar2;
  local_10[0] = *(float *)(param_2 + 0x5c);
  fVar3 = _DAT_0089096c - *(float *)(param_1 + 0x108);
  local_10[1] = local_10[0];
  iVar7 = (**(code **)(**(int **)(param_1 + 0x48) + 0xcc))();
  if (iVar7 != 0) {
    local_10[0] = (*(float *)(iVar7 + 8) * _DAT_008933d4 + _DAT_0089096c) * local_10[0];
    local_10[1] = local_10[1] - local_10[1] * *(float *)(iVar7 + 8) * _DAT_008933d4;
  }
  fVar11 = (float10)FUN_0069ebf0(*(undefined4 *)(param_2 + 0xbc));
  fStack_28 = (float)fVar11;
  piVar8 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x20))();
  if (*(short *)(param_2 + 200) == 1) {
    fStack_28 = 0.1;
  }
  else if (piVar8 != (int *)0x0) {
    iVar9 = (**(code **)(*piVar8 + 0x14))();
    if ((iVar9 != 0) && (*(char *)(iVar9 + 0x12) == '\0')) {
      fStack_28 = fStack_28 + _DAT_008aacec;
    }
  }
  fStack_20 = 0.0;
  uStack_18 = 0;
  uVar10 = 0;
  piVar8 = (int *)(param_1 + 0x1b4);
  do {
    fStack_24 = 1.0;
    if ((*(float *)(param_2 + 0x4c) <= _DAT_0089119c) ||
       (*(float *)(param_2 + 0x5c) <= _DAT_008933d4)) {
LAB_006a9d51:
      *(float *)(*piVar8 + 200) = local_10[(int)uVar10 >> 1];
    }
    else {
      fVar6 = fVar4;
      if (fVar4 < _DAT_00890968) {
        fVar6 = -fVar4;
      }
      if ((_DAT_008aac84 <= fVar6) ||
         (((uVar10 < 2 || (_DAT_0089096c <= *(float *)(*(int *)(param_1 + 0xdc) + 0x70))) &&
          ((1 < uVar10 || (*(float *)(*(int *)(param_1 + 0xdc) + 0x70) <= _DAT_00890968))))))
      goto LAB_006a9d51;
      fVar6 = fVar4;
      if (fVar4 < _DAT_00890968) {
        fVar6 = -fVar4;
      }
      *(float *)(*piVar8 + 200) = fVar6 * _DAT_00890ea8;
    }
    if (uVar10 < 2) {
      *(undefined4 *)(*piVar8 + 0xcc) = 0;
    }
    else {
      fVar6 = fVar1;
      if (((_DAT_00895074 < fVar1) && (_DAT_008f8d30 < fVar5)) && (fVar4 < _DAT_008f8d34)) {
        fVar6 = fVar1 + _DAT_008933d4;
      }
      *(float *)(*piVar8 + 0xcc) = fVar6;
    }
    fVar11 = (float10)_DAT_0089096c;
    if (1 < uVar10) {
      fVar11 = (float10)FUN_0068ef10(fVar5,*(undefined4 *)(*piVar8 + 0xcc),
                                     *(undefined4 *)(param_2 + 0xbc),fStack_28,
                                     *(undefined4 *)(param_2 + 0x24));
      fVar11 = (fVar11 - (float10)_DAT_0089096c) * (float10)(fVar3 * fVar2) + (float10)_DAT_0089096c
      ;
      uVar10 = extraout_ECX;
      piVar8 = extraout_EDX;
    }
    if ((_DAT_00890968 < *(float *)(param_1 + 0xf8)) && (uVar10 < 2)) {
      fVar12 = (float10)*(float *)(param_2 + 0x8c);
      if (fVar12 < (float10)_DAT_00890968) {
        fVar12 = -fVar12;
      }
      fVar12 = fVar12 * (float10)*(float *)(param_1 + 0xf8) * (float10)_DAT_00891050 +
               (float10)_DAT_0089096c;
      fStack_24 = (float)fVar12;
      fVar11 = fVar12 * fVar11;
    }
    *(float *)(*piVar8 + 0xec) = (float)(fVar11 * (float10)*(float *)(*piVar8 + 0xec));
    *(float *)(*piVar8 + 0xe8) = fStack_24;
    fVar6 = _DAT_0089096c;
    if (iVar7 != 0) {
      iVar9 = *piVar8;
      local_10[3] = *(float *)(iVar7 + 4) * _DAT_00895074;
      local_10[2] = _DAT_0089096c + local_10[3];
      *(float *)(iVar9 + 0x11c) = local_10[2];
      local_10[3] = fVar6 - local_10[3];
      *(float *)(iVar9 + 0x120) = local_10[3];
    }
    *(float *)(*piVar8 + 0xec) =
         *(float *)(param_2 + 0xd4) * *(float *)(param_2 + 0xd0) * *(float *)(*piVar8 + 0xec);
    if (((int)*(short *)(param_2 + 0xce) & 1 << ((byte)uVar10 & 0x1f)) != 0) {
      *(undefined4 *)(*piVar8 + 0xcc) = 0;
      *(undefined4 *)(*piVar8 + 200) = 0x3f800000;
      *(float *)(*piVar8 + 0xec) = *(float *)(*piVar8 + 0xec) * _DAT_00894b58;
    }
    if (fStack_20 < *(float *)(*piVar8 + 0xf0)) {
      fStack_20 = *(float *)(*piVar8 + 0xf0);
      uStack_18 = uVar10;
    }
    uVar10 = uVar10 + 1;
    piVar8 = piVar8 + 1;
    if (3 < (int)uVar10) {
      if (((*(short *)(param_2 + 200) == 1) || (*(short *)(param_2 + 0xcc) != 2)) ||
         (*(float *)(param_2 + 0x4c) < _DAT_0089096c)) {
        *(undefined4 *)(param_1 + 0x10c) = 0;
        *(undefined4 *)(param_1 + 0x110) = 0;
        *(undefined4 *)(param_1 + 0x114) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x118) = 0;
      }
      else {
        FUN_0069eac0(*(undefined4 *)(param_2 + 0xc0),*(float *)(param_2 + 0x48) * _DAT_008967e0,
                     fStack_20,uStack_18,*(undefined4 *)(param_2 + 0x9c));
      }
      if ((*(byte *)(param_2 + 0xc4) & 1) != 0) {
        *(float *)(*(int *)(param_1 + 0x1b4) + 0xec) =
             *(float *)(*(int *)(param_1 + 0x1b4) + 0xec) * _DAT_008910f0;
        *(float *)(*(int *)(param_1 + 0x1b8) + 0xec) =
             *(float *)(*(int *)(param_1 + 0x1b8) + 0xec) * _DAT_008910f0;
        *(float *)(*(int *)(param_1 + 0x1bc) + 0xec) =
             *(float *)(*(int *)(param_1 + 0x1bc) + 0xec) * _DAT_008910f0;
        *(float *)(*(int *)(param_1 + 0x1c0) + 0xec) =
             *(float *)(*(int *)(param_1 + 0x1c0) + 0xec) * _DAT_008910f0;
      }
      FUN_006a9760(param_2);
      return;
    }
  } while( true );
}

