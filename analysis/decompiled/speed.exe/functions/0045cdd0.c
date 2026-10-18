/* speed.exe 0045cdd0 FUN_0045cdd0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000048 QueryPerformanceFrequency
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045cdd0(float param_1)

{
  float fVar1;
  int iVar2;
  LARGE_INTEGER local_8;
  
  QueryPerformanceFrequency(&local_8);
  iVar2 = 0;
  DAT_0090e63c = 0;
  _DAT_0090dd40 = _DAT_00894200 / (float)(longlong)local_8;
  fVar1 = _DAT_008941fc * _DAT_0090dd40;
  if (fVar1 < param_1) {
    do {
      iVar2 = iVar2 + 1;
      fVar1 = fVar1 + fVar1;
      _DAT_0090dd40 = _DAT_0090dd40 + _DAT_0090dd40;
    } while (fVar1 < param_1);
    DAT_0090e63c = iVar2;
    return;
  }
  return;
}

