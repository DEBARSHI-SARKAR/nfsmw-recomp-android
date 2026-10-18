/* speed.exe 00644060 FUN_00644060; analysis pseudocode, not buildable source.
 * calls 00642d70 FUN_00642d70
 * calls 00633d10 FUN_00633d10
 */

void __thiscall FUN_00644060(int param_1,char param_2)

{
  if (param_2 == '\0') {
    if (*(int *)(param_1 + 0x26c) != 0) {
      *(undefined4 *)(param_1 + 0x26c) = 0;
      FUN_00642d70();
    }
  }
  else if (*(int *)(param_1 + 0x26c) == 0) {
    *(undefined4 *)(param_1 + 0x26c) = 1;
    FUN_00642d70();
    FUN_00633d10();
    return;
  }
  FUN_00633d10();
  return;
}

