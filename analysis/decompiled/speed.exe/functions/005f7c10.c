/* speed.exe 005f7c10 FUN_005f7c10; analysis pseudocode, not buildable source.
 * calls 005ed6f0 FUN_005ed6f0
 * calls 005d0370 FUN_005d0370
 * calls 00454810 FUN_00454810
 * calls 005f3c20 FUN_005f3c20
 * calls 005e2770 FUN_005e2770
 * calls 006269b0 FUN_006269b0
 * calls 005f6ba0 FUN_005f6ba0
 * calls 005f2530 FUN_005f2530
 */

void __fastcall FUN_005f7c10(undefined4 *param_1)

{
  char *pcVar1;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00875d33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a3ae0;
  local_4 = 1;
  pcVar1 = (char *)FUN_00454810(0xe4542e9b,0);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)FUN_006269b0(1);
  }
  if (*pcVar1 != '\0') {
    FUN_005f6ba0(1);
  }
  FUN_005ed6f0();
  FUN_005f2530(*(undefined4 *)(param_1[0xd] + 4));
  *(undefined4 *)(param_1[0xd] + 4) = param_1[0xd];
  param_1[0xe] = 0;
  *(undefined4 *)param_1[0xd] = param_1[0xd];
  *(undefined4 *)(param_1[0xd] + 8) = param_1[0xd];
  local_4 = local_4 & 0xffffff00;
  FUN_005f3c20(local_10,*(undefined4 *)param_1[0xd],(undefined4 *)param_1[0xd]);
  if (param_1[0xd] != 0) {
    FUN_005d0370(param_1[0xd],0x24,0);
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  local_4 = 0xffffffff;
  FUN_005e2770();
  ExceptionList = local_c;
  return;
}

