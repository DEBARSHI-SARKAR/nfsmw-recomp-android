/* speed.exe 0083e440 FUN_0083e440; analysis pseudocode, not buildable source.
 */

bool FUN_0083e440(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return 0 < *(int *)(param_1 + 8);
}

