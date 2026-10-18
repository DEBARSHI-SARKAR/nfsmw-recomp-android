/* speed.exe 00847bd0 FUN_00847bd0; analysis pseudocode, not buildable source.
 * calls 008521b0 FUN_008521b0
 * calls 00847b70 FUN_00847b70
 * calls 00847450 FUN_00847450
 * calls 007d6cb0 __security_check_cookie
 * calls 0083a980 FUN_0083a980
 * calls 0083c880 FUN_0083c880
 * calls 00846d50 FUN_00846d50
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00847bd0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_104 [256];
  undefined4 local_4;
  
  uVar2 = 0;
  local_4 = DAT_00906980;
  if ((param_2 != 0) && (*(int *)(param_2 + 0xf8) != 0)) {
    iVar1 = FUN_00847b70(param_1,param_2);
    if (iVar1 == 0) {
      if ((*(uint *)(param_2 + 0xf8) & 0x100000) == 0) {
        uVar2 = FUN_00846d50(param_3,param_4);
      }
      iVar1 = FUN_00847450(param_1,param_2);
      if (iVar1 != 0) {
        local_104[0] = 0;
        FUN_0083c880(local_104,0x100,&DAT_008c6ee4,param_1 + 0x6b4);
        FUN_0083c880(local_104,0x100,&DAT_008b68c4,param_2);
        if ((*(uint *)(param_2 + 0xf8) & 0x80204) != 0) {
          FUN_0083a980(local_104,0x100,&DAT_008c6cf4,uVar2);
          *(uint *)(iVar1 + 0xf8) = *(uint *)(iVar1 + 0xf8) | 0x10000;
          *(undefined4 *)(iVar1 + 0xfc) = uVar2;
        }
        if ((*(byte *)(param_2 + 0xf8) & 4) != 0) {
          FUN_0083c880(local_104,0x100,&DAT_008c6ef4,&DAT_008a4588);
          FUN_0083c880(local_104,0x100,&DAT_008c6ed4,&DAT_008c2774);
          FUN_008521b0(*(undefined4 *)(param_1 + 0xc),0x52414444,0,local_104,0xffffffff);
        }
        if ((*(uint *)(param_2 + 0xf8) & 0x200) != 0) {
          FUN_0083c880(local_104,0x100,&DAT_008c6ef4,&DAT_008b6fe8);
          FUN_008521b0(*(undefined4 *)(param_1 + 0xc),0x52414444,0,local_104,0xffffffff);
        }
        if ((*(uint *)(param_2 + 0xf8) & 0x80000) != 0) {
          FUN_0083c880(local_104,0x100,&DAT_008c6ed4,&DAT_008c2774);
          FUN_008521b0(*(undefined4 *)(param_1 + 0xc),0x5241444d,0,local_104,0xffffffff);
        }
        if ((*(uint *)(param_2 + 0xf8) & 0x800000) != 0) {
          FUN_008521b0(*(undefined4 *)(param_1 + 0xc),0x50414444,0,local_104,0xffffffff);
        }
      }
      return 0;
    }
  }
  return 0xfffffffd;
}

