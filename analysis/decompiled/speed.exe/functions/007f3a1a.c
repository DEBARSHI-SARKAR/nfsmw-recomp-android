/* speed.exe 007f3a1a FUN_007f3a1a; analysis pseudocode, not buildable source.
 * calls 007e5a50 _getenv
 * calls 007f37e7 FUN_007f37e7
 */

void FUN_007f3a1a(int param_1,undefined *param_2)

{
  char *pcVar1;
  
  (&PTR_s_print_ch_all_00907fe0)[param_1 * 2] = param_2;
  pcVar1 = _getenv("PRINT_CHANNEL");
  if (pcVar1 != (char *)0x0) {
    FUN_007f37e7();
    return;
  }
  return;
}

