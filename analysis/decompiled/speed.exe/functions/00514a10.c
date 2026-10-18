/* speed.exe 00514a10 FUN_00514a10; analysis pseudocode, not buildable source.
 * calls 00642d70 FUN_00642d70
 * calls 00644060 FUN_00644060
 */

void FUN_00514a10(int param_1,char param_2)

{
  if (param_1 == 4) {
    FUN_00644060(0);
    if (param_2 != '\0') {
      FUN_00642d70();
      return;
    }
  }
  else {
    FUN_00644060(0);
    if (param_2 != '\0') {
      FUN_00642d70();
    }
  }
  return;
}

