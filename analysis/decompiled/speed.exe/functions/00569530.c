/* speed.exe 00569530 FUN_00569530; analysis pseudocode, not buildable source.
 */

bool __thiscall FUN_00569530(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) == 2) {
    if (param_2 == 4) {
      return DAT_0091cf20 == 3;
    }
    if (param_2 == 6) {
      return DAT_0091cf20 == 5;
    }
    if (DAT_0091cf20 == param_2) {
      return true;
    }
  }
  return false;
}

