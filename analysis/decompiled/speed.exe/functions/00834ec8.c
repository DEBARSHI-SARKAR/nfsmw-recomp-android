/* speed.exe 00834ec8 FUN_00834ec8; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000003b ReleaseSemaphore
 */

int __thiscall FUN_00834ec8(undefined4 *param_1,int param_2)

{
  BOOL BVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 < 1) {
    piVar3 = param_1 + 1;
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3;
    UNLOCK();
  }
  else {
    piVar3 = param_1 + 1;
    LOCK();
    *piVar3 = *piVar3 + param_2;
    UNLOCK();
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3;
    UNLOCK();
    BVar1 = ReleaseSemaphore((HANDLE)*param_1,param_2,(LPLONG)0x0);
    if (BVar1 == 0) {
      LOCK();
      *piVar3 = *piVar3 - param_2;
      UNLOCK();
      iVar2 = -1;
    }
  }
  return iVar2;
}

