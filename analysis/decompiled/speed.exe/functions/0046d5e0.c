/* speed.exe 0046d5e0 FUN_0046d5e0; analysis pseudocode, not buildable source.
 * calls 0045dbf0 FUN_0045dbf0
 * calls 0045db30 FUN_0045db30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0046d5e0(uint param_1)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  uVar1 = param_1 >> 1 & 0x7fff;
  fVar2 = (float10)FUN_0045db30(uVar1);
  fVar3 = (float10)FUN_0045dbf0(uVar1);
  fVar3 = (float10)(float)fVar2 / fVar3;
  if (fVar3 < (float10)_DAT_00890968 != (fVar3 == (float10)_DAT_00890968)) {
    fVar3 = (float10)_DAT_00891218;
  }
  return (float10)_DAT_00894b54 / fVar3;
}

