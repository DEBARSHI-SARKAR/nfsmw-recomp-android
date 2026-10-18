/* speed.exe 00791b70 FUN_00791b70; analysis pseudocode, not buildable source.
 * calls 00791b00 FUN_00791b00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00791b70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  iVar1 = FUN_00791b00(param_2);
  if (iVar1 == 0) {
    return (float10)_DAT_00890968;
  }
  if (param_2 == 3) {
    iVar2 = *(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x6c) +
            *(int *)(param_1 + 100) + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x34);
  }
  else {
    param_1 = param_2 * 0x30 + param_1;
    iVar2 = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x34);
  }
  fVar3 = (float10)iVar2;
  if (iVar2 < 0) {
    fVar3 = fVar3 + (float10)_DAT_00891214;
  }
  fVar4 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar4 = fVar4 + (float10)_DAT_00891214;
  }
  return (fVar3 / fVar4) * (float10)_DAT_00890fc8;
}

