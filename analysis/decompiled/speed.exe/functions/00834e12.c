/* speed.exe 00834e12 FUN_00834e12; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000003c CreateSemaphoreA
 */

bool __thiscall FUN_00834e12(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  LONG lInitialCount;
  HANDLE pvVar3;
  bool bVar4;
  
  if ((param_2 == (int *)0x0) || (*param_1 != 0)) {
    bVar4 = false;
  }
  else {
    piVar1 = param_1 + 1;
    LOCK();
    *piVar1 = *param_2;
    UNLOCK();
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1;
    UNLOCK();
    if (iVar2 < 0) {
      LOCK();
      *piVar1 = 0;
      UNLOCK();
    }
    LOCK();
    lInitialCount = *piVar1;
    *piVar1 = *piVar1;
    UNLOCK();
    pvVar3 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,lInitialCount,0x3fffffff,
                              (LPCSTR)(-(uint)(*(char *)((int)param_2 + 5U) != '\0') &
                                      (int)param_2 + 5U));
    bVar4 = pvVar3 != (HANDLE)0x0;
    *param_1 = (int)pvVar3;
  }
  return bVar4;
}

