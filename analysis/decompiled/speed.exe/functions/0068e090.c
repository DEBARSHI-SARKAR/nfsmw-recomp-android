/* speed.exe 0068e090 FUN_0068e090; analysis pseudocode, not buildable source.
 * calls 006533b0 FUN_006533b0
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0068e090(int param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = param_3 * _DAT_00890960 * _DAT_008933d4;
  iVar3 = FUN_007c4b80();
  fVar2 = param_2 * _DAT_00890d60 * _DAT_0089119c;
  if (5 < iVar3) {
    fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 0x100) + 8) + 0x18 +
                      *(int *)(param_1 + 0x10c) * 4);
    fVar4 = (float10)FUN_006533b0(fVar2);
    return fVar4 * (float10)*(int *)(PTR_DAT_008f8aa8 + 8) * (float10)*(float *)(param_1 + 0x128) *
           (float10)fVar1 * (float10)_DAT_008ab228;
  }
  fVar4 = (float10)FUN_006533b0(fVar2);
  fVar5 = (float10)FUN_006533b0(fVar2);
  return ((fVar5 - (float10)(float)fVar4) * ((float10)fVar1 - (float10)iVar3) +
         (float10)(float)fVar4) *
         (float10)*(float *)(*(int *)(*(int *)(param_1 + 0x100) + 8) + 0x18 +
                            *(int *)(param_1 + 0x10c) * 4) * (float10)*(int *)(PTR_DAT_008f8aa8 + 8)
         * (float10)*(float *)(param_1 + 0x128) * (float10)_DAT_008ab228;
}

