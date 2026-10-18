/* speed.exe 0045cf30 FUN_0045cf30; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000047 QueryPerformanceCounter
 * calls 007c66a0 __allshr
 * calls 0045cdd0 FUN_0045cdd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0045cf30(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  LARGE_INTEGER local_8;
  
  QueryPerformanceCounter(&local_8);
  iVar2 = __allshr();
  if (_DAT_0090dd40 == _DAT_00890968) {
    FUN_0045cdd0(0x476a6000);
    fVar1 = _DAT_00890968;
  }
  else {
    fVar1 = (float)(iVar2 - param_1);
    if (iVar2 - param_1 < 0) {
      fVar1 = fVar1 + _DAT_00891214;
    }
    fVar1 = fVar1 * _DAT_0090dd40;
  }
  if (param_2 < fVar1) {
    return 1;
  }
  return 0;
}

