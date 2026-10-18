/* speed.exe 00864a60 FUN_00864a60; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000001f Sleep
 * calls EXTERNAL:00000067 DeleteCriticalSection
 * calls 0078af60 thunk_FUN_004655f0
 * calls 00864f10 FUN_00864f10
 */

void FUN_00864a60(int param_1)

{
  int iVar1;
  
  if (DAT_009c4f78 != 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    iVar1 = *(int *)(param_1 + 0x6c);
    while (iVar1 != 0) {
      Sleep(0x14);
      iVar1 = *(int *)(param_1 + 0x6c);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
    FUN_00864f10(param_1);
    thunk_FUN_004655f0(param_1);
    DAT_009c4f78 = 0;
  }
  return;
}

