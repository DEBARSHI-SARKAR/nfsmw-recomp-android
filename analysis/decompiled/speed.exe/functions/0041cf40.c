/* speed.exe 0041cf40 FUN_0041cf40; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0041cf40(int param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  FUN_007c4b80();
  uVar3 = FUN_007c4b80();
  uVar6 = 0;
  if (3 < (int)uVar3) {
    fVar1 = _DAT_0089096c / param_3;
    iVar7 = (uVar3 - 4 >> 2) + 1;
    iVar5 = 2;
    uVar6 = iVar7 * 4;
    do {
      uVar4 = *(int *)(param_1 + 0x4c) + 1U & 0xf;
      fVar2 = (float)(iVar5 + -1);
      *(uint *)(param_1 + 0x4c) = uVar4;
      if (iVar5 + -1 < 0) {
        fVar2 = fVar2 + _DAT_00891214;
      }
      *(float *)(param_1 + 4 + uVar4 * 4) =
           (param_2 - *(float *)(param_1 + 0x44)) *
           (fVar2 * _DAT_00890f14 - *(float *)(param_1 + 0x48)) * fVar1 + *(float *)(param_1 + 0x44)
      ;
      uVar4 = *(int *)(param_1 + 0x4c) + 1U & 0xf;
      fVar2 = (float)iVar5;
      *(uint *)(param_1 + 0x4c) = uVar4;
      if (iVar5 < 0) {
        fVar2 = fVar2 + _DAT_00891214;
      }
      *(float *)(param_1 + 4 + uVar4 * 4) =
           (param_2 - *(float *)(param_1 + 0x44)) *
           (fVar2 * _DAT_00890f14 - *(float *)(param_1 + 0x48)) * fVar1 + *(float *)(param_1 + 0x44)
      ;
      uVar4 = *(int *)(param_1 + 0x4c) + 1U & 0xf;
      fVar2 = (float)(iVar5 + 1);
      *(uint *)(param_1 + 0x4c) = uVar4;
      if (iVar5 + 1 < 0) {
        fVar2 = fVar2 + _DAT_00891214;
      }
      *(float *)(param_1 + 4 + uVar4 * 4) =
           (param_2 - *(float *)(param_1 + 0x44)) *
           (fVar2 * _DAT_00890f14 - *(float *)(param_1 + 0x48)) * fVar1 + *(float *)(param_1 + 0x44)
      ;
      uVar4 = *(int *)(param_1 + 0x4c) + 1U & 0xf;
      fVar2 = (float)(iVar5 + 2);
      *(uint *)(param_1 + 0x4c) = uVar4;
      if (iVar5 + 2 < 0) {
        fVar2 = fVar2 + _DAT_00891214;
      }
      iVar5 = iVar5 + 4;
      iVar7 = iVar7 + -1;
      *(float *)(param_1 + 4 + uVar4 * 4) =
           (param_2 - *(float *)(param_1 + 0x44)) *
           (fVar2 * _DAT_00890f14 - *(float *)(param_1 + 0x48)) * fVar1 + *(float *)(param_1 + 0x44)
      ;
    } while (iVar7 != 0);
  }
  if (uVar6 < uVar3) {
    fVar1 = _DAT_0089096c / param_3;
    iVar5 = uVar3 - uVar6;
    do {
      uVar6 = uVar6 + 1;
      uVar4 = *(int *)(param_1 + 0x4c) + 1U & 0xf;
      fVar2 = (float)(int)uVar6;
      *(uint *)(param_1 + 0x4c) = uVar4;
      if ((int)uVar6 < 0) {
        fVar2 = fVar2 + _DAT_00891214;
      }
      iVar5 = iVar5 + -1;
      *(float *)(param_1 + 4 + uVar4 * 4) =
           (param_2 - *(float *)(param_1 + 0x44)) *
           (fVar2 * _DAT_00890f14 - *(float *)(param_1 + 0x48)) * fVar1 + *(float *)(param_1 + 0x44)
      ;
    } while (iVar5 != 0);
  }
  fVar1 = (float)(int)uVar3;
  if ((int)uVar3 < 0) {
    fVar1 = fVar1 + _DAT_00891214;
  }
  fVar1 = fVar1 * _DAT_00890f14;
  *(float *)(param_1 + 0x44) = param_2;
  *(float *)(param_1 + 0x48) = (param_3 - fVar1) + *(float *)(param_1 + 0x48);
  return;
}

