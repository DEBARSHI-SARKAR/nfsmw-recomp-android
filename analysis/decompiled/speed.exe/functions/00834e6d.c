/* speed.exe 00834e6d FUN_00834e6d; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000009c WaitForSingleObject
 * calls 008352b3 GetTickCount
 */

int __thiscall FUN_00834e6d(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  DWORD DVar2;
  uint dwMilliseconds;
  int iVar3;
  
  dwMilliseconds = *param_2;
  if ((dwMilliseconds != 0xffffffff) && (dwMilliseconds != 0)) {
    DVar2 = GetTickCount();
    if (DVar2 < *param_2) {
      dwMilliseconds = *param_2 - DVar2;
    }
    else {
      dwMilliseconds = 0;
    }
  }
  DVar2 = WaitForSingleObject((HANDLE)*param_1,dwMilliseconds);
  if (DVar2 == 0) {
    piVar1 = param_1 + 1;
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1;
    UNLOCK();
  }
  else {
    iVar3 = (DVar2 != 0x102) - 2;
  }
  return iVar3;
}

