/* speed.exe 006a2e30 FUN_006a2e30; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00452940 FUN_00452940
 * calls 0066bee0 FUN_0066bee0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006a2e30(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  fVar10 = (float10)FUN_0066bee0(param_1 + 0xa8,0);
  fVar12 = (float10)_DAT_008933d4;
  fVar11 = (float10)FUN_0066bee0(param_1 + 0xa8,1);
  fVar12 = (fVar11 * (float10)_DAT_008933d4 + (float10)(float)(fVar10 * fVar12)) *
           (float10)_DAT_008933d4;
  if (fVar12 < (float10)_DAT_00890968 == (fVar12 == (float10)_DAT_00890968)) {
    iVar9 = *(int *)(param_1 + 0x88);
    fVar1 = *(float *)(*(int *)(param_1 + 0x9c) + 0x80);
    fVar4 = *(float *)(iVar9 + 0x58) * _DAT_008a9398;
    fVar3 = *(float *)(iVar9 + 0x5c) * _DAT_008a9398;
    if (param_2 == _DAT_00890968) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x10) = 2;
      fVar1 = *(float *)(iVar9 + 0x5c) * _DAT_008a9398;
      *(float *)(param_1 + 0x6c) = fVar1;
      *(float *)(param_1 + 0x70) = fVar1;
      return;
    }
    if (_DAT_00890968 <= param_2) {
      uVar7 = 2;
      *(undefined4 *)(param_1 + 0x10) = 2;
      uVar6 = FUN_00452940();
      if (2 < uVar6) {
        iVar9 = 0x10;
        do {
          iVar2 = *(int *)(param_1 + 0x9c);
          uVar6 = FUN_00452940();
          if (uVar7 < uVar6) {
            pfVar8 = (float *)(iVar2 + iVar9);
          }
          else {
            pfVar8 = (float *)FUN_006269b0(4);
          }
          fVar5 = fVar1 * *pfVar8;
          if ((_DAT_00890968 < fVar5) && ((fVar4 / fVar5) * (float)fVar12 < param_2)) {
            *(uint *)(param_1 + 0x10) = uVar7;
          }
          uVar7 = uVar7 + 1;
          iVar9 = iVar9 + 4;
          uVar6 = FUN_00452940();
        } while (uVar7 < uVar6);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    iVar9 = *(int *)(param_1 + 0x9c);
    uVar6 = *(uint *)(param_1 + 0x10);
    uVar7 = FUN_00452940();
    if (uVar6 < uVar7) {
      pfVar8 = (float *)(iVar9 + 8 + uVar6 * 4);
    }
    else {
      pfVar8 = (float *)FUN_006269b0(4);
    }
    fVar3 = ((fVar4 - fVar3) / fVar4) * fVar1 * *pfVar8 * (param_2 / (float)fVar12) + fVar3;
    *(float *)(param_1 + 0x6c) = fVar3;
    *(float *)(param_1 + 0x70) = fVar3;
    *(float *)(param_1 + 0xbc) = *(float *)(param_1 + 0x6c) * _DAT_008a9394;
  }
  return;
}

