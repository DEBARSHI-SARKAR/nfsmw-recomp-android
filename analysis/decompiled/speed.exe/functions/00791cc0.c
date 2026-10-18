/* speed.exe 00791cc0 FUN_00791cc0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00791cc0(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  iVar2 = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 100) + *(int *)(param_1 + 0x34) +
          *(int *)(param_1 + 0x98) + *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x38) +
          *(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x40) +
          *(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x3c);
  if (iVar2 == 0) {
    return (float10)_DAT_00890968;
  }
  iVar1 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14);
  fVar3 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar3 = fVar3 + (float10)_DAT_00891214;
  }
  fVar4 = (float10)iVar2;
  if (iVar2 < 0) {
    fVar4 = fVar4 + (float10)_DAT_00891214;
  }
  return (fVar3 / fVar4) * (float10)_DAT_00890fc8;
}

