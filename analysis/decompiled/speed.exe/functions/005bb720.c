/* speed.exe 005bb720 FUN_005bb720; analysis pseudocode, not buildable source.
 * calls 005b1560 FUN_005b1560
 * calls 005ae8e0 FUN_005ae8e0
 */

void __fastcall FUN_005bb720(int param_1)

{
  int iVar1;
  void **ppvVar2;
  char cVar3;
  char extraout_DL;
  undefined **local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874158;
  local_10 = &PTR_FUN_008a2c80;
  iVar1 = *(int *)(param_1 + 0xe0);
  local_4 = 0;
  ppvVar2 = &local_c;
  local_c = ExceptionList;
  while ((ExceptionList = ppvVar2, iVar1 != 0 && (cVar3 = FUN_005b1560(&local_10), cVar3 != '\0')))
  {
    iVar1 = *(int *)(iVar1 + 4);
    ppvVar2 = ExceptionList;
  }
  if (*(int *)(param_1 + 0xd0) != 0) {
    do {
      FUN_005ae8e0();
    } while ((uint)(byte)(extraout_DL + 1) < *(uint *)(param_1 + 0xd0));
  }
  if (*(char *)(param_1 + 1) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined2 *)(param_1 + 0x16) = 0;
    *(undefined2 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x24) = 0;
    *(undefined1 *)(param_1 + 0x25) = 0;
  }
  ExceptionList = local_c;
  return;
}

