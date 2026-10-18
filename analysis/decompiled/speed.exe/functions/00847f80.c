/* speed.exe 00847f80 FUN_00847f80; analysis pseudocode, not buildable source.
 * calls 008521b0 FUN_008521b0
 * calls 00847b70 FUN_00847b70
 * calls 007d6cb0 __security_check_cookie
 * calls 0083a980 FUN_0083a980
 * calls 0083c880 FUN_0083c880
 * calls 008474e0 FUN_008474e0
 * calls 00846d50 FUN_00846d50
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00847f80(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_108;
  undefined1 local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  local_108 = 0xfffffffe;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x8cc) != 0)) {
    iVar1 = FUN_00847b70(param_1,param_2);
    if (iVar1 != 0) {
      return 0xfffffffd;
    }
    uVar2 = FUN_00846d50(param_3,param_4);
    uVar3 = FUN_008474e0(param_1,param_2,*(undefined4 *)(param_2 + 0xf8));
    if (uVar3 != 0) {
      if ((uVar3 & 4) != 0) {
        local_104[0] = 0;
        FUN_0083a980(local_104,0x100,&DAT_008c6cf4,uVar2);
        FUN_0083c880(local_104,0x100,&DAT_008c6ee4,param_1 + 0x6b4);
        FUN_0083c880(local_104,0x100,&DAT_008c6ef4,&DAT_008a4588);
        FUN_0083c880(local_104,0x100,&DAT_008c6ed4,&DAT_008c2774);
        FUN_0083c880(local_104,0x100,&DAT_008b68c4,param_2);
        FUN_008521b0(*(undefined4 *)(param_1 + 0xc),0x5244454d,0,local_104,0xffffffff);
        FUN_0083a980(local_104,0x100,&DAT_008c6cf4,0xffffffff);
        FUN_008521b0(*(undefined4 *)(param_1 + 0xc),0x5244454c,0,local_104,0xffffffff);
      }
      if ((uVar3 & 0x200) != 0) {
        local_104[0] = 0;
        FUN_0083a980(local_104,0x100,&DAT_008c6cf4,uVar2);
        FUN_0083c880(local_104,0x100,&DAT_008c6ee4,param_1 + 0x6b4);
        FUN_0083c880(local_104,0x100,&DAT_008c6ef4,&DAT_008b6fe8);
        FUN_0083c880(local_104,0x100,&DAT_008b68c4,param_2);
        FUN_008521b0(*(undefined4 *)(param_1 + 0xc),0x5244454c,0,local_104,0xffffffff);
      }
      if ((uVar3 & 0x800000) != 0) {
        local_104[0] = 0;
        FUN_0083c880(local_104,0x100,&DAT_008c6ee4,param_1 + 0x6b4);
        FUN_0083c880(local_104,0x100,&DAT_008b68c4,param_2);
        FUN_008521b0(*(undefined4 *)(param_1 + 0xc),0x5044454c,0,local_104,0xffffffff);
      }
      local_108 = 0;
    }
  }
  return local_108;
}

