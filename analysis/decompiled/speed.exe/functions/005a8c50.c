/* speed.exe 005a8c50 FUN_005a8c50; analysis pseudocode, not buildable source.
 * calls 005a51a0 FUN_005a51a0
 * calls 005a5020 FUN_005a5020
 * calls 004ae8f0 FUN_004ae8f0
 */

void __fastcall FUN_005a8c50(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xa2) != '\0') {
    FUN_004ae8f0(0);
    FUN_005a51a0(1);
    return;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14) + -4;
  }
  FUN_004ae8f0((*(int *)(param_1 + 0x24) != iVar1) - 1U & 7);
  FUN_005a5020(1);
  return;
}

