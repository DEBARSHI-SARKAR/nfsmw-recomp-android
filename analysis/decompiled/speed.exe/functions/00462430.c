/* speed.exe 00462430 FUN_00462430; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000047 QueryPerformanceCounter
 * calls 007c66a0 __allshr
 * calls 0045cdd0 FUN_0045cdd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00462430(int param_1)

{
  int iVar1;
  float10 fVar2;
  LARGE_INTEGER local_8;
  
  QueryPerformanceCounter(&local_8);
  iVar1 = __allshr();
  if (_DAT_0090dd40 == _DAT_00890968) {
    FUN_0045cdd0(0x476a6000);
    return (float10)_DAT_00890968;
  }
  fVar2 = (float10)(iVar1 - param_1);
  if (iVar1 - param_1 < 0) {
    fVar2 = fVar2 + (float10)_DAT_00891214;
  }
  return fVar2 * (float10)_DAT_0090dd40;
}

