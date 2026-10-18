/* speed.exe 00848f80 FUN_00848f80; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 * calls 007c97c0 FUN_007c97c0
 * calls 007d6cb0 __security_check_cookie
 * calls 00847450 FUN_00847450
 * calls 0083e2e0 FUN_0083e2e0
 * calls 00852e60 FUN_00852e60
 * calls 0083ad80 FUN_0083ad80
 * calls 008474e0 FUN_008474e0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00848f80(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 in_stack_0000001c;
  char local_230 [248];
  uint local_138;
  char local_110 [260];
  undefined4 local_c;
  
  local_c = DAT_00906980;
  pcVar5 = local_230;
  for (iVar4 = 0x47; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  uVar1 = FUN_0083a670(in_stack_0000001c,&DAT_008b68c4,local_110,0xff,&DAT_00890978);
  FUN_0083b210(uVar1);
  puVar2 = (undefined1 *)FUN_007c97c0(local_110,0x40);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  puVar2 = (undefined1 *)FUN_007c97c0(local_110,0x2f);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  puVar2 = (undefined1 *)FUN_007c97c0(local_110,0x2e);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  iVar4 = 0;
  do {
    pcVar5 = local_110 + iVar4;
    local_230[iVar4] = *pcVar5;
    iVar4 = iVar4 + 1;
  } while (*pcVar5 != '\0');
  uVar1 = FUN_0083a670(in_stack_0000001c,&DAT_008c6eb8,local_110,0xff,&DAT_008c6f14);
  FUN_0083b210(uVar1);
  if (local_110[0] == 'D') {
    if ((((*(int *)(param_1 + 0x8c8) == 0) ||
         (iVar4 = FUN_00852e60(*(int *)(param_1 + 0x8c8),local_230), iVar4 == 0)) ||
        (iVar4 = FUN_0083e2e0(*(undefined4 *)(param_1 + 0x8cc),iVar4), iVar4 == 0)) ||
       (((*(uint *)(iVar4 + 0xf8) & 0x10000) == 0 || ((*(uint *)(iVar4 + 0xf8) & 0x80000) == 0)))) {
      FUN_008474e0(param_1,local_230,0xc0004);
      return 0;
    }
  }
  else {
    uVar1 = FUN_0083a670(in_stack_0000001c,&DAT_008b6e64,0);
    uVar3 = FUN_0083ad80(uVar1);
    local_138 = local_138 | (uVar3 & 0x100000) << 4 | uVar3 & 0xc0000;
    if (((((local_110[0] == 'X') || (local_110[0] == 'A')) && (*(int *)(param_1 + 0x8c8) != 0)) &&
        ((iVar4 = FUN_00852e60(*(int *)(param_1 + 0x8c8),local_230), iVar4 != 0 &&
         (iVar4 = FUN_0083e2e0(*(undefined4 *)(param_1 + 0x8cc),iVar4), iVar4 != 0)))) &&
       ((((*(uint *)(iVar4 + 0xf8) & 0x80000) != 0 && ((local_138 & 0x80000) == 0)) ||
        (((*(uint *)(iVar4 + 0xf8) & 0x40000) != 0 && ((local_138 & 0x40000) == 0)))))) {
      local_138 = local_138 | 4;
      *(uint *)(iVar4 + 0xf8) = *(uint *)(iVar4 + 0xf8) & 0xfff3ffff;
    }
    iVar4 = FUN_00847450(param_1,local_230);
    if (iVar4 == 0) {
      return 0xfffffffe;
    }
  }
  return 0;
}

