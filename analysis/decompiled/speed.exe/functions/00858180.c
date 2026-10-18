/* speed.exe 00858180 FUN_00858180; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000057 LeaveCriticalSection
 * calls 00857da0 FUN_00857da0
 * calls EXTERNAL:00000056 EnterCriticalSection
 */

undefined4 FUN_00858180(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0xd0) == 1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1924));
    uVar1 = FUN_00857da0(param_1,param_2);
    if (*(int *)(param_1 + 0xd0) == 5) {
      *(undefined4 *)(param_1 + 0xd0) = 3;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1924));
    return uVar1;
  }
  return 0xfffffffe;
}

