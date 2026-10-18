/* speed.exe 0083541c FUN_0083541c; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000009a GetExitCodeThread
 * calls EXTERNAL:00000006 CloseHandle
 */

undefined4 __thiscall FUN_0083541c(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  BOOL BVar2;
  undefined4 uVar3;
  int *local_8;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    if ((*piVar1 != 0) &&
       (local_8 = param_1, BVar2 = GetExitCodeThread((HANDLE)*piVar1,(LPDWORD)&local_8), BVar2 != 0)
       ) {
      if (local_8 == (int *)0x103) {
        return 1;
      }
      CloseHandle(*(HANDLE *)*param_1);
      *(undefined4 *)*param_1 = 0;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(*param_1 + 8);
    }
    uVar3 = 2;
    *(undefined4 *)(*param_1 + 4) = 2;
  }
  return uVar3;
}

