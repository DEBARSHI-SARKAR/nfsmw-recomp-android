/* speed.exe 0056cf00 FUN_0056cf00; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 * calls 0056ccb0 FUN_0056ccb0
 * calls 00514cc0 FUN_00514cc0
 */

void __thiscall FUN_0056cf00(int param_1,undefined4 param_2)

{
  FUN_0056ccb0(param_2);
  if ((char)param_2 != '\0') {
    FUN_00514cc0(*(undefined4 *)(param_1 + 0x3c));
    return;
  }
  FUN_00514c70(*(undefined4 *)(param_1 + 0x3c));
  return;
}

