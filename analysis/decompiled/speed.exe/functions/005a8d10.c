/* speed.exe 005a8d10 FUN_005a8d10; analysis pseudocode, not buildable source.
 * calls 005a51a0 FUN_005a51a0
 * calls 005a5020 FUN_005a5020
 * calls 004ae8f0 FUN_004ae8f0
 */

void __thiscall FUN_005a8d10(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != param_1 + 8) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + -4;
    }
    *(int *)(param_1 + 0x2c) = iVar1;
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x10) + -4;
    }
    *(int *)(param_1 + 0x24) = iVar1;
    *(int *)(param_1 + 0x28) = iVar1;
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(char *)(param_1 + 0xa2) == '\0') {
      if (*(int *)(param_1 + 0x14) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x14) + -4;
      }
      FUN_004ae8f0((*(int *)(param_1 + 0x24) != iVar1) - 1U & 7);
      FUN_005a5020(1);
    }
    else {
      FUN_004ae8f0(0);
      FUN_005a51a0(1);
    }
  }
  return;
}

