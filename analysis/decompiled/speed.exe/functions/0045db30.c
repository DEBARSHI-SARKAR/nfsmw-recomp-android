/* speed.exe 0045db30 FUN_0045db30; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0045db30(ushort param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = (float10)param_1 * (float10)_DAT_008941f4;
  fVar2 = (float10)_DAT_0089096c;
  if (fVar1 < (float10)_DAT_0089421c) {
    if ((float10)_DAT_00891654 <= fVar1) {
      fVar1 = fVar1 - (float10)_DAT_00894214;
      fVar2 = (float10)_DAT_00890da8;
    }
  }
  else {
    fVar1 = fVar1 - (float10)_DAT_00894218;
  }
  fVar3 = fVar1 * fVar1;
  fVar4 = fVar3 * fVar1 * fVar3;
  fVar5 = fVar4 * fVar3;
  return (fVar5 * fVar3 * (float10)_DAT_00894204 +
         ((fVar4 * (float10)_DAT_0089420c + (fVar1 - fVar3 * fVar1 * (float10)_DAT_00894210)) -
         fVar5 * (float10)_DAT_00894208)) * fVar2;
}

