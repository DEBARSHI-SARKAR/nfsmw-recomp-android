/* speed.exe 008489a0 FUN_008489a0; analysis pseudocode, not buildable source.
 * calls 008521b0 FUN_008521b0
 * calls 00847320 FUN_00847320
 * calls 007d6cb0 __security_check_cookie
 * calls 0083a980 FUN_0083a980
 * calls 0083c880 FUN_0083c880
 * calls 00846d50 FUN_00846d50
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_008489a0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_100 [252];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  puVar1 = (&PTR_DAT_0090d38c)[param_3];
  iVar4 = 0x47525350;
  switch(param_3) {
  case 0:
    uVar2 = *(uint *)(param_2 + 0xf8) | 8;
    break;
  case 1:
    uVar2 = *(uint *)(param_2 + 0xf8) & 0xfbbf73f7;
    break;
  case 2:
    iVar4 = 0x4752564b;
    if (param_2 == 0) goto LAB_00848a36;
    uVar2 = *(uint *)(param_2 + 0xf8) & 0xfbfd73f7;
    break;
  default:
    return 0xfffffffd;
  case 4:
    uVar2 = *(uint *)(param_2 + 0xf8) & 0xfbbd73f7;
  }
  *(uint *)(param_2 + 0xf8) = uVar2;
LAB_00848a36:
  uVar3 = FUN_00846d50(param_4,param_5);
  if (iVar4 != 0x4752564b) {
    uVar3 = FUN_00847320(param_1,param_2,iVar4,puVar1,0,uVar3);
    return uVar3;
  }
  local_100[0] = 0;
  if (param_2 != 0) {
    FUN_0083c880(local_100,0xfa,&DAT_008b68c4,param_2);
  }
  FUN_0083c880(local_100,0xfa,&DAT_008c6e94,param_1 + 0x128);
  FUN_0083a980(local_100,0xfa,&DAT_008c6cf4,uVar3);
  FUN_0083c880(local_100,0xfa,&DAT_008c6eb0,param_1 + 0xd08);
  FUN_0083a980(local_100,0xfa,&DAT_008b7130,param_7);
  FUN_008521b0(*(undefined4 *)(param_1 + 0xc),0x4752564b,0,local_100,0xffffffff);
  return 0;
}

