/* speed.exe 007f39e4 FUN_007f39e4; analysis pseudocode, not buildable source.
 * calls 007f3611 FUN_007f3611
 * calls 007e5a50 _getenv
 * calls 007f37e7 FUN_007f37e7
 */

void FUN_007f39e4(void)

{
  char *pcVar1;
  
  FUN_007f3611();
  pcVar1 = _getenv("PRINT_CHANNEL");
  if (pcVar1 != (char *)0x0) {
    FUN_007f37e7();
    return;
  }
  return;
}

