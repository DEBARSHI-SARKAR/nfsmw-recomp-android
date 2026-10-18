/* speed.exe 00847940 FUN_00847940; analysis pseudocode, not buildable source.
 * calls 008521b0 FUN_008521b0
 * calls 007d6cb0 __security_check_cookie
 * calls 0083e150 FUN_0083e150
 * calls 0083a980 FUN_0083a980
 * calls 008530f0 FUN_008530f0
 * calls 0083c880 FUN_0083c880
 * calls 0083e460 FUN_0083e460
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00847940(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  *(undefined4 *)(param_1 + 0x8dc) = param_2;
  *(undefined4 *)(param_1 + 0x8d8) = param_3;
  if (*(int *)(param_1 + 0x8c8) == 0) {
    uVar2 = FUN_008530f0(1000,2000);
    *(undefined4 *)(param_1 + 0x8c8) = uVar2;
  }
  if (*(int *)(param_1 + 0x8cc) == 0) {
    uVar2 = FUN_0083e150(100,100,0);
    *(undefined4 *)(param_1 + 0x8cc) = uVar2;
  }
  iVar1 = param_1 + 0x6b4;
  local_104[0] = 0;
  FUN_0083c880(local_104,0x100,&DAT_008c6ee4,iVar1);
  FUN_0083a980(local_104,0x100,&DAT_008c6cf4,4);
  FUN_008521b0(*(undefined4 *)(param_1 + 0xc),0x45504754,0,local_104,0xffffffff);
  *(undefined4 *)(param_1 + 0xd04) = 0;
  local_104[0] = 0;
  FUN_0083c880(local_104,0x100,&DAT_008c6ee4,iVar1);
  FUN_0083c880(local_104,0x100,&DAT_008c6ef4,&DAT_008a4588);
  FUN_0083c880(local_104,0x100,&DAT_008c6ed4,&DAT_008c2774);
  FUN_0083c880(local_104,0x100,&DAT_008c6eec,&DAT_008c2774);
  FUN_0083a980(local_104,0x100,&DAT_008c6cf4,1);
  FUN_008521b0(*(undefined4 *)(param_1 + 0xc),0x52474554,0,local_104,0xffffffff);
  local_104[0] = 0;
  FUN_0083c880(local_104,0x100,&DAT_008c6ee4,iVar1);
  FUN_0083c880(local_104,0x100,&DAT_008c6ef4,&DAT_008b6fe8);
  FUN_0083c880(local_104,0x100,&DAT_008c6ed4,&DAT_008c2774);
  FUN_0083c880(local_104,0x100,&DAT_008c6eec,&DAT_008c2774);
  FUN_0083a980(local_104,0x100,&DAT_008c6cf4,2);
  FUN_008521b0(*(undefined4 *)(param_1 + 0xc),0x52474554,0,local_104,0xffffffff);
  FUN_0083e460(*(undefined4 *)(param_1 + 0x8cc),1);
  return *(undefined4 *)(param_1 + 0x8cc);
}

