/* speed.exe 00835370 FUN_00835370; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000009c WaitForSingleObject
 * calls 008352b3 GetTickCount
 * calls 0083526b FUN_0083526b
 * calls EXTERNAL:00000006 CloseHandle
 */

undefined4 __thiscall FUN_00835370(int *param_1,uint *param_2,undefined4 *param_3)

{
  DWORD DVar1;
  uint dwMilliseconds;
  
  if (*param_1 == 0) {
    while ((((int *)*param_1 == (int *)0x0 || (*(int *)*param_1 == 0)) &&
           (DVar1 = GetTickCount(), DVar1 < *param_2))) {
      param_3 = (undefined4 *)0x1;
      FUN_0083526b(&param_3);
    }
    if (*param_1 == 0) {
      return 0;
    }
    param_3 = (undefined4 *)0x0;
  }
  if (*(int *)*param_1 != 0) {
    dwMilliseconds = *param_2;
    if ((dwMilliseconds != 0xffffffff) && (dwMilliseconds != 0)) {
      DVar1 = GetTickCount();
      if (DVar1 < *param_2) {
        dwMilliseconds = *param_2 - DVar1;
      }
      else {
        dwMilliseconds = 0;
      }
    }
    DVar1 = WaitForSingleObject(*(HANDLE *)*param_1,dwMilliseconds);
    if (DVar1 == 0x102) {
      return 1;
    }
    CloseHandle(*(HANDLE *)*param_1);
    *(undefined4 *)*param_1 = 0;
    *(undefined4 *)(*param_1 + 4) = 2;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(*param_1 + 8);
  }
  return 2;
}

