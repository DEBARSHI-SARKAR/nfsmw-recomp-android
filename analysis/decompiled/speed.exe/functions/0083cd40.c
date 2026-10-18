/* speed.exe 0083cd40 FUN_0083cd40; analysis pseudocode, not buildable source.
 * calls 0083cbf0 FUN_0083cbf0
 * calls 007d6cb0 __security_check_cookie
 * calls 0084bb00 FUN_0084bb00
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0083cd40(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_f4;
  undefined2 local_f0;
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if (param_1 == 0x6f70656e) {
    return DAT_009c3620;
  }
  if (DAT_009c3620 != 1) {
    return -1;
  }
  if (param_1 == 0x61646472) {
    iVar1 = FUN_0084bb00();
    return iVar1;
  }
  if (param_1 != 0x62626e64) {
    if (param_1 == 0x636f6e6e) {
      return (-(uint)(DAT_009c3624 != 0) & 0xfe0afb09) + 0x2d647363;
    }
    if (param_1 != 0x6d616378) {
      if (param_1 == 0x6f6e6c6e) {
        return DAT_009c3628;
      }
      return ((param_1 != 0x74797065) - 1 & 5) - 1;
    }
    FUN_0083cbf0(&local_f4);
    *param_2 = local_f4;
    *(undefined2 *)(param_2 + 1) = local_f0;
  }
  return 1;
}

