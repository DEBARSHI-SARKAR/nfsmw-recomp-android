/* speed.exe 005a5e40 FUN_005a5e40; analysis pseudocode, not buildable source.
 * calls 005a5d40 FUN_005a5d40
 */

void __fastcall FUN_005a5e40(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10c) != 0) {
    do {
      FUN_005a5d40(0xffffffff);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x10c));
  }
  return;
}

