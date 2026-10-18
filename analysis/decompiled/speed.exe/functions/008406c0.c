/* speed.exe 008406c0 FUN_008406c0; analysis pseudocode, not buildable source.
 * calls 0083c880 FUN_0083c880
 * calls 0083e390 FUN_0083e390
 * calls 0084c110 FUN_0084c110
 * calls 00852710 FUN_00852710
 * calls 007d6cb0 __security_check_cookie
 * calls 0083e2e0 FUN_0083e2e0
 * calls 00844a10 FUN_00844a10
 * calls 00844a30 FUN_00844a30
 * calls 00844970 FUN_00844970
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 * calls 0083a980 FUN_0083a980
 * calls 00840650 FUN_00840650
 * calls 0083e3b0 FUN_0083e3b0
 * calls 00840050 FUN_00840050
 * calls 00844d40 FUN_00844d40
 * calls 0083c650 FUN_0083c650
 * calls 0083a630 FUN_0083a630
 * calls 0083abc0 FUN_0083abc0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_008406c0(int param_1,int param_2,undefined1 *param_3,code *param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined1 *local_3a8;
  undefined4 local_3a4;
  undefined1 local_394 [16];
  undefined1 local_384 [128];
  undefined1 local_304 [768];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  iVar1 = *(int *)(param_1 + 8);
  if ((((iVar1 != 0x69646c65) && (iVar1 != 0x61757468)) && (iVar1 != 0x61636374)) &&
     (iVar1 != 0x736b6579)) {
    return 0xffffffff;
  }
  if (((param_2 == 0x6d616472) && (param_4 != (code *)0x0)) &&
     (iVar1 = FUN_00844a30(param_1,1), iVar1 != 0)) {
    uVar2 = FUN_00844a10(param_1,1);
    iVar1 = FUN_0083e390(uVar2);
    local_384[0] = 0;
    uVar3 = FUN_0083a670(param_3,&DAT_008b6d40,local_394,0x10,&DAT_00890978);
    FUN_0083b210(uVar3);
    iVar8 = 0;
    if (0 < iVar1) {
      do {
        iVar4 = FUN_0083e3b0(uVar2,iVar8);
        iVar5 = FUN_0084c110(iVar4 + 8,local_394);
        if (iVar5 == 0) {
          FUN_0083c880(local_384,0x80,"MADDR",iVar4 + 0x1e0);
          local_3b8 = 0;
          local_3b4 = 0;
          local_3ac = 0;
          local_3a4 = 0;
          local_3a8 = local_384;
          local_3b0 = 0x6d616472;
          (*param_4)(param_1,&local_3b8,param_5);
          return 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar1);
    }
  }
  puVar6 = (undefined4 *)FUN_00840050(param_2,param_4,param_5);
  if (puVar6 != (undefined4 *)0x0) {
    if (((param_2 == 0x61757468) || (param_2 == 0x61636374)) || (param_2 == 0x70617373)) {
      FUN_0083a630(local_304,0x300,param_1 + 0x48);
      FUN_0083c650(local_304,0x300,param_3);
      uVar2 = FUN_0083a670(local_304,&DAT_008b6d24,(int)&local_3b8 + 1,0x1f,&DAT_00890978);
      FUN_0083b210(uVar2);
      if (*(char *)(param_1 + 0x38) == '\0') {
        FUN_0083c880(local_304,0x300,&DAT_008b6d24,(int)&local_3b8 + 1);
        FUN_0083a980(local_304,0x300,&DAT_008c68c8,*(undefined4 *)(param_1 + 0x1844));
      }
      else {
        local_3b8 = CONCAT31(local_3b8._1_3_,0x7e);
        FUN_00852710((int)&local_3b8 + 1,0x1f,(int)&local_3b8 + 1,param_1 + 0x38,0x10,0x10);
        FUN_0083c880(local_304,0x300,&DAT_008b6d24,&local_3b8);
      }
      param_3 = local_304;
    }
    if (param_2 == 0x736e6170) {
      uVar2 = FUN_0083a670(param_3,&DAT_008b6e20,0);
      iVar1 = FUN_0083abc0(uVar2);
      if ((4 < iVar1) && (iVar1 < 0x17)) {
        FUN_00844970(param_1,iVar1);
      }
      *(undefined4 *)(param_1 + 0x1894) = 0;
      *(int *)(param_1 + 0x1898) = *(int *)(param_1 + 0x1898) + 1;
    }
    else if ((param_2 == 0x6d6f7665) && (iVar1 = FUN_00844a30(param_1,0), iVar1 != 0)) {
      uVar2 = FUN_0083a670(param_3,&DAT_008b4cbc,&local_3b8,0x24,&DAT_00890978);
      FUN_0083b210(uVar2);
      if ((char)local_3b8 != '\0') {
        uVar2 = FUN_00844a10(param_1,0);
        iVar1 = FUN_00844d40(param_1,0,&local_3b8);
        if (iVar1 != 0) {
          puVar7 = (undefined4 *)FUN_0083e2e0(uVar2,iVar1);
          FUN_0083a630(local_304,0x300,param_3);
          FUN_0083a980(local_304,0x300,"IDENT",*puVar7);
          param_3 = local_304;
        }
      }
    }
    FUN_00840650(param_1,param_2,param_3,*puVar6);
    return *puVar6;
  }
  return 0xfffffffe;
}

