/* speed.exe 00850500 FUN_00850500; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 0084fd30 FUN_0084fd30
 * calls 0084fef0 FUN_0084fef0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall FUN_00850500(int param_1)

{
  if ((*(int *)(param_1 + 0xcc) != *(int *)(param_1 + 200)) &&
     (*(int *)(param_1 + 0xd0) == *(int *)(param_1 + 200))) {
    *(int *)(param_1 + 0xd0) =
         ((*(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0)) + *(int *)(param_1 + 0xd0)) %
         *(int *)(param_1 + 0xc4);
    FUN_0084fef0();
    return;
  }
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xb0);
  FUN_0084fd30();
  return;
}

