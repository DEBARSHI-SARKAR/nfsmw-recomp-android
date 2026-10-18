/* speed.exe 00848240 FUN_00848240; analysis pseudocode, not buildable source.
 * calls 008521b0 FUN_008521b0
 * calls 007d6cb0 __security_check_cookie
 * calls 0083a980 FUN_0083a980
 * calls 0083c880 FUN_0083c880
 * calls 00846d50 FUN_00846d50
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00848240(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if (*param_2 == '\0') {
    return 0xfffffffd;
  }
  puVar2 = (undefined4 *)(param_1 + 0x9d0);
  for (iVar1 = 0xcc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  FUN_00846d50(param_3,param_4);
  local_104[0] = 0;
  FUN_0083a980(local_104,0xff,&DAT_008c6cf4,3);
  FUN_0083c880(local_104,0xff,&DAT_008c6e94,param_1 + 0x6b4);
  FUN_0083c880(local_104,0xff,&DAT_008b68c4,param_2);
  FUN_0083a980(local_104,0xff,&DAT_008c6f04,0x14);
  *(undefined4 *)(param_1 + 0x9cc) = 9999;
  FUN_008521b0(*(undefined4 *)(param_1 + 0xc),0x55534348,0,local_104,0xffffffff);
  return 0;
}

