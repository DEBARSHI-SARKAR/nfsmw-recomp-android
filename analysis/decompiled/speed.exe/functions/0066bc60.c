/* speed.exe 0066bc60 FUN_0066bc60; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0066bc60(int param_1,int param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)*(float *)(*(int *)(param_2 + 8) + 0xc);
  if ((param_3 != 0) && ((float10)_DAT_00890968 < fVar2)) {
    fVar3 = fVar2;
    if ((float10)_DAT_00890968 <= (float10)*(float *)(param_3 + 0x18)) {
      fVar3 = (float10)_DAT_0089096c - fVar2;
    }
    fVar2 = fVar3 * (float10)_DAT_008910f0 * (float10)*(float *)(param_3 + 0x18) + fVar2;
  }
  iVar1 = *(int *)(param_1 + 8);
  return ((float10)*(float *)(iVar1 + 0x58) - (float10)*(float *)(iVar1 + 0x5c)) * fVar2 +
         (float10)*(float *)(iVar1 + 0x5c);
}

