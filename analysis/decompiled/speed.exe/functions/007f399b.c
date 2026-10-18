/* speed.exe 007f399b FUN_007f399b; analysis pseudocode, not buildable source.
 * calls 007f3767 FUN_007f3767
 * calls 007e5a50 _getenv
 */

void FUN_007f399b(int param_1,undefined *param_2,undefined4 param_3)

{
  char *pcVar1;
  
  (&PTR_s_print_dev_console_009081e0)[param_1 * 3] = param_2;
  (&DAT_009081e4)[param_1 * 3] = param_3;
  pcVar1 = _getenv("PRINT_DEVICE");
  if (pcVar1 != (char *)0x0) {
    FUN_007f3767();
    return;
  }
  return;
}

