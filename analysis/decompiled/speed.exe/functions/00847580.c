/* speed.exe 00847580 FUN_00847580; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 * calls 007c97c0 FUN_007c97c0
 * calls 007d6cb0 __security_check_cookie
 * calls 008463f0 FUN_008463f0
 * calls 0083abc0 FUN_0083abc0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00847580(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 in_stack_0000001c;
  char local_68 [100];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  uVar1 = FUN_0083a670(in_stack_0000001c,&DAT_008c6cf4,0);
  iVar2 = FUN_0083abc0(uVar1);
  if (iVar2 != 3) {
    return 0xffffffff;
  }
  uVar1 = FUN_0083a670(in_stack_0000001c,&DAT_008b68c4,local_68,100,&DAT_00890978);
  FUN_0083b210(uVar1);
  puVar3 = (undefined1 *)FUN_007c97c0(local_68,0x40);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  puVar3 = (undefined1 *)FUN_007c97c0(local_68,0x2f);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  puVar3 = (undefined1 *)FUN_007c97c0(local_68,0x2e);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  iVar2 = 0;
  pcVar4 = (char *)(param_1 + 0x9f7);
  do {
    if (pcVar4[-0x27] == '\0') break;
    if (*pcVar4 == '\0') {
      iVar2 = iVar2 + 1;
      break;
    }
    if (pcVar4[0x27] == '\0') {
      iVar2 = iVar2 + 2;
      break;
    }
    iVar2 = iVar2 + 3;
    pcVar4 = pcVar4 + 0x75;
  } while (iVar2 < 0x15);
  if (iVar2 < 0x14) {
    _strncpy((char *)(iVar2 * 0x27 + param_1 + 0x9d0),local_68,0x11);
    uVar1 = FUN_0083a670(in_stack_0000001c,&DAT_008c6e94,local_68,100,&DAT_00890978);
    FUN_0083b210(uVar1);
    FUN_008463f0(local_68,4,0x10);
  }
  return 0;
}

