/* speed.exe 008351ef FUN_008351ef; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000002 GetCurrentThread
 * calls EXTERNAL:0000001d SetThreadPriority
 */

bool FUN_008351ef(int param_1)

{
  HANDLE hThread;
  BOOL BVar1;
  
  param_1 = param_1 + -0x7f;
  hThread = GetCurrentThread();
  BVar1 = SetThreadPriority(hThread,param_1);
  return BVar1 != 0;
}

