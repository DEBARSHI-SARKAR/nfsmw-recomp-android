/* speed.exe 0065c770 FUN_0065c770; analysis pseudocode, not buildable source.
 * calls 0045ce40 FUN_0045ce40
 * calls 0045ce70 FUN_0045ce70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0065c770(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  fVar1 = _DAT_008970f0;
  if (DAT_008f82f0 == 0) {
    fVar1 = _DAT_00892b64;
  }
  fVar1 = (float)DAT_00925954 * fVar1;
  if (DAT_00925958 == 0) {
    return (float10)fVar1;
  }
  uVar3 = FUN_0045ce40();
  fVar4 = (float10)FUN_0045ce70(DAT_00925958,uVar3);
  fVar2 = _DAT_008970f0;
  if (DAT_008f82f0 == 0) {
    fVar2 = _DAT_00892b64;
  }
  if ((float)(fVar4 * (float10)_DAT_00890d60) <= fVar2) {
    return (float10)(float)(fVar4 * (float10)_DAT_00890d60) + (float10)fVar1;
  }
  return (float10)fVar2 + (float10)fVar1;
}

