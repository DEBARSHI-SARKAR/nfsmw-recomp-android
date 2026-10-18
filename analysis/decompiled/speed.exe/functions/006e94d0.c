/* speed.exe 006e94d0 FUN_006e94d0; analysis pseudocode, not buildable source.
 * calls 006e9490 FUN_006e9490
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_006e94d0(undefined4 param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  int iVar6;
  
  if (param_2 == _DAT_0089096c) {
    return (float10)_DAT_008910f0;
  }
  if (param_2 == _DAT_00890da8) {
    return (float10)_DAT_008b0474;
  }
  if (DAT_00988e08 == '\0') {
    FUN_006e9490(param_1);
  }
  bVar1 = param_2 < _DAT_00890968;
  if (bVar1) {
    param_2 = param_2 * _DAT_00890da8;
  }
  iVar6 = 0;
  iVar3 = FUN_007c4b80();
  iVar2 = 0;
  iVar4 = iVar3;
  while (1 < iVar4) {
    iVar6 = iVar3 + iVar2 >> 1;
    if (param_2 < (float)(&DAT_009885e8)[iVar6]) {
      iVar3 = iVar6;
      iVar6 = iVar2;
    }
    iVar2 = iVar6;
    iVar4 = iVar3 - iVar6;
  }
  fVar5 = (((float10)param_2 - (float10)(float)(&DAT_009885e8)[iVar2]) /
           ((float10)(float)(&DAT_009885e8)[iVar3] - (float10)(float)(&DAT_009885e8)[iVar2]) +
          (float10)iVar6) * (float10)_DAT_008b00c0;
  if (bVar1) {
    fVar5 = fVar5 * (float10)_DAT_00890da8;
  }
  return fVar5;
}

