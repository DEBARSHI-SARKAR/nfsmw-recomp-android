/* speed.exe 00857410 FUN_00857410; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 008572d0 FUN_008572d0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __fastcall FUN_00857410(int param_1)

{
  if ((*(int *)(param_1 + 0xd0) != 1) && (*(int *)(param_1 + 0xd0) != 7)) {
    FUN_008572d0();
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 7;
  }
  return 0;
}

