/* speed.exe 00723030 FUN_00723030; analysis pseudocode, not buildable source.
 * calls 0045f6d0 FUN_0045f6d0
 * calls 0045f3c0 FUN_0045f3c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00723030(int param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float fVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  fVar1 = param_3[1];
  fVar2 = *param_3;
  bVar7 = false;
  FUN_0045f3c0(&local_28,param_4);
  fVar9 = local_24;
  fVar8 = local_28;
  iVar10 = (int)*(short *)(param_1 + 0x40);
  if (0 < iVar10) {
    pfVar12 = (float *)(param_1 + 0x44);
    iVar11 = 1;
    do {
      fVar3 = pfVar12[1];
      fVar4 = *pfVar12;
      local_20 = *pfVar12 - *(float *)(param_1 + 0x44 + (iVar11 % iVar10) * 8);
      local_1c = pfVar12[1] - *(float *)(param_1 + 0x48 + (iVar11 % iVar10) * 8);
      FUN_0045f3c0(&local_18,&local_20);
      local_10 = local_18;
      local_c = local_14;
      if (_DAT_0089096c == local_18 * fVar8 + local_14 * fVar9) {
        local_28 = fVar2 - fVar4;
        local_24 = fVar1 - fVar3;
        local_18 = local_28;
        local_14 = local_24;
        FUN_0045f3c0(&local_20,&local_18);
        local_28 = local_20;
        local_24 = local_1c;
        iVar10 = FUN_0045f6d0(&local_28,&local_10,0x3a83126f);
        if (iVar10 == 0) {
          return 0;
        }
        fVar1 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = fVar1;
        return 1;
      }
      fVar6 = local_14 * fVar8 - fVar9 * local_18;
      if (((_DAT_00890d60 <= fVar6) || (fVar6 <= _DAT_008b2a3c)) &&
         (fVar6 = ((fVar1 - fVar3) * local_18 - (fVar2 - fVar4) * local_14) / fVar6,
         _DAT_00890968 <= fVar6)) {
        local_28 = fVar8 * fVar6;
        local_24 = fVar9 * fVar6;
        iVar10 = iVar11 % (int)*(short *)(param_1 + 0x40);
        fVar4 = local_28 + fVar2;
        fVar3 = local_24 + fVar1;
        if (((*(float *)(param_1 + 0x44 + iVar10 * 8) - fVar4) * (*pfVar12 - fVar4) +
             (*(float *)(param_1 + 0x48 + iVar10 * 8) - fVar3) * (pfVar12[1] - fVar3) <
             _DAT_00890968) && (!bVar7)) {
          *param_2 = fVar4;
          bVar7 = true;
          param_2[1] = fVar3;
        }
      }
      iVar10 = (int)*(short *)(param_1 + 0x40);
      pfVar12 = pfVar12 + 2;
      bVar5 = iVar11 < iVar10;
      iVar11 = iVar11 + 1;
    } while (bVar5);
    if (bVar7) {
      return 1;
    }
  }
  return 0;
}

