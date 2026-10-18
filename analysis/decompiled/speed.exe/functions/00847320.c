/* speed.exe 00847320 FUN_00847320; analysis pseudocode, not buildable source.
 * calls 008521b0 FUN_008521b0
 * calls 007d6cb0 __security_check_cookie
 * calls 0083a980 FUN_0083a980
 * calls 0083c880 FUN_0083c880
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_00847320(int param_1,undefined4 param_2,int param_3,char *param_4,int param_5,undefined4 param_6
            )

{
  char cVar1;
  char *pcVar2;
  undefined1 local_100 [252];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  local_100[0] = 0;
  FUN_0083c880(local_100,0xfa,&DAT_008c6ee4,param_1 + 0x6b4);
  if (param_3 == 0x47525350) {
    FUN_0083c880(local_100,0xfa,&DAT_008c6e94,param_1 + 0x128);
  }
  FUN_0083a980(local_100,0xfa,&DAT_008c6cf4,param_6);
  FUN_0083c880(local_100,0xfa,&DAT_008b68c4,param_2);
  pcVar2 = param_4;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (pcVar2 != param_4 + 1) {
    FUN_0083c880(local_100,0xfa,&DAT_008c6edc,param_4);
  }
  if (param_5 == 1) {
    FUN_0083c880(local_100,0xfa,&DAT_008c6ed4,&DAT_008c2774);
  }
  FUN_008521b0(*(undefined4 *)(param_1 + 0xc),param_3,0,local_100,0xffffffff);
  return 0;
}

