/* speed.exe 005a8cb0 FUN_005a8cb0; analysis pseudocode, not buildable source.
 * calls 005a51a0 FUN_005a51a0
 * calls 005a5020 FUN_005a5020
 * calls 004ae8f0 FUN_004ae8f0
 */

void __fastcall FUN_005a8cb0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xa2) != '\0') {
    FUN_004ae8f0(0);
    FUN_005a51a0(0xffffffff);
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10) + -4;
  }
  FUN_004ae8f0((*(int *)(param_1 + 0x24) != iVar1) - 1U & 7);
  FUN_005a5020(0xffffffff);
  return;
}

