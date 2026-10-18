/* speed.exe 005c8150 FUN_005c8150; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005c8150(undefined4 param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_007c4b80(param_1);
  fVar2 = (float10)iVar1;
  if (fVar2 < (float10)param_2) {
    fVar2 = fVar2 + (float10)_DAT_0089096c;
  }
  return fVar2;
}

