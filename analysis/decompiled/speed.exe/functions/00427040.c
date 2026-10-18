/* speed.exe 00427040 FUN_00427040; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 005d59f0 FUN_005d59f0
 * calls 006269b0 FUN_006269b0
 * calls 00412310 FUN_00412310
 * calls 0040a5e0 FUN_0040a5e0
 * calls 0041cf40 FUN_0041cf40
 * calls 00420400 FUN_00420400
 * calls 005c5e80 FUN_005c5e80
 * calls 00406b70 FUN_00406b70
 * calls 00423990 FUN_00423990
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00427040(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  int *piVar7;
  undefined4 uVar8;
  float *extraout_ECX;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float local_14;
  float local_10 [2];
  float fStack_8;
  
  local_44 = DAT_008a2fb8;
  local_2c = DAT_008a2fb8;
  local_14 = DAT_008a2fb8;
  local_38 = DAT_008a2fb8;
  local_48 = DAT_008a2fb4;
  local_40 = DAT_008a2fbc;
  local_30 = DAT_008a2fb4;
  local_18 = DAT_008a2fb4;
  local_3c = DAT_008a2fb4;
  local_28 = DAT_008a2fbc;
  local_10[0] = DAT_008a2fbc;
  local_34 = DAT_008a2fbc;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x48) + 100))();
  if (*(int **)(iVar4 + 0x1c) == (int *)0x0) {
    fStack_54 = 0.0;
  }
  else {
    piVar5 = (int *)(**(code **)(**(int **)(iVar4 + 0x1c) + 0x54))();
    fVar9 = (float10)(**(code **)(*piVar5 + 0x30))();
    fStack_54 = (float)fVar9;
  }
  FUN_0041cf40(fStack_54,param_2);
  if ((*(int *)(iVar4 + 0x1c) != 0) &&
     (piVar5 = (int *)FUN_005d59f0(&LAB_00403f90), piVar5 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar5 + 8))();
    *(undefined1 *)(param_1 + 0xbc) = *(undefined1 *)(iVar4 + 0x21);
  }
  fStack_24 = DAT_008a2fb4;
  fStack_20 = DAT_008a2fb8;
  fStack_1c = DAT_008a2fbc;
  FUN_00412310(&fStack_24);
  FUN_00420400(&local_3c);
  fVar9 = (float10)FUN_005c5e80(local_3c * local_3c + local_38 * local_38 + local_34 * local_34);
  iVar4 = (**(code **)(**(int **)(param_1 + 0x48) + 0x94))();
  fStack_5c = *(float *)(*(int *)(iVar4 + 8) + 8) * _DAT_0089098c;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x48) + 0xa0))();
  iVar4 = (**(code **)(*piVar5 + 8))();
  if ((*(int *)(iVar4 + 0x1c) != 0) &&
     (piVar5 = (int *)FUN_005d59f0(&LAB_00403700), piVar5 != (int *)0x0)) {
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x50) + 0x90))();
    fStack_4c = (float)fVar10;
    (**(code **)(**(int **)(param_1 + 0x48) + 0x94))();
    pfVar6 = (float *)FUN_00454810(0xec57e16b,0);
    if (pfVar6 == (float *)0x0) {
      pfVar6 = (float *)FUN_006269b0(4);
    }
    fStack_58 = *pfVar6;
    (**(code **)(**(int **)(param_1 + 0x48) + 0x94))();
    iVar4 = FUN_00454810(0xcc320329,0);
    if (iVar4 == 0) {
      FUN_006269b0(4);
    }
    iVar4 = (**(code **)(**(int **)(param_1 + 0x48) + 0xa0))();
    if (iVar4 != 0) {
      piVar7 = (int *)(**(code **)(**(int **)(param_1 + 0x48) + 0xa0))();
      cVar3 = (**(code **)(*piVar7 + 0x124))();
      if (cVar3 != '\0') {
        fStack_58 = fStack_58 * _DAT_00890e04;
      }
    }
    (**(code **)(*piVar5 + 0x74))();
    fVar12 = fStack_4c;
    fVar11 = (float10)(**(code **)(*piVar5 + 0x78))(fStack_4c);
    fVar10 = (float10)fStack_58;
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x34))(local_10);
    fStack_58 = fStack_58 - fStack_8 * _DAT_00891608;
    piVar5 = (int *)FUN_005d59f0(&LAB_00404020);
    if ((piVar5 != (int *)0x0) && (cVar3 = (**(code **)(*piVar5 + 0x20))(), cVar3 != '\0')) {
      fStack_58 = fStack_58 * _DAT_00890864;
    }
    FUN_0040a5e0(fVar12,(float)(fVar11 * fVar10),fStack_58,param_2);
    fStack_5c = *extraout_ECX;
  }
  if (fStack_5c < (float)fVar9) {
    fStack_5c = fStack_5c / (float)fVar9;
    local_3c = local_3c * fStack_5c;
    local_38 = local_38 * fStack_5c;
    local_34 = local_34 * fStack_5c;
  }
  uVar8 = (**(code **)(**(int **)(param_1 + 0x48) + 0x6c))();
  FUN_00423990(&local_30,*(undefined4 *)(param_1 + 0x50),uVar8,0x402ccccd,0x40a9999a);
  FUN_00406b70(&local_18);
  local_48 = local_18 + local_30 + fStack_24;
  local_44 = local_14 + local_2c + fStack_20;
  local_40 = local_10[0] + local_28 + fStack_1c;
  fVar12 = local_48 * local_3c + local_44 * local_38 + local_40 * local_34;
  fVar9 = (float10)FUN_005c5e80(local_3c * local_3c + local_38 * local_38 + local_34 * local_34);
  fVar9 = ((float10)_DAT_00890da8 / fVar9) * (float10)fVar12;
  fVar1 = local_34;
  fVar2 = local_3c;
  if ((float10)_DAT_00891218 < fVar9) {
    fVar1 = (float)(((float10)_DAT_00891604 - fVar9) * (float10)_DAT_00891600);
    fVar2 = _DAT_00890968;
    if ((_DAT_00890968 < fVar1) && (fVar2 = fVar1, _DAT_0089096c < fVar1)) {
      fVar2 = _DAT_0089096c;
    }
    fVar12 = fVar12 / (local_48 * local_48 + local_44 * local_44 + local_40 * local_40);
    local_14 = local_44 * fVar12;
    local_10[0] = local_40 * fVar12;
    fStack_24 = local_3c - local_48 * fVar12;
    fStack_20 = local_38 - local_14;
    fStack_1c = local_34 - local_10[0];
    local_34 = local_10[0] * fVar2;
    local_38 = fStack_20 + local_14 * fVar2;
    fVar1 = fStack_1c + local_34;
    fVar2 = fStack_24 + local_48 * fVar12 * fVar2;
  }
  local_48 = local_48 + fVar2;
  local_44 = local_44 + local_38;
  local_40 = local_40 + fVar1;
  pfVar6 = (float *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x24))();
  fStack_4c = pfVar6[2] * pfVar6[2] + pfVar6[1] * pfVar6[1] + *pfVar6 * *pfVar6;
  fVar9 = (float10)FUN_005c5e80(fStack_4c);
  fVar12 = (float)fVar9;
  fStack_4c = local_48 * local_48 + local_44 * local_44 + local_40 * local_40;
  fVar9 = (float10)FUN_005c5e80(fStack_4c);
  fVar1 = (float)fVar9;
  if ((_DAT_00890cd4 < fVar12) && (_DAT_00890cd4 < fVar1)) {
    fStack_4c = local_48 * local_48 + local_44 * local_44 + local_40 * local_40;
    fVar2 = _DAT_0089096c -
            (local_44 * pfVar6[1] + local_48 * *pfVar6 + local_40 * pfVar6[2]) / (fVar1 * fVar12);
    fVar9 = (float10)FUN_005c5e80(fStack_4c);
    fVar9 = (float10)_DAT_008915f8 -
            ((float10)fVar2 / fVar9) * (float10)fVar12 * (float10)_DAT_008915fc;
    if (fVar9 < (float10)_DAT_008915f4) {
      fVar9 = (float10)_DAT_008915f4;
    }
    if (fVar9 < (float10)fVar1) {
      fVar9 = fVar9 / (float10)fVar1;
      local_48 = (float)((float10)local_48 * fVar9);
      local_44 = (float)((float10)local_44 * fVar9);
      local_40 = (float)((float10)local_40 * fVar9);
    }
  }
  fStack_4c = local_48 * local_48 + local_44 * local_44 + local_40 * local_40;
  fVar9 = (float10)FUN_005c5e80(fStack_4c);
  fVar12 = (float)fVar9;
  fStack_4c = fVar12;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x38))();
  cVar3 = (char)((uint)fVar12 >> 0x18);
  pfVar6 = (float *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x20))();
  fStack_4c = fStack_4c + *pfVar6;
  local_48 = local_48 + pfVar6[1];
  local_44 = local_44 + pfVar6[2];
  (**(code **)(**(int **)(param_1 + 0x48) + 0x3c))(&fStack_4c);
  (**(code **)(**(int **)(param_1 + 0x48) + 0x2c))(7);
  if (_DAT_00890968 < *(float *)(param_1 + 0xb8)) {
    *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0xb8) - fStack_8;
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x20))(0);
    return;
  }
  iVar4 = (**(code **)(**(int **)(param_1 + 0x5c) + 8))();
  if (((*(char *)(iVar4 + 0x21) == '\0') && (*(char *)(param_1 + 0xbc) == '\x01')) &&
     (cVar3 == '\0')) {
    *(undefined4 *)(param_1 + 0xb8) = 0x3fc00000;
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x48) + 0x30))();
  return;
}

