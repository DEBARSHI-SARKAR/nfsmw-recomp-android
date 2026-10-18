/* speed.exe 00422780 FUN_00422780; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 00402690 FUN_00402690
 * calls 00789190 FUN_00789190
 * calls 00768200 FUN_00768200
 * calls 0041ea60 FUN_0041ea60
 * calls 0040feb0 FUN_0040feb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00422780(float param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  uint3 uVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar12;
  float10 fVar13;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float local_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  int *piStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float afStack_58 [19];
  float afStack_c [3];
  
  uVar3 = (uint3)uStack_ac;
  piVar1 = (int *)((int)param_1 + 0x4c);
  local_94 = param_1;
  piVar5 = (int *)(**(code **)(*(int *)((int)param_1 + 0x4c) + 8))();
  iVar6 = (**(code **)(*piVar5 + 0x38))();
  if (iVar6 != 2) {
    return;
  }
  piVar5 = (int *)(**(code **)(*piVar1 + 4))();
  piStack_68 = (int *)(**(code **)(*piVar1 + 8))();
  piVar7 = (int *)(**(code **)(*piVar5 + 0x54))();
  pfVar8 = (float *)(**(code **)(*piVar7 + 0x20))();
  fStack_84 = *pfVar8;
  fStack_80 = pfVar8[1];
  fStack_7c = pfVar8[2];
  fStack_64 = *(float *)((int)local_94 + 0x88);
  fStack_5c = *(float *)((int)local_94 + 0x90);
  fStack_60 = *(float *)((int)local_94 + 0x8c) + _DAT_0089096c;
  afStack_58[0xf] = 1.0;
  afStack_58[10] = 1.0;
  afStack_58[5] = 1.0;
  afStack_58[0] = 1.0;
  afStack_58[0xe] = 0.0;
  afStack_58[0xd] = 0.0;
  afStack_58[0xc] = 0.0;
  afStack_58[0xb] = 0.0;
  afStack_58[9] = 0.0;
  afStack_58[8] = 0.0;
  afStack_58[7] = 0.0;
  afStack_58[6] = 0.0;
  afStack_58[4] = 0.0;
  afStack_58[3] = 0.0;
  afStack_58[2] = 0.0;
  afStack_58[1] = 0.0;
  fStack_a4 = fStack_64 - *pfVar8;
  fStack_a0 = fStack_60 - pfVar8[1];
  fStack_9c = fStack_5c - pfVar8[2];
  fStack_90 = fStack_a4;
  fStack_8c = fStack_a0;
  fStack_88 = fStack_9c;
  FUN_0040fe20(&fStack_90,&fStack_90);
  fVar12 = (float10)(**(code **)(*piVar1 + 0xcc))();
  fVar13 = (float10)(**(code **)(*piVar7 + 0x2c))();
  fVar2 = (float)fVar13;
  if (fVar13 <= (float10)*(float *)((int)local_94 + 0x84)) {
    fVar13 = (float10)(**(code **)(*piVar1 + 0x78))(fVar2);
    fStack_b4 = *(float *)((int)local_94 + 0x84);
    fVar13 = ((float10)(float)fVar12 * (float10)_DAT_00890634 + (float10)_DAT_00890634) * fVar13 *
             (float10)param_2 + (float10)fVar2;
    if (fVar13 < (float10)fStack_b4) goto LAB_00422999;
  }
  else {
    fStack_b4 = *(float *)((int)local_94 + 0x84);
    fVar13 = (float10)fVar2 - (float10)param_2 * (float10)_DAT_00890614;
    if ((float10)fStack_b4 < fVar13) goto LAB_00422999;
  }
  fVar13 = (float10)fStack_b4;
LAB_00422999:
  fStack_b0 = (float)fVar13;
  fVar13 = (float10)(**(code **)(*piVar1 + 0x74))();
  fVar2 = (float)(((float10)(float)fVar12 * (float10)_DAT_008910f0 + (float10)_DAT_00891050) *
                 fVar13);
  if (fStack_b0 < _DAT_00890968) {
    fStack_b0 = _DAT_00890968;
  }
  if (fVar2 < fStack_b0) {
    fStack_b0 = fVar2;
  }
  cVar4 = (**(code **)(**(int **)((int)local_94 + 0xd4) + 0x14))();
  if (cVar4 != '\0') {
    fStack_b0 = fStack_b0 * _DAT_00891068;
  }
  fStack_b0 = fStack_b0 * param_2;
  fStack_84 = fStack_90 * fStack_b0 + fStack_84;
  fStack_80 = fStack_8c * fStack_b0 + fStack_80;
  fStack_7c = fStack_88 * fStack_b0 + fStack_7c;
  iVar6 = (**(code **)(*piVar5 + 0x4c))();
  FUN_00789190(pfVar8,1);
  uStack_ac = (float)(uint)(uint3)uStack_ac;
  fStack_78 = 0.0;
  fStack_74 = 1.0;
  fStack_70 = 0.0;
  uStack_6c = 0;
  cVar4 = (**(code **)(*piStack_68 + 0xc4))();
  if (cVar4 == '\0') {
    fStack_a4 = 0.0;
    fStack_a0 = 1.0;
    fStack_9c = 0.0;
    fStack_98 = 0.0;
    if ((*(byte *)(iVar6 + 0x30) & 1) == 0) {
      fStack_9c = 0.0;
      fStack_a4 = 0.0;
      fStack_a0 = 1.0;
    }
    else {
      FUN_00402690(&fStack_a4);
    }
    FUN_0040feb0(&fStack_a4,&fStack_a4);
    fStack_98 = 0.0;
    if ((_DAT_00890968 < fStack_a4 * fStack_a4 + fStack_a0 * fStack_a0 + fStack_9c * fStack_9c) &&
       (_DAT_00891058 <= fStack_a0)) {
      fStack_78 = fStack_a4;
      uStack_ac = (float)CONCAT13(1,uVar3);
      fStack_74 = fStack_a0;
      fStack_70 = fStack_9c;
      uStack_6c = 0;
    }
  }
  afStack_58[8] = fStack_90;
  afStack_58[9] = fStack_8c;
  afStack_58[10] = fStack_88;
  afStack_58[0xe] = 0.0;
  afStack_58[0xd] = 0.0;
  afStack_58[0xc] = 0.0;
  afStack_58[0xf] = 1.0;
  FUN_0041ea60(&fStack_78,afStack_58 + 8,afStack_58);
  if (uStack_ac._3_1_ == '\0') {
    pfVar11 = afStack_58 + 4;
    pfVar9 = afStack_58;
    pfVar10 = afStack_58 + 8;
  }
  else {
    afStack_58[4] = fStack_78;
    afStack_58[5] = fStack_74;
    afStack_58[6] = fStack_70;
    afStack_58[7] = (float)uStack_6c;
    pfVar11 = afStack_58 + 8;
    pfVar9 = &fStack_78;
    pfVar10 = afStack_58;
  }
  FUN_0041ea60(pfVar10,pfVar9,pfVar11);
  afStack_58[0xb] = 0.0;
  afStack_58[7] = 0.0;
  afStack_58[3] = 0.0;
  (**(code **)(*piVar1 + 0x48))();
  cVar4 = (**(code **)(*piStack_68 + 0xc4))();
  if (cVar4 == '\0') {
    FUN_00768200(pfVar8);
  }
  (**(code **)(*piVar7 + 0x4c))(afStack_c);
  fVar2 = fStack_98;
  if (*(int *)((int)fStack_98 + 0xd8) != 0) {
    iVar6 = 0;
    do {
      fVar12 = (float10)(**(code **)(**(int **)((int)fVar2 + 0xd8) + 100))(iVar6);
      if (fVar12 < (float10)uStack_ac) {
        fVar12 = (float10)uStack_ac;
      }
      iVar6 = iVar6 + 1;
      uStack_ac = (float)fVar12;
    } while (iVar6 < 4);
  }
  fStack_84 = afStack_c[0] + uStack_ac + unaff_ESI;
  (**(code **)(*piVar7 + 0x5c))(&fStack_88);
  (**(code **)(*piVar7 + 0x70))(&fStack_60);
  afStack_58[0xd] = fStack_9c * unaff_EBX;
  afStack_58[0xe] = fStack_98 * unaff_EBX;
  afStack_58[0xf] = local_94 * unaff_EBX;
  (**(code **)(*piVar7 + 0x60))(afStack_58 + 0xd);
  (**(code **)(*piVar7 + 100))(&DAT_008a2fb4);
  return;
}

