/* speed.exe 005b8890 FUN_005b8890; analysis pseudocode, not buildable source.
 * calls 005b85a0 FUN_005b85a0
 */

void __fastcall FUN_005b8890(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    do {
      uVar1 = FUN_005b85a0(*(undefined4 *)(*(int *)(param_1 + 0x90) + uVar2 * 4));
      *(undefined4 *)(*(int *)(param_1 + 0x90) + uVar2 * 4) = uVar1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x94));
  }
  return;
}

