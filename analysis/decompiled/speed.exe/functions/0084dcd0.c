/* speed.exe 0084dcd0 FUN_0084dcd0; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 0084dab0 FUN_0084dab0
 * calls 0084d590 FUN_0084d590
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0084dcd0(int param_1,byte *param_2)

{
  byte bVar1;
  byte local_44 [64];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if (*(int *)(param_1 + 0x94) == 2) {
    if (((char)*param_2 < '0') || ('9' < (char)*param_2)) {
      FUN_0084dab0(param_1,param_2,local_44,0x40,0);
      param_2 = local_44;
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
    bVar1 = *param_2;
    while (('/' < (char)bVar1 && ((char)bVar1 < ':'))) {
      param_2 = param_2 + 1;
      *(uint *)(param_1 + 0x80) = (bVar1 & 0xf) + *(int *)(param_1 + 0x80) * 10;
      bVar1 = *param_2;
    }
    *(undefined1 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0x94) = 4;
    FUN_0084d590(*(undefined4 *)(param_1 + 0x80),2,param_1,0x4000,0,0);
    return 0;
  }
  return 0xfffffffe;
}

