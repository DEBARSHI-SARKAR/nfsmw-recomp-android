/* speed.exe 0056ccb0 FUN_0056ccb0; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 * calls 00514cc0 FUN_00514cc0
 */

void __thiscall FUN_0056ccb0(int param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_00514cc0(*(undefined4 *)(param_1 + 4));
    FUN_00514cc0(*(undefined4 *)(param_1 + 8));
    FUN_00514cc0(*(undefined4 *)(param_1 + 0x18));
    FUN_00514cc0(*(undefined4 *)(param_1 + 0xc));
    return;
  }
  FUN_00514c70(*(undefined4 *)(param_1 + 0x18));
  FUN_00514c70(*(undefined4 *)(param_1 + 4));
  FUN_00514c70(*(undefined4 *)(param_1 + 8));
  FUN_00514c70(*(undefined4 *)(param_1 + 0xc));
  return;
}

