/* speed.exe 007f3952 FUN_007f3952; analysis pseudocode, not buildable source.
 * calls 007f3767 FUN_007f3767
 * calls 007e5a50 _getenv
 */

void FUN_007f3952(int param_1,undefined1 param_2)

{
  char *pcVar1;
  
  if ((&DAT_009081e4)[param_1 * 3] != 0) {
    (&DAT_009081e8)[param_1 * 0xc] = param_2;
    pcVar1 = _getenv("PRINT_DEVICE");
    if (pcVar1 != (char *)0x0) {
      FUN_007f3767();
      return;
    }
  }
  return;
}

