/* speed.exe 00401f50 FUN_00401f50; analysis pseudocode, not buildable source.
 */

bool FUN_00401f50(int param_1,int param_2)

{
  if (param_1 == 0) {
    if (param_2 == 0) {
      return true;
    }
  }
  else if (param_2 != 0) {
    return *(int *)(param_1 + 4) == *(int *)(param_2 + 4);
  }
  return false;
}

