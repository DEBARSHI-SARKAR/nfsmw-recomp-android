/* speed.exe 005ea010 FUN_005ea010; analysis pseudocode, not buildable source.
 * calls 005e5a00 FUN_005e5a00
 */

void __fastcall FUN_005ea010(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 700) != 0) {
    do {
      FUN_005e5a00();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 700));
  }
  return;
}

