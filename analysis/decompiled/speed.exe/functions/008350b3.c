/* speed.exe 008350b3 FUN_008350b3; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000056 EnterCriticalSection
 * calls EXTERNAL:00000006 CloseHandle
 * calls EXTERNAL:00000057 LeaveCriticalSection
 */

void __thiscall FUN_008350b3(int param_1,HANDLE param_2,char param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (HANDLE)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
    if (param_3 == '\0') {
      do {
        if (*(HANDLE *)(param_1 + uVar1 * 4) == param_2) {
          CloseHandle(param_2);
          *(undefined4 *)(param_1 + uVar1 * 4) = 0;
          break;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 0x10);
    }
    else {
      uVar1 = 0;
      do {
        if (*(int *)(param_1 + uVar1 * 4) == 0) {
          *(HANDLE *)(param_1 + uVar1 * 4) = param_2;
          param_2 = (HANDLE)0x0;
          break;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 0x10);
      if (param_2 != (HANDLE)0x0) {
        CloseHandle(param_2);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  }
  return;
}

