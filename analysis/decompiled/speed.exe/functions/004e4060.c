/* speed.exe 004e4060 FUN_004e4060; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004e4060(uint param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  float10 fVar4;
  
  fVar4 = (float10)_DAT_0089096c;
  bVar3 = -1 < (int)param_1;
  if (0x4af < (int)param_1) {
    uVar1 = param_1 / 0x4b0;
    param_1 = param_1 % 0x4b0;
    do {
      uVar1 = uVar1 - 1;
      fVar4 = fVar4 + fVar4;
    } while (uVar1 != 0);
  }
  if ((int)param_1 < -0x4af) {
    iVar2 = (-param_1 - 0x4b0) / 0x4b0 + 1;
    param_1 = param_1 + iVar2 * 0x4b0;
    do {
      iVar2 = iVar2 + -1;
      fVar4 = fVar4 + fVar4;
    } while (iVar2 != 0);
  }
  if (bVar3) {
    return (float10)*(float *)(&DAT_008f1d88 + ((int)param_1 % 100) * 4) *
           (float10)*(float *)(&DAT_008f1d54 + ((int)param_1 / 100) * 4) * fVar4;
  }
  return ((float10)_DAT_0089096c / (float10)*(float *)(&DAT_008f1d88 + ((int)-param_1 % 100) * 4)) *
         (((float10)_DAT_0089096c / (float10)*(float *)(&DAT_008f1d54 + ((int)-param_1 / 100) * 4))
         / fVar4);
}

