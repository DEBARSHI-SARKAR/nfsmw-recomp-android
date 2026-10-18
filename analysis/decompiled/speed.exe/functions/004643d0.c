/* speed.exe 004643d0 FUN_004643d0; analysis pseudocode, not buildable source.
 * calls 00462430 FUN_00462430
 * calls 00462a80 FUN_00462a80
 * calls EXTERNAL:00000047 QueryPerformanceCounter
 * calls 007c66a0 __allshr
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004643d0(DWORD param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float10 fVar3;
  LARGE_INTEGER local_10;
  undefined1 local_8;
  undefined4 local_4;
  
  QueryPerformanceCounter(&local_10);
  uVar1 = __allshr();
  local_8 = 0;
  local_4 = 0;
  local_10.s.LowPart = param_1;
  local_10.s.HighPart = 0x7fffffff;
  uVar2 = FUN_00462a80(&local_10,param_2,param_3);
  fVar3 = (float10)FUN_00462430(uVar1);
  _DAT_0090e658 = (float)(fVar3 + (float10)_DAT_0090e658);
  DAT_0090e65c = DAT_0090e65c + 1;
  return uVar2;
}

