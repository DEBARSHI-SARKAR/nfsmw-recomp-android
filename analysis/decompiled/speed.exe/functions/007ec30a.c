/* speed.exe 007ec30a FUN_007ec30a; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000002 GetCurrentThread
 * calls EXTERNAL:0000001a GetThreadPriority
 */

undefined4 FUN_007ec30a(int param_1)

{
  HANDLE hThread;
  int iVar1;
  undefined4 uVar2;
  
  hThread = DAT_009baf74;
  if (param_1 != 0) {
    if (param_1 == -1) {
      hThread = GetCurrentThread();
    }
    else {
      hThread = *(HANDLE *)(param_1 + 4);
    }
  }
  if (hThread == (HANDLE)0x0) {
    return 0;
  }
  iVar1 = GetThreadPriority(hThread);
  if (iVar1 == -0xf) {
    uVar2 = 0xfffffffd;
  }
  else if (iVar1 == -2) {
    uVar2 = 0xfffffffe;
  }
  else {
    if (iVar1 == -1) {
      return 0xffffffff;
    }
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 2) {
      uVar2 = 2;
    }
    else {
      if (iVar1 != 0xf) {
        return 0;
      }
      uVar2 = 3;
    }
  }
  return uVar2;
}

