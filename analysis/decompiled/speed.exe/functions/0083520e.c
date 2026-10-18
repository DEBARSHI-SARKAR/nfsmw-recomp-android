/* speed.exe 0083520e FUN_0083520e; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000003a SetThreadAffinityMask
 * calls EXTERNAL:00000002 GetCurrentThread
 * calls EXTERNAL:0000008e GetSystemInfo
 */

void FUN_0083520e(int param_1)

{
  HANDLE hThread;
  int iVar1;
  DWORD_PTR dwThreadAffinityMask;
  _SYSTEM_INFO *p_Var2;
  _SYSTEM_INFO local_28;
  
  if (DAT_009c3210 == 0) {
    p_Var2 = &local_28;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      (p_Var2->u).dwOemId = 0;
      p_Var2 = (_SYSTEM_INFO *)&p_Var2->dwPageSize;
    }
    GetSystemInfo(&local_28);
    DAT_009c3210 = local_28.dwNumberOfProcessors;
  }
  if (param_1 < 0) {
    dwThreadAffinityMask = 0xffffffff;
  }
  else {
    if ((int)DAT_009c3210 <= param_1) {
      param_1 = param_1 % (int)DAT_009c3210;
    }
    dwThreadAffinityMask = 1 << ((byte)param_1 & 0x1f);
  }
  hThread = GetCurrentThread();
  SetThreadAffinityMask(hThread,dwThreadAffinityMask);
  return;
}

