/* speed.exe 00864d30 FUN_00864d30; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 00866b50 FUN_00866b50
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00864d30(undefined4 *param_1,undefined4 param_2)

{
  int unaff_ESI;
  
  FUN_00866b50(*param_1);
  *(undefined4 *)(unaff_ESI + 0x440) = param_2;
  return;
}

