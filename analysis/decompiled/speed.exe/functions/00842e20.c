/* speed.exe 00842e20 FUN_00842e20; analysis pseudocode, not buildable source.
 * calls 0083c880 FUN_0083c880
 * calls 008550f0 FUN_008550f0
 * calls 007d6cb0 __security_check_cookie
 * calls 007c97c0 FUN_007c97c0
 * calls 0083a850 FUN_0083a850
 * calls 00855b30 FUN_00855b30
 * calls 0084bcb0 GetTickCount
 * calls 008421c0 FUN_008421c0
 * calls 0083a670 FUN_0083a670
 * calls 0083a980 FUN_0083a980
 * calls 0083b210 FUN_0083b210
 * calls 0083c650 FUN_0083c650
 * calls 00842780 FUN_00842780
 * calls 0083abc0 FUN_0083abc0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00842e20(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  int local_248;
  char local_244 [64];
  char local_204 [256];
  undefined1 local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if (param_1[0x83] != 0x68747470) {
    *(undefined1 *)*param_1 = 0;
    param_1[0x484] = 0;
    return;
  }
  param_1[0x48f] = 5;
  DVar3 = GetTickCount();
  param_1[0x48e] = DVar3 + 3000;
  DVar3 = GetTickCount();
  param_1[0x48d] = DVar3 + 1000;
  iVar4 = FUN_008421c0(param_1,*param_1,"$last");
  param_1[0x48a] = iVar4 + 1;
  puVar6 = (undefined1 *)*param_1 + (param_1[1] - (iVar4 + 1)) + -1;
  param_1[0x48b] = puVar6;
  param_1[0x48c] = 0;
  if ((int)puVar6 < 0x100) {
    *(undefined1 *)*param_1 = 0;
    param_1[0x484] = 0;
    return;
  }
  puVar1 = param_1 + 0x84;
  uVar5 = FUN_0083a670(puVar1,"URL-FAKE",0);
  iVar4 = FUN_0083abc0(uVar5);
  if (0 < iVar4) {
    param_1[0x48f] = 1;
    return;
  }
  *(undefined1 *)param_1[0x48a] = 0;
  FUN_0083c650(puVar1,0x1000,param_1 + 0x43);
  FUN_0083a980(puVar1,0x1000,"MAXLEN",param_1[0x48b]);
  uVar5 = FUN_0083a670(puVar1,&DAT_008c6b8c,local_244,0x40,&DAT_00890978);
  iVar4 = FUN_0083b210(uVar5);
  if (0 < iVar4) {
    iVar4 = FUN_008421c0(param_1,*param_1,local_244);
    puVar6 = (undefined1 *)FUN_008421c0(param_1,iVar4,"$tail");
    if ((iVar4 != 0) && (puVar6 != (undefined1 *)0x0)) {
      pcVar7 = local_244;
      *puVar6 = 0;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      FUN_0083c650(puVar1,0x1000,pcVar7 + iVar4 + (2 - (int)(local_244 + 1)));
      *puVar6 = 0x25;
    }
  }
  local_248 = 1;
  uVar5 = FUN_0083a850(puVar1,&DAT_008b6ce0,1,local_244,0x40,&DAT_00890978);
  iVar4 = FUN_0083b210(uVar5);
  while ((0 < iVar4 &&
         (puVar6 = (undefined1 *)FUN_007c97c0(local_244,0x2e), puVar6 != (undefined1 *)0x0))) {
    *puVar6 = 0;
    iVar4 = FUN_008421c0(param_1,*param_1,local_244);
    if (iVar4 != 0) {
      pcVar7 = local_244;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      uVar5 = FUN_0083a670(pcVar7 + iVar4 + (2 - (int)(local_244 + 1)),puVar6 + 1,local_104,0x100,
                           &DAT_00890978);
      FUN_0083b210(uVar5);
      *puVar6 = 0x2e;
      FUN_0083c880(puVar1,0x1000,local_244,local_104);
    }
    local_248 = local_248 + 1;
    uVar5 = FUN_0083a850(puVar1,&DAT_008b6ce0,local_248,local_244,0x40,&DAT_00890978);
    iVar4 = FUN_0083b210(uVar5);
  }
  uVar5 = FUN_0083a670(puVar1,&PTR_caseD_4_008c6b88,local_204,0x100,&DAT_00890978);
  FUN_0083b210(uVar5);
  uVar5 = FUN_0083a670(puVar1,"URL-GET",local_204,0x100,local_204);
  FUN_0083b210(uVar5);
  uVar5 = FUN_0083a670(puVar1,"URL-POST",local_204,0x100,local_204);
  FUN_0083b210(uVar5);
  if (local_204[0] != '\0') {
    uVar5 = FUN_0083a670(puVar1,&DAT_008b6d00,10);
    iVar4 = FUN_0083abc0(uVar5);
    if (iVar4 < 2) {
      iVar4 = 2;
    }
    else if (0x3c < iVar4) {
      iVar4 = 0x3c;
    }
    DVar3 = GetTickCount();
    param_1[0x48d] = DVar3 + iVar4 * 1000;
    uVar5 = FUN_0083a670(puVar1,&DAT_008c6b6c,3);
    iVar4 = FUN_0083abc0(uVar5);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0x3c < iVar4) {
      iVar4 = 0x3c;
    }
    DVar3 = GetTickCount();
    param_1[0x48e] = DVar3 + iVar4 * 1000;
    FUN_00842780(local_204,0x100,puVar1);
    iVar4 = FUN_0083a670(puVar1,"URL-GET");
    if (iVar4 == 0) {
      iVar4 = FUN_00855b30(param_1[0x489],local_204,puVar1,0xffffffff);
    }
    else {
      iVar4 = FUN_008550f0(param_1[0x489],local_204,0);
    }
    if (-1 < iVar4) {
      param_1[0x48f] = 2;
      return;
    }
    *(undefined1 *)*param_1 = 0;
    param_1[0x484] = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[0x484] = 0;
  return;
}

