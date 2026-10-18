/* speed.exe 0041d130 FUN_0041d130; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0041d130(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  
  if (param_2 < *(float *)(param_1 + 0x48) != (param_2 == *(float *)(param_1 + 0x48))) {
    if (*(float *)(param_1 + 0x48) < _DAT_00891218) {
      return (float10)*(float *)(param_1 + 0x44);
    }
    fVar4 = (float10)*(float *)(param_1 + 4 + (*(uint *)(param_1 + 0x4c) & 0xf) * 4);
    return ((float10)*(float *)(param_1 + 0x44) - fVar4) *
           (((float10)*(float *)(param_1 + 0x48) - (float10)param_2) /
           (float10)*(float *)(param_1 + 0x48)) + fVar4;
  }
  FUN_007c4b80();
  iVar1 = FUN_007c4b80();
  uVar2 = iVar1 + 1;
  if (0xf < uVar2) {
    return (float10)*(float *)(param_1 + 4 + (*(int *)(param_1 + 0x4c) + 1U & 0xf) * 4);
  }
  uVar3 = *(int *)(param_1 + 0x4c) - uVar2;
  fVar4 = (float10)*(float *)(param_1 + 4 + (uVar3 & 0xf) * 4);
  fVar5 = (float10)(int)uVar2;
  if ((int)uVar2 < 0) {
    fVar5 = fVar5 + (float10)_DAT_00891214;
  }
  return ((fVar5 * (float10)_DAT_00890f14 - (float10)param_2) + (float10)*(float *)(param_1 + 0x48))
         * ((float10)*(float *)(param_1 + 4 + (uVar3 + 1 & 0xf) * 4) - fVar4) *
         (float10)_DAT_00890dbc + fVar4;
}

