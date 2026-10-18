/* speed.exe 0084fda0 FUN_0084fda0; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 0084fd30 FUN_0084fd30
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __fastcall FUN_0084fda0(int param_1)

{
  if (*(int *)(param_1 + 0x94) == 4) {
    FUN_0084fd30();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x94) = 5;
  return 0;
}

