/* speed.exe 007ec377 FUN_007ec377; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000002 GetCurrentThread
 * calls EXTERNAL:0000001d SetThreadPriority
 */

undefined4 FUN_007ec377(int param_1,int param_2)

{
  HANDLE hThread;
  int nPriority;
  
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
    return 1;
  }
  if (param_2 == -3) {
    nPriority = -0xf;
  }
  else if (param_2 == -2) {
    nPriority = -2;
  }
  else if (param_2 == -1) {
    nPriority = -1;
  }
  else {
    if (param_2 != 0) {
      if (param_2 == 1) {
        nPriority = 1;
        goto LAB_007ec3de;
      }
      if (param_2 == 2) {
        nPriority = 2;
        goto LAB_007ec3de;
      }
      if (param_2 == 3) {
        nPriority = 0xf;
        goto LAB_007ec3de;
      }
    }
    nPriority = 0;
  }
LAB_007ec3de:
  SetThreadPriority(hThread,nPriority);
  return 1;
}

