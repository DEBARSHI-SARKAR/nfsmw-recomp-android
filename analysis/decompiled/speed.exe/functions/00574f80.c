/* speed.exe 00574f80 FUN_00574f80; analysis pseudocode, not buildable source.
 * calls 00514d10 FUN_00514d10
 */

void __fastcall FUN_00574f80(int param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_00514d10(*(undefined4 *)(param_1 + 0x2c),0x36819d93,1);
  FUN_00514d10(*(undefined4 *)(param_1 + 0x30),0x36819d93,1);
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00514d10(*(int *)(param_1 + 0x24),0x36819d93,1);
  }
  return;
}

