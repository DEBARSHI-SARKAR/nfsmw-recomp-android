/* speed.exe 004de250 FUN_004de250; analysis pseudocode, not buildable source.
 * calls 004ba5c0 FUN_004ba5c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004de250(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = FUN_004ba5c0(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x40);
  if (iVar4 == 0) {
    return (float10)_DAT_00890968;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
  fVar2 = *(float *)(iVar4 + 0x50) - *(float *)(iVar1 + 0x50);
  fVar3 = *(float *)(iVar4 + 0x54) - *(float *)(iVar1 + 0x54);
  return SQRT((float10)fVar2 * (float10)fVar2 + (float10)fVar3 * (float10)fVar3);
}

