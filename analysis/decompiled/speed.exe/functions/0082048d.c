/* speed.exe 0082048d FUN_0082048d; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000c2 GetForegroundWindow
 */

void FUN_0082048d(void)

{
  HWND pHVar1;
  
  pHVar1 = GetForegroundWindow();
  if (pHVar1 == (HWND)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00820497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    GetDesktopWindow();
    return;
  }
  return;
}

