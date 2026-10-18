/* speed.exe 008464a0 FUN_008464a0; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 * calls 007c97c0 FUN_007c97c0
 * calls 007d6cb0 __security_check_cookie
 * calls 0083a630 FUN_0083a630
 * calls 0083c880 FUN_0083c880
 * calls 0083c4e0 FUN_0083c4e0
 * calls 0083abc0 FUN_0083abc0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008464a0(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *unaff_EBX;
  char *pcVar5;
  undefined *puVar6;
  char local_a04 [256];
  char local_904 [256];
  undefined1 local_804 [2048];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  FUN_0083a630(local_804,0x800,unaff_EBX[5]);
  uVar1 = FUN_0083a670(local_804,&DAT_008b68c4,local_a04,0x100,&DAT_00890978);
  FUN_0083b210(uVar1);
  FUN_0083c4e0(local_804,&DAT_008b68c4);
  puVar2 = (undefined1 *)FUN_007c97c0(local_a04,0x40);
  if (puVar2 == (undefined1 *)0x0) {
    pcVar5 = local_a04;
    puVar6 = &DAT_008b68c4;
  }
  else {
    *puVar2 = 0;
    iVar3 = 0;
    do {
      pcVar5 = local_a04 + iVar3;
      local_904[iVar3] = *pcVar5;
      iVar3 = iVar3 + 1;
    } while (*pcVar5 != '\0');
    puVar4 = (undefined1 *)FUN_007c97c0(local_904,0x2e);
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = 0;
    }
    FUN_0083c880(local_804,0x800,&DAT_008b68c4,local_904);
    puVar4 = (undefined1 *)FUN_007c97c0(puVar2 + 1,0x2f);
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = 0;
    }
    FUN_0083c880(local_804,0x800,&DAT_008c6e9c,puVar2 + 1);
    if (puVar4 == (undefined1 *)0x0) goto LAB_008465cf;
    pcVar5 = puVar4 + 1;
    puVar6 = &DAT_008c6e94;
  }
  FUN_0083c880(local_804,0x800,puVar6,pcVar5);
LAB_008465cf:
  unaff_EBX[5] = local_804;
  uVar1 = FUN_0083a670(local_804,&DAT_008b6d00,0);
  uVar1 = FUN_0083abc0(uVar1);
  unaff_EBX[3] = uVar1;
  *unaff_EBX = 0x63686174;
  (**(code **)(param_1 + 0x8d4))(param_1);
  return;
}

