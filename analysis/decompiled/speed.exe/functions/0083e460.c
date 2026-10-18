/* speed.exe 0083e460 FUN_0083e460; analysis pseudocode, not buildable source.
 */

bool FUN_0083e460(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  return 0 < *(int *)(param_1 + 0xc);
}

