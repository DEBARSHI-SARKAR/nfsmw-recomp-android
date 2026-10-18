/* speed.exe 007ec3ea FUN_007ec3ea; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000009a GetExitCodeThread
 */

bool FUN_007ec3ea(DWORD param_1)

{
  BOOL BVar1;
  
  BVar1 = GetExitCodeThread(*(HANDLE *)(param_1 + 4),&param_1);
  if (BVar1 != 0) {
    return param_1 != 0x103;
  }
  return false;
}

