/* speed.exe 0066c180 FUN_0066c180; analysis pseudocode, not buildable source.
 * calls 00452940 FUN_00452940
 * calls 0066bcc0 FUN_0066bcc0
 * calls 006269b0 FUN_006269b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0066c180(float param_1,undefined4 param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  float10 fVar10;
  float local_8;
  
  iVar4 = (int)param_1;
  uVar5 = FUN_00452940();
  fVar2 = *(float *)(*(int *)((int)param_1 + 8) + 0x5c);
  if (1 < uVar5) {
    *param_3 = fVar2;
    iVar7 = *(int *)((int)param_1 + 8);
    param_1 = *(float *)(iVar7 + 0x5c);
    local_8 = 0.0;
    iVar6 = FUN_00452940();
    fVar2 = *(float *)(iVar7 + 0x54);
    fVar1 = *(float *)(iVar7 + 0x5c);
    fVar3 = (float)(iVar6 + -1);
    if (iVar6 + -1 < 0) {
      fVar3 = fVar3 + _DAT_00891214;
    }
    uVar5 = 0;
    iVar7 = FUN_00452940();
    if (iVar7 != 0) {
      iVar7 = 8;
      do {
        iVar6 = *(int *)(iVar4 + 8);
        uVar8 = FUN_00452940();
        if (uVar5 < uVar8) {
          pfVar9 = (float *)(iVar6 + iVar7);
        }
        else {
          pfVar9 = (float *)FUN_006269b0(4);
        }
        fVar10 = (float10)FUN_0066bcc0(iVar4,param_2,param_1,0x3f800000,param_4,0);
        fVar10 = (fVar10 + (float10)_DAT_0089096c) * (float10)*pfVar9;
        if ((float10)local_8 < fVar10) {
          local_8 = (float)fVar10;
          *param_3 = param_1;
        }
        param_1 = (fVar2 - fVar1) / fVar3 + param_1;
        uVar5 = uVar5 + 1;
        iVar7 = iVar7 + 4;
        uVar8 = FUN_00452940();
      } while (uVar5 < uVar8);
    }
    fVar2 = *(float *)(*(int *)(iVar4 + 8) + 0x58);
    fVar1 = *(float *)(*(int *)(iVar4 + 8) + 0x5c);
    if (*param_3 < fVar2) {
      fVar2 = *param_3;
    }
    if (fVar2 < fVar1) {
      fVar2 = fVar1;
    }
    *param_3 = fVar2;
    return (float10)local_8;
  }
  fVar10 = (float10)_DAT_00890968;
  *param_3 = fVar2;
  return fVar10;
}

