/* speed.exe 007ec268 FUN_007ec268; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000098 TerminateThread
 * calls EXTERNAL:00000002 GetCurrentThread
 * calls EXTERNAL:00000006 CloseHandle
 */

void FUN_007ec268(int param_1)

{
  HANDLE hThread;
  
  if (param_1 == -1) {
    hThread = GetCurrentThread();
  }
  else {
    hThread = *(HANDLE *)(param_1 + 4);
  }
  if (hThread != (HANDLE)0x0) {
    TerminateThread(hThread,0);
  }
  CloseHandle(hThread);
  return;
}

