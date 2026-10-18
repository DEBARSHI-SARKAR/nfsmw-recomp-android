/* speed.exe 00841580 FUN_00841580; analysis pseudocode, not buildable source.
 * calls 0083af60 FUN_0083af60
 * calls 008447d0 FUN_008447d0
 * calls 007d6cb0 __security_check_cookie
 * calls 00852440 FUN_00852440
 * calls 008519e0 FUN_008519e0
 * calls 0083a670 FUN_0083a670
 * calls 00851bf0 FUN_00851bf0
 * calls 0083b210 FUN_0083b210
 * calls 008521b0 FUN_008521b0
 * calls 00851aa0 FUN_00851aa0
 * calls 0083a630 FUN_0083a630
 * calls 0083abc0 FUN_0083abc0
 * calls 00841160 FUN_00841160
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __fastcall FUN_00841580(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if (param_4 == -1) {
    if (param_1 == -1) {
      FUN_0083a630(local_104,0x100,param_2 + 0x12);
      FUN_008521b0(*param_2,0x40746963,0,"RC4+MD5-V2",0xffffffff);
      FUN_008521b0(*param_2,0x40646972,0,local_104,0xffffffff);
    }
    else if (param_1 == -0x1010102) {
      iVar2 = FUN_008519e0(*param_2,0x63727970);
      if (iVar2 != 0) {
        FUN_00851bf0(*param_2,0);
        param_2[2] = 0x696e6974;
        return 0xffffffff;
      }
      FUN_00841160(0x72646972,0);
      return 0xffffffff;
    }
  }
  else {
    if (param_4 == 0x40746963) {
      FUN_00851bf0(*param_2);
      return 0;
    }
    if (param_4 == 0x40646972) {
      uVar1 = FUN_008519e0(*param_2,0x6c616472);
      param_2[0x623] = uVar1;
      iVar2 = FUN_0083a670();
      if (iVar2 == 0) {
        uVar1 = FUN_0083a670();
        uVar1 = FUN_0083af60(uVar1,iVar2);
        uVar4 = 0;
        param_2[0x60f] = uVar1;
        uVar1 = FUN_0083a670();
        uVar1 = FUN_0083abc0(uVar1,uVar4);
        param_2[0x60e] = uVar1;
      }
      uVar4 = 0;
      uVar1 = FUN_0083a670();
      uVar1 = FUN_0083abc0(uVar1,uVar4);
      puVar5 = &DAT_00890978;
      uVar4 = 0x40;
      puVar3 = param_2 + 0x612;
      param_2[0x611] = uVar1;
      uVar1 = FUN_0083a670();
      FUN_0083b210(uVar1,puVar3,uVar4,puVar5);
      FUN_00851aa0(*param_2);
      if (param_2[0x60f] == 0) {
        puVar6 = &DAT_00890978;
        uVar4 = 0x100;
        puVar5 = local_104;
        uVar1 = FUN_0083a670();
        FUN_0083b210(uVar1,puVar5,uVar4,puVar6);
        FUN_00841160(0x646f776e,local_104);
        return 0;
      }
      param_2[2] = 0x636f6e6e;
      if (param_2[1] != 0) {
        FUN_008447d0(param_2[1],param_2[0x60f],&LAB_00840410,param_2);
      }
      FUN_00852440(*param_2,0,param_2[0x60f],param_2[0x60e]);
      return 0xffffffff;
    }
  }
  return 0;
}

