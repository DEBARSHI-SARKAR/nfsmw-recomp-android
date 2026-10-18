/* speed.exe 006e9020 FUN_006e9020; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 * calls 007cbf90 _rand
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006e9020(void)

{
  float fVar1;
  float10 fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  
  if (DAT_00988ef8 == '\0') {
    do {
      iVar4 = _rand();
      fVar3 = (float)iVar4 * _DAT_008957c0 - _DAT_0089096c;
      iVar4 = _rand();
      fVar5 = (float10)iVar4 * (float10)_DAT_008957c0 - (float10)_DAT_0089096c;
      fVar1 = (float)fVar5;
      fVar5 = (float10)fVar3 * (float10)fVar3 + fVar5 * (float10)fVar1;
    } while ((float10)_DAT_0089096c <= fVar5);
    fVar2 = (float10)log2(fVar5);
    fVar5 = (float10)FUN_005c5e80((float)((((float10)0.6931471805599453 * fVar2) / fVar5) *
                                         (float10)_DAT_00890e94));
    DAT_00988ef8 = 1;
    _DAT_00988ef4 = (float)((float10)fVar1 * fVar5);
    return fVar5 * (float10)fVar3;
  }
  DAT_00988ef8 = 0;
  return (float10)_DAT_00988ef4;
}

