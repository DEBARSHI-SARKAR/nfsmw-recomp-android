/* speed.exe 00848d60 FUN_00848d60; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 * calls 007d6cb0 __security_check_cookie
 * calls 007c97c0 FUN_007c97c0
 * calls 0083e2e0 FUN_0083e2e0
 * calls 00852e60 FUN_00852e60
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00848d60(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_stack_0000001c;
  undefined *puVar6;
  char *pcVar7;
  char local_7c [20];
  char local_68 [68];
  char local_24 [32];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  uVar5 = 9;
  uVar1 = FUN_0083a670(in_stack_0000001c,&DAT_008b6f04,local_24,0x1f,&DAT_00890978);
  FUN_0083b210(uVar1);
  if ((local_24[0] == 'I') || (local_24[0] == 'R')) {
    uVar1 = FUN_0083a670(in_stack_0000001c,&DAT_008c681c,local_68,0x41,&DAT_00890978);
    FUN_0083b210(uVar1);
    uVar1 = 0x11;
    pcVar7 = local_7c;
    puVar6 = &DAT_008c6efc;
  }
  else {
    if ((local_24[0] != 'A') && (local_24[0] != 'D')) {
      return 0xfffffffe;
    }
    uVar1 = 0x41;
    pcVar7 = local_68;
    puVar6 = &DAT_008b68c4;
  }
  uVar1 = FUN_0083a670(in_stack_0000001c,puVar6,pcVar7,uVar1,&DAT_00890978);
  FUN_0083b210(uVar1);
  puVar2 = (undefined1 *)FUN_007c97c0(local_68,0x40);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  puVar2 = (undefined1 *)FUN_007c97c0(local_68,0x2f);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  puVar2 = (undefined1 *)FUN_007c97c0(local_68,0x2e);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  if (*(int *)(param_1 + 0x8c8) == 0) {
    return 0xfffffffe;
  }
  iVar3 = FUN_00852e60(*(int *)(param_1 + 0x8c8),local_68);
  if (iVar3 == 0) {
    return 0xfffffffe;
  }
  iVar3 = FUN_0083e2e0(*(undefined4 *)(param_1 + 0x8cc),iVar3);
  if (iVar3 == 0) {
    return 0xfffffffe;
  }
  if (local_24[0] == 'I') {
    uVar5 = 0x400000;
    *(uint *)(iVar3 + 0xf8) = *(uint *)(iVar3 + 0xf8) | 0x400000;
    _strncpy((char *)(iVar3 + 0x108),local_7c,0x11);
    goto LAB_00848f40;
  }
  if (local_24[0] == 'A') {
    uVar5 = 8;
LAB_00848f32:
    uVar4 = *(uint *)(iVar3 + 0xf8) | uVar5;
  }
  else if (local_24[0] == 'D') {
    uVar5 = 0x400;
    uVar4 = *(uint *)(iVar3 + 0xf8) & 0xfffdffff;
  }
  else {
    if (local_24[0] != 'R') {
      if (local_24[0] != 'G') goto LAB_00848f40;
      uVar5 = 0x8000;
      goto LAB_00848f32;
    }
    uVar5 = 0x800;
    uVar4 = *(uint *)(iVar3 + 0xf8) & 0xffbfffff;
    *(undefined1 *)(iVar3 + 0x108) = 0;
  }
  *(uint *)(iVar3 + 0xf8) = uVar4;
LAB_00848f40:
  if (*(code **)(param_1 + 0x8f4) != (code *)0x0) {
    (**(code **)(param_1 + 0x8f4))(param_1,iVar3,0x67696e76,uVar5,*(undefined4 *)(param_1 + 0x8f8));
  }
  return 0;
}

