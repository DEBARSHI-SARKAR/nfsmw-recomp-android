/* speed.exe 00836260 FUN_00836260; analysis pseudocode, not buildable source.
 * calls 0083c880 FUN_0083c880
 * calls 008359a0 FUN_008359a0
 * calls 00841220 FUN_00841220
 * calls 007d6cb0 __security_check_cookie
 * calls 008406c0 FUN_008406c0
 * calls 0083fcf0 FUN_0083fcf0
 * calls 0083c7e0 FUN_0083c7e0
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 * calls 0083a980 FUN_0083a980
 * calls 0083c4e0 FUN_0083c4e0
 * calls 0083a630 FUN_0083a630
 * calls 0083abc0 FUN_0083abc0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_00836260(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_44 [64];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if (param_2 != param_1[param_1[0x16] + 6]) {
    return 0xffffffff;
  }
  if (param_1[0x17] != 0) {
    return 0xfffffffe;
  }
  if (param_2 == 1) {
    uVar3 = FUN_0083a670(param_3,&DAT_008b4cbc,local_44,0x40,&DAT_00890978);
    FUN_0083b210(uVar3);
    uVar3 = FUN_0083a670(param_3,&DAT_008b6d08,0);
    uVar3 = FUN_0083abc0(uVar3);
    uVar4 = FUN_0083a670(param_3,&DAT_008b6d00,120000);
    uVar4 = FUN_0083abc0(uVar4);
    iVar5 = FUN_00841220(*param_1,local_44,uVar3,0,0,uVar4);
    if (iVar5 < 0) {
      return 0xffffffff;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 3) {
        puVar1 = param_1 + 0x172;
        uVar3 = FUN_0083a670(param_3,&PTR_LAB_008b6d2c);
        FUN_0083c7e0(puVar1,0x300,&PTR_LAB_008b6d2c,uVar3);
        if (param_1[99] == 0x746f7361) {
          uVar3 = FUN_0083fcf0();
          FUN_0083c880(puVar1,0x300,&DAT_008c6264,uVar3);
          uVar3 = FUN_008406c0(*param_1,0x61757468,puVar1,&LAB_00835e00,param_1);
          param_1[0x1b] = uVar3;
          param_1[0x17] = 1;
        }
        else if ((int)param_1[0x16] < 0xf) {
          param_1[param_1[0x16] + 6] = 4;
        }
      }
      else if (param_2 == 4) {
        puVar1 = param_1 + 0x172;
        uVar3 = FUN_0083a670(param_3,&DAT_008b6d30);
        FUN_0083c7e0(puVar1,0x300,&DAT_008b6d30,uVar3);
        FUN_0083a980(puVar1,0x300,"SHARE",1);
        uVar3 = FUN_0083fcf0();
        FUN_0083c880(puVar1,0x300,&DAT_008c6264,uVar3);
        uVar3 = FUN_008406c0(*param_1,0x61757468,puVar1,&LAB_00835e00,param_1);
        param_1[0x1b] = uVar3;
        param_1[0x17] = 1;
      }
      else if (param_2 == 5) {
        FUN_0083a630(param_1 + 0x172,0x300,param_3);
        FUN_008359a0(0x300,&LAB_00835d80);
      }
      goto LAB_00836531;
    }
    puVar1 = param_1 + 0x172;
    FUN_0083a630(puVar1,0x300,param_3);
    uVar3 = FUN_0083a670(param_3,&DAT_008c6284,param_1 + 0xe4,0x14,&DAT_00890978);
    FUN_0083b210(uVar3);
    uVar3 = FUN_0083a670(puVar1,"MULTIPERS",0);
    uVar2 = FUN_0083abc0(uVar3);
    *(undefined1 *)((int)param_1 + 0x8ea) = uVar2;
    FUN_0083c4e0(puVar1,"MULTIPERS");
    *(undefined1 *)(param_1 + 0x232) = 0;
    uVar3 = FUN_0083fcf0();
    FUN_0083c880(puVar1,0x300,&DAT_008c6264,uVar3);
    uVar3 = FUN_008406c0(*param_1,0x61757468,puVar1,&LAB_00835e00,param_1);
    param_1[0x1b] = uVar3;
  }
  param_1[0x17] = 1;
LAB_00836531:
  if ((*(char *)((int)param_1 + 0x8e9) != '\x01') || (param_4 != 0)) {
    if ((param_1[0x17] != 1) && (param_1[param_1[0x16] + 6] == param_2)) {
      param_1[0x1c] = 0xffffffff;
      return 0;
    }
    param_1[0x1d] = param_4;
    param_1[0x1c] = param_2;
    param_1[0x1e] = param_5;
  }
  return 0;
}

