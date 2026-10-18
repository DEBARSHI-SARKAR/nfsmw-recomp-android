/* speed.exe 007a3440 FUN_007a3440; analysis pseudocode, not buildable source.
 * calls 005251a0 FUN_005251a0
 * calls 00524920 FUN_00524920
 * calls 00515b90 FUN_00515b90
 */

void __fastcall FUN_007a3440(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(*(int *)(param_1 + 4) + 4) == '\0') {
    FUN_00524920(*(undefined4 *)(param_1 + 0x14),0xbc7b91f,0x16a259,1);
    return;
  }
  uVar1 = FUN_005251a0(*(undefined4 *)(param_1 + 0x14),0xce18427d,*(undefined4 *)(param_1 + 0x10));
  FUN_00515b90(uVar1);
  uVar1 = FUN_005251a0(*(undefined4 *)(param_1 + 0x14),0x5b8f2a45,*(undefined4 *)(param_1 + 0x10));
  FUN_00515b90(uVar1);
  if (*(int *)(param_1 + 0xc) == 2) {
    FUN_00524920(*(undefined4 *)(param_1 + 0x14),0xbc7b91f,0x5a8e4ebe,1);
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  FUN_00524920(*(undefined4 *)(param_1 + 0x14),0xbc7b91f,0x6ebbfb68,1);
  return;
}

