/* speed.exe 006be9f0 FUN_006be9f0; analysis pseudocode, not buildable source.
 * calls 0045db30 FUN_0045db30
 * calls 0045dbf0 FUN_0045dbf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006be9f0(uint param_1)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  uVar1 = param_1 >> 1 & 0x7fff;
  fVar2 = (float10)FUN_0045db30(uVar1);
  fVar3 = (float10)FUN_0045dbf0(uVar1);
  if ((float10)(float)fVar2 / fVar3 != (float10)_DAT_00890968) {
    return (float10)(DAT_00982be4 >> 1) / ((float10)(float)fVar2 / fVar3);
  }
  return (float10)_DAT_00890bf8;
}

