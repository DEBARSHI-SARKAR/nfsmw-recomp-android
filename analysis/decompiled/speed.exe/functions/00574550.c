/* speed.exe 00574550 FUN_00574550; analysis pseudocode, not buildable source.
 * calls 00514d10 FUN_00514d10
 */

void __thiscall FUN_00574550(int param_1,undefined4 param_2)

{
  FUN_00514d10(*(undefined4 *)(param_1 + 0x2c),param_2,1);
  FUN_00514d10(*(undefined4 *)(param_1 + 0x30),param_2,1);
  FUN_00514d10(*(undefined4 *)(param_1 + 0x4c),param_2,1);
  FUN_00514d10(*(undefined4 *)(param_1 + 0x50),param_2,1);
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00514d10(*(int *)(param_1 + 0x24),param_2,1);
  }
  return;
}

