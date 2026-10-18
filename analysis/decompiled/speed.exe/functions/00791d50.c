/* speed.exe 00791d50 FUN_00791d50; analysis pseudocode, not buildable source.
 * calls 00791b00 FUN_00791b00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00791d50(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = FUN_00791b00(param_2);
  if (iVar1 == 0) {
    return (float10)_DAT_00890968;
  }
  fVar2 = (float10)*(int *)(param_2 * 0x30 + 0x5c + param_1);
  if (*(int *)(param_2 * 0x30 + 0x5c + param_1) < 0) {
    fVar2 = fVar2 + (float10)_DAT_00891214;
  }
  fVar3 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar3 = fVar3 + (float10)_DAT_00891214;
  }
  return (fVar2 / fVar3) * (float10)_DAT_00890fc8;
}

