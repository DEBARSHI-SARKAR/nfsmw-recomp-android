/* speed.exe 00846dc0 FUN_00846dc0; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 * calls 007c97c0 FUN_007c97c0
 * calls 00852da0 FUN_00852da0
 * calls 007d6cb0 __security_check_cookie
 * calls 0083e150 FUN_0083e150
 * calls 0083e2e0 FUN_0083e2e0
 * calls 00852e60 FUN_00852e60
 * calls 008530f0 FUN_008530f0
 * calls 0083abc0 FUN_0083abc0
 * calls 0083e220 FUN_0083e220
 * calls 00846260 FUN_00846260
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_00846dc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  char local_24 [32];
  undefined4 local_4;
  
  puVar2 = param_1;
  local_4 = DAT_00906980;
  if (param_1[0x232] == 0) {
    uVar3 = FUN_008530f0(1000,2000);
    param_1[0x232] = uVar3;
  }
  if (param_1[0x233] == 0) {
    uVar3 = FUN_0083e150(100,100,0);
    param_1[0x233] = uVar3;
  }
  param_1 = (undefined4 *)0x0;
  uVar3 = FUN_0083a670(param_7,&DAT_008c6cf4,0);
  iVar4 = FUN_0083abc0(uVar3);
  if (iVar4 == 1) {
    param_1 = (undefined4 *)0x4;
  }
  else if (iVar4 == 2) {
    param_1 = (undefined4 *)0x200;
  }
  uVar3 = FUN_0083a670(param_7,&DAT_008b68c4,local_24,0x20,&DAT_00890978);
  FUN_0083b210(uVar3);
  puVar5 = (undefined1 *)FUN_007c97c0(local_24,0x40);
  if (puVar5 != (undefined1 *)0x0) {
    *puVar5 = 0;
  }
  puVar5 = (undefined1 *)FUN_007c97c0(local_24,0x2f);
  if (puVar5 != (undefined1 *)0x0) {
    *puVar5 = 0;
  }
  puVar5 = (undefined1 *)FUN_007c97c0(local_24,0x2e);
  if (puVar5 != (undefined1 *)0x0) {
    *puVar5 = 0;
  }
  pcVar6 = local_24;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (pcVar6 == local_24 + 1) {
    return iVar4;
  }
  if ((puVar2[8] == 0) && (iVar7 = FUN_007c97c0(local_24,0x2e), iVar7 != 0)) {
    return iVar4;
  }
  iVar7 = FUN_00852e60(puVar2[0x232],local_24);
  if (iVar7 == 0) {
    pcVar6 = local_24;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (0x20 < (uint)((int)pcVar6 - (int)(local_24 + 1))) {
      return iVar4;
    }
    puVar8 = (undefined4 *)(*(code *)*puVar2)(0x11c);
    puVar10 = puVar8;
    for (iVar7 = 0x47; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    pcVar6 = local_24;
    iVar7 = (int)puVar8 - (int)pcVar6;
    do {
      cVar1 = *pcVar6;
      pcVar6[iVar7] = cVar1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar7 = FUN_0083e220(puVar2[0x233],puVar8);
    FUN_00852da0(puVar2[0x232],puVar8,iVar7);
    if (iVar7 == 0) {
      return iVar4;
    }
  }
  iVar7 = FUN_0083e2e0(puVar2[0x233],iVar7);
  if (iVar7 != 0) {
    if (param_1 != (undefined4 *)0x0) {
      *(uint *)(iVar7 + 0xf8) = *(uint *)(iVar7 + 0xf8) | (uint)param_1;
    }
    uVar9 = FUN_00846260(puVar2,param_2,param_3,param_4,param_5,param_6,param_7);
    uVar9 = *(uint *)(iVar7 + 0xf8) | uVar9;
    *(uint *)(iVar7 + 0xf8) = uVar9;
    if (((uVar9 & 0x80000) != 0) || ((uVar9 & 0x40000) != 0)) {
      *(uint *)(iVar7 + 0xf8) = uVar9 & 0xfffffffb;
    }
  }
  return iVar4;
}

