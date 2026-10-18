/* speed.exe 00746750 FUN_00746750; analysis pseudocode, not buildable source.
 * calls 00738f50 FUN_00738f50
 * calls 00452940 FUN_00452940
 * calls 007457d0 FUN_007457d0
 * calls 005c5e80 FUN_005c5e80
 * calls 0045dbd0 FUN_0045dbd0
 * calls 006bdd20 FUN_006bdd20
 * calls 006bdc60 FUN_006bdc60
 * calls 00401ae0 FUN_00401ae0
 * calls 006269b0 FUN_006269b0
 * calls 00745580 FUN_00745580
 * calls 00454810 FUN_00454810
 * calls 007c4b80 FUN_007c4b80
 * calls 006bd920 FUN_006bd920
 * calls 00744c00 FUN_00744c00
 * calls 005cb5d0 FUN_005cb5d0
 * calls 007267a0 FUN_007267a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00746750(int param_1,float param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  bool bVar17;
  bool bVar18;
  float10 fVar19;
  float10 fVar20;
  float fVar21;
  undefined4 uVar22;
  float *local_6c;
  int local_68;
  float *local_64;
  uint local_60;
  float local_5c;
  float local_54;
  float local_44;
  float local_3c;
  float local_38;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  *(undefined4 *)(param_1 + 0x378) = DAT_008a2fb4;
  *(undefined4 *)(param_1 + 0x37c) = DAT_008a2fb8;
  *(undefined4 *)(param_1 + 0x380) = DAT_008a2fbc;
  fVar21 = _DAT_008f2260 * _DAT_008b2f58;
  local_3c = 0.0;
  local_44 = 0.0;
  local_38 = 0.0;
  bVar9 = false;
  bVar8 = false;
  if (((DAT_009885c8 != 0) || (cVar10 = FUN_00744c00(), cVar10 != '\0')) ||
     ((*(uint *)(param_1 + 0x3c8) <= *(uint *)(param_1 + 0x3cc) &&
      ((*(uint *)(param_1 + 0x3cc) != 0 && (*(float *)(param_1 + 0x3d0) <= fVar21)))))) {
    bVar8 = true;
    pfVar11 = (float *)FUN_00454810(0x44e52948,0);
    if (pfVar11 == (float *)0x0) {
      pfVar11 = (float *)FUN_006269b0(4);
    }
    fVar21 = *pfVar11;
    if ((_DAT_00890968 < *(float *)(param_4 + 0x88)) && (_DAT_00890968 < fVar21)) {
      fVar19 = (float10)FUN_0045dbd0(*(float *)(param_1 + 0x3a0) + _DAT_008b4bdc);
      if (fVar19 < (float10)_DAT_00890968) {
        fVar19 = -fVar19;
      }
      local_3c = (float)(fVar19 * (float10)*(float *)(param_4 + 0x88) * (float10)fVar21 *
                         (float10)fVar21 * (float10)_DAT_008b4bd8);
      fVar19 = (float10)FUN_0045dbd0(*(float *)(param_1 + 0x3a0) * _DAT_008b4bd4);
      if (fVar19 < (float10)_DAT_00890968) {
        fVar19 = -fVar19;
      }
      local_44 = (float)(fVar19 * (float10)*(float *)(param_4 + 0x88) * (float10)fVar21 *
                         (float10)fVar21 * (float10)_DAT_008b4bd0);
      fVar19 = (float10)FUN_0045dbd0((*(float *)(param_1 + 0x3a0) + _DAT_008933d4) * _DAT_008b4bd4);
      if (fVar19 < (float10)_DAT_00890968) {
        fVar19 = -fVar19;
      }
      bVar9 = true;
      local_38 = (float)(fVar19 * (float10)*(float *)(param_4 + 0x88) * (float10)fVar21 *
                         (float10)fVar21 * (float10)_DAT_008b4bcc);
    }
  }
  *(undefined4 *)(param_1 + 900) = DAT_008a2fb4;
  *(undefined4 *)(param_1 + 0x388) = DAT_008a2fb8;
  *(undefined4 *)(param_1 + 0x38c) = DAT_008a2fbc;
  FUN_00744c00();
  if ((DAT_009885c8 == 0) && (cVar10 = FUN_00744c00(), cVar10 == '\0')) {
    if ((*(uint *)(param_1 + 0x3cc) < *(uint *)(param_1 + 0x3c8)) ||
       (*(uint *)(param_1 + 0x3cc) == 0)) {
      bVar7 = false;
      goto LAB_00746983;
    }
    bVar7 = false;
    if (_DAT_008b2f7c < *(float *)(param_1 + 0x3d0)) goto LAB_00746983;
  }
  bVar7 = true;
LAB_00746983:
  iVar1 = *(int *)(param_1 + 0x44);
  local_64 = (float *)(param_1 + 0x90);
  local_68 = param_1 + 0x3dc;
  local_6c = (float *)(param_4 + 0x34);
  local_60 = 0;
  puVar16 = (undefined4 *)(param_1 + 0x138);
  do {
    uVar12 = local_60 >> 1;
    uVar13 = 1 << ((byte)local_60 & 0x1f);
    bVar17 = (uVar13 & *(uint *)(param_4 + 0x4c)) != 0;
    bVar18 = (*(uint *)(param_4 + 0x8c) & uVar13) != 0;
    iVar2 = *(int *)(local_68 + -0x368);
    puVar16[-1] = 0;
    *puVar16 = 0;
    puVar16[1] = 0;
    puVar16[2] = 0;
    puVar16[4] = 0;
    puVar16[5] = 0;
    puVar16[6] = 0;
    puVar16[7] = 0;
    puVar16[9] = 0;
    puVar16[10] = 0;
    puVar16[0xb] = 0;
    puVar16[0xc] = 0;
    puVar16[-2] = 0x3f800000;
    puVar16[3] = 0x3f800000;
    puVar16[8] = 0x3f800000;
    puVar16[0xd] = 0x3f800000;
    puVar16[0x3f] = 0;
    puVar16[0x40] = 0;
    puVar16[0x41] = 0;
    puVar16[0x42] = 0;
    puVar16[0x44] = 0;
    puVar16[0x45] = 0;
    puVar16[0x46] = 0;
    puVar16[0x47] = 0;
    puVar16[0x49] = 0;
    puVar16[0x4a] = 0;
    puVar16[0x4b] = 0;
    puVar16[0x4c] = 0;
    puVar16[0x3e] = 0x3f800000;
    puVar16[0x43] = 0x3f800000;
    puVar16[0x48] = 0x3f800000;
    puVar16[0x4d] = 0x3f800000;
    fVar21 = (local_6c[-8] / *(float *)(local_68 + -0x30c)) * param_2;
    if (*(float *)(param_1 + 0x3b8) <= fVar21) {
      fVar21 = *(float *)(param_1 + 0x3b8);
    }
    if (fVar21 < -*(float *)(param_1 + 0x3b8)) {
      fVar21 = -*(float *)(param_1 + 0x3b8);
    }
    fVar21 = fVar21 + *(float *)(iVar2 + 0x80);
    bVar6 = fVar21 < _DAT_008b2b8c;
    *(float *)(iVar2 + 0x80) = fVar21;
    if (bVar6) {
      if (fVar21 < _DAT_008b4bc8 != (fVar21 == _DAT_008b4bc8)) {
        *(float *)(iVar2 + 0x80) = fVar21 + _DAT_008b2b8c;
      }
    }
    else {
      *(float *)(iVar2 + 0x80) = fVar21 - _DAT_008b2b8c;
    }
    uVar14 = FUN_007c4b80();
    FUN_006bdc60(puVar16 + -2,puVar16 + -2,uVar14);
    if (local_60 < 2) {
      uVar14 = FUN_007c4b80();
      FUN_006bdd20(puVar16 + -2,puVar16 + -2,uVar14);
      uVar14 = FUN_007c4b80();
      FUN_006bdd20(puVar16 + 0x3e,puVar16 + 0x3e,uVar14);
    }
    local_5c = (*(float *)(local_68 + -0x30c) - *(float *)(local_68 + -0x2fc)) + local_6c[-0xc];
    if ((bVar8) && (bVar18)) {
      local_5c = local_5c - _DAT_008af9f4;
      fVar21 = local_64[1];
      if (fVar21 < _DAT_00890968) {
        fVar21 = -fVar21;
      }
      fVar19 = (float10)FUN_005cb5d0(0x3df5c28f,fVar21);
      local_54 = (float)(fVar19 * (float10)_DAT_0089120c);
      if (local_64[1] < _DAT_00890968) {
        local_54 = local_54 * _DAT_00890da8;
      }
      fVar21 = *local_64;
      if (fVar21 < _DAT_00890968) {
        fVar21 = -fVar21;
      }
      fVar19 = (float10)FUN_005cb5d0(0x3df5c28f,fVar21);
      fVar19 = fVar19 * (float10)_DAT_008b2b98;
      if (*local_64 < _DAT_00890968) {
        fVar19 = fVar19 * (float10)_DAT_00890da8;
      }
      *(float *)(param_1 + 0x378) = local_54 + *(float *)(param_1 + 0x378);
      *(float *)(param_1 + 0x37c) = (float)(fVar19 + (float10)*(float *)(param_1 + 0x37c));
      *(float *)(param_1 + 0x380) = *(float *)(param_1 + 0x380) - _DAT_00890eac;
    }
    if (((1 < local_60) && (bVar17)) && (bVar9)) {
      if (*local_6c <= _DAT_00890968) {
        uVar22 = 0x41a00000;
        uVar14 = 0x40a00000;
        fVar21 = -*local_6c;
      }
      else {
        uVar22 = 0x40a00000;
        fVar21 = *local_6c;
        uVar14 = 0x3f800000;
      }
      fVar19 = (float10)FUN_00401ae0(fVar21,uVar14,uVar22);
      *(float *)(param_1 + 0x388) = (float)((float10)local_44 * fVar19);
      fVar20 = (float10)fsin((float10)local_44 * fVar19 * (float10)_DAT_0089096c);
      fVar20 = fVar20 * (float10)*(float *)(param_1 + 0x90);
      if (fVar20 <= (float10)*(float *)(param_1 + 0x38c)) {
        fVar20 = (float10)*(float *)(param_1 + 0x38c);
      }
      *(float *)(param_1 + 0x38c) = (float)fVar20;
      *(float *)(param_1 + 900) = (float)((float10)local_3c * fVar19);
      fVar19 = (float10)FUN_0045dbd0((float)(fVar19 * (float10)local_38));
      local_5c = (float)(((float10)*(float *)(param_1 + 0x90) - (float10)*local_64) * fVar19 +
                        (float10)local_5c);
    }
    fVar21 = local_64[2];
    fVar3 = *local_64;
    fVar4 = local_64[1];
    puVar16[0x4a] = fVar3;
    puVar16[0x4b] = fVar4;
    puVar16[10] = fVar3;
    puVar16[0x4c] = (float)puVar16[0x4c] + fVar21 + local_5c;
    fVar21 = local_64[2];
    puVar16[0xb] = fVar4;
    puVar16[0xc] = (float)puVar16[0xc] + fVar21 + local_5c;
    if (bVar7) {
      *(bool *)(local_60 + 0x17cc + iVar1) = (uVar13 & *(uint *)(param_4 + 0x8c)) != 0;
    }
    FUN_006bd920(iVar2 + 0x60,param_1 + 0x330,puVar16 + 10);
    FUN_00738f50(*(undefined4 *)(param_1 + 100),*(uint *)(param_1 + 0x3f8) >> 3 & 0xffffff01,bVar18)
    ;
    if ((bVar17) && (bVar7)) {
      fVar21 = local_6c[-4] * _DAT_008b2e60;
      if (fVar21 < _DAT_00890968) {
        fVar21 = -fVar21;
      }
      fVar3 = fVar21 - _DAT_00890cd4;
      if (fVar21 - _DAT_00890cd4 <= _DAT_00890968) {
        fVar3 = _DAT_00890968;
      }
      fVar21 = *local_6c * _DAT_00895074;
      if (fVar21 < _DAT_00890968) {
        fVar21 = -fVar21;
      }
      fVar4 = fVar21 - _DAT_00890cd4;
      if (fVar21 - _DAT_00890cd4 <= _DAT_00890968) {
        fVar4 = _DAT_00890968;
      }
      fVar19 = (float10)FUN_005c5e80(fVar3 * fVar3 + fVar4 * fVar4);
      if (fVar19 <= (float10)_DAT_00890968) {
        FUN_007267a0();
      }
      else {
        iVar5 = *(int *)(param_1 + 0x1c);
        local_20 = *(float *)(iVar2 + 0x60) - *(float *)(iVar2 + 0x10);
        local_1c = *(float *)(iVar2 + 100) - *(float *)(iVar2 + 0x14);
        local_18 = *(float *)(iVar2 + 0x68) - *(float *)(iVar2 + 0x18);
        local_14 = *(float *)(iVar2 + 0x6c) - *(float *)(iVar2 + 0x1c);
        uVar13 = FUN_00452940();
        if (local_60 < uVar13) {
          puVar15 = (undefined4 *)((-0x300 - param_1) + iVar5 + local_68);
        }
        else {
          puVar15 = (undefined4 *)FUN_006269b0(4);
        }
        FUN_00745580((float)fVar19,&local_20,puVar16 + -2,param_1 + 0x330,*puVar15);
      }
      iVar5 = *(int *)(param_1 + 0x1c);
      uVar13 = FUN_00452940();
      if (uVar12 < uVar13) {
        pfVar11 = (float *)(iVar5 + 0xcc + uVar12 * 4);
      }
      else {
        pfVar11 = (float *)FUN_006269b0(4);
      }
      fVar21 = *pfVar11;
      iVar5 = *(int *)(param_1 + 0x1c);
      uVar13 = FUN_00452940();
      if (uVar12 < uVar13) {
        pfVar11 = (float *)(iVar5 + 0x98 + uVar12 * 4);
      }
      else {
        pfVar11 = (float *)FUN_006269b0(4);
      }
      FUN_007457d0(fVar21 * *local_6c,*pfVar11 * local_6c[-4],param_3,
                   *(undefined4 *)(param_1 + 0x38),param_1 + 0x330,param_2);
    }
    else {
      FUN_007267a0();
    }
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar2 + 100);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 0x60);
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar2 + 0x68);
    local_68 = local_68 + 4;
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar2 + 0x6c);
    local_60 = local_60 + 1;
    local_6c = local_6c + 1;
    local_64 = local_64 + 4;
    puVar16 = puVar16 + 0x10;
  } while (local_60 < 4);
  return;
}

