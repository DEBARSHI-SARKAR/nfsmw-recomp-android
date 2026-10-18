/* speed.exe 00753b50 FUN_00753b50; analysis pseudocode, not buildable source.
 * calls 0045dbf0 FUN_0045dbf0
 * calls 0074b760 FUN_0074b760
 * calls 0045db30 FUN_0045db30
 * calls 006bd940 FUN_006bd940
 * calls 007c4b80 FUN_007c4b80
 * calls 0045da70 FUN_0045da70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00753b50(int param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (*(int *)(&DAT_0090580c + (*(int *)(*(int *)(param_1 + 0x288) + 4) + -1) * 0x30) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x288) + 0x40);
    FUN_0074b760(*(undefined4 *)(iVar3 + 0x40),*(undefined4 *)(iVar3 + 0x44),0x42480000);
    iVar3 = FUN_007c4b80();
    fVar4 = (float10)FUN_0045db30(iVar3 / 0x168);
    *(float *)(param_1 + 14000) = (float)fVar4;
    fVar4 = (float10)FUN_0045dbf0(iVar3 / 0x168);
    *(float *)(param_1 + 0x36b4) = (float)fVar4;
    *(undefined4 *)(param_1 + 0x36b8) = 0;
  }
  fVar2 = _DAT_00904af4;
  pfVar1 = (float *)(param_1 + 14000);
  *pfVar1 = _DAT_00904af4 * *pfVar1;
  *(float *)(param_1 + 0x36b4) = fVar2 * *(float *)(param_1 + 0x36b4);
  *(float *)(param_1 + 0x36b8) = fVar2 * *(float *)(param_1 + 0x36b8);
  FUN_006bd940(pfVar1,param_1 + 0x3650,pfVar1);
  if (DAT_00905ce0 == 0) {
    param_2 = param_2 + *(float *)(param_1 + 0x34a4);
    *(float *)(param_1 + 0x34a4) = param_2;
    if (*(float *)(param_1 + 0x34a0) <= param_2) {
      DAT_00905ce0 = 1;
    }
  }
  else {
    if (DAT_00905ce0 == 1) {
      fVar5 = (float10)FUN_0045da70(0x40a00000);
      fVar4 = (float10)_DAT_0089096c;
      *(undefined4 *)(param_1 + 0x34a4) = 0;
      *(float *)(param_1 + 0x34a0) = (float)(fVar5 + fVar4);
      DAT_00905ce0 = 2;
      fVar4 = (float10)FUN_0045da70(0x3d4ccccd);
      *(float *)(param_1 + 0x3490) =
           (float)((fVar4 - (float10)_DAT_008916cc) * (float10)_DAT_00904af0);
      fVar6 = (float10)FUN_0045da70(0x3d4ccccd);
      fVar5 = (float10)_DAT_008916cc;
      fVar4 = (float10)_DAT_00904af0;
      *(undefined4 *)(param_1 + 0x3498) = 0;
      *(float *)(param_1 + 0x3494) = (float)((fVar6 - fVar5) * fVar4);
      *(float *)(param_1 + 0x3490) = *(float *)(param_1 + 0x3490) + *pfVar1;
      *(float *)(param_1 + 0x3494) = *(float *)(param_1 + 0x36b4) + *(float *)(param_1 + 0x3494);
      *(float *)(param_1 + 0x3498) = *(float *)(param_1 + 0x36b8) + *(float *)(param_1 + 0x3498);
      return;
    }
    if (DAT_00905ce0 == 2) {
      *(float *)(param_1 + 0x3480) =
           (*(float *)(param_1 + 0x3490) - *(float *)(param_1 + 0x3480)) * param_2 +
           *(float *)(param_1 + 0x3480);
      *(float *)(param_1 + 0x3484) =
           (*(float *)(param_1 + 0x3494) - *(float *)(param_1 + 0x3484)) * param_2 +
           *(float *)(param_1 + 0x3484);
      _DAT_009b378c = _DAT_009b378c + param_2;
      if (_DAT_0089096c <= _DAT_009b378c) {
        _DAT_009b378c = 0.0;
        DAT_00905ce0 = 0;
        return;
      }
    }
  }
  return;
}

