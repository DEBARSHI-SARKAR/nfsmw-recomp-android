/* speed.exe 0083550a FUN_0083550a; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000003a SetThreadAffinityMask
 * calls EXTERNAL:0000008e GetSystemInfo
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0083550a(int *param_1,int param_2)

{
  int iVar1;
  DWORD_PTR dwThreadAffinityMask;
  _SYSTEM_INFO *p_Var2;
  _SYSTEM_INFO local_28;
  
  if (*param_1 != 0) {
    if ((_DAT_009c361c & 1) == 0) {
      _DAT_009c361c = _DAT_009c361c | 1;
      DAT_009c3618 = 0;
    }
    LOCK();
    UNLOCK();
    if (DAT_009c3618 == 0) {
      p_Var2 = &local_28;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        (p_Var2->u).dwOemId = 0;
        p_Var2 = (_SYSTEM_INFO *)&p_Var2->dwPageSize;
      }
      GetSystemInfo(&local_28);
      LOCK();
      DAT_009c3618 = local_28.dwNumberOfProcessors;
      UNLOCK();
    }
    if (param_2 < 0) {
      dwThreadAffinityMask = 0xffffffff;
    }
    else {
      LOCK();
      UNLOCK();
      if ((int)DAT_009c3618 <= param_2) {
        LOCK();
        UNLOCK();
        param_2 = param_2 % (int)DAT_009c3618;
      }
      dwThreadAffinityMask = 1 << ((byte)param_2 & 0x1f);
    }
    SetThreadAffinityMask(*(HANDLE *)*param_1,dwThreadAffinityMask);
  }
  return;
}

