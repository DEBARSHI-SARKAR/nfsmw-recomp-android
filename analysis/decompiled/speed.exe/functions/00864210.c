/* speed.exe 00864210 FUN_00864210; analysis pseudocode, not buildable source.
 * calls 00864040 FUN_00864040
 * calls 007d6cb0 __security_check_cookie
 * calls 00863e80 FUN_00863e80
 * calls 00864140 FUN_00864140
 * calls 007c6610 FUN_007c6610
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00864210(undefined4 param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int local_5c;
  int local_58;
  
  iVar3 = FUN_00863e80();
  while( true ) {
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_00864040();
    if (iVar3 < 0) break;
    local_5c = 0;
    if (0 < local_58) {
      do {
        FUN_00864140(iVar3);
        local_5c = local_5c + 1;
      } while (local_5c < local_58);
    }
    param_2 = (char *)FUN_007c6610(param_2,&DAT_008b9150);
    if (param_2 != (char *)0x0) {
      cVar2 = *param_2;
      while (cVar2 == '\n') {
        pcVar1 = param_2 + 1;
        param_2 = param_2 + 1;
        cVar2 = *pcVar1;
      }
    }
    iVar3 = FUN_00863e80();
  }
  return 0xffffffff;
}

