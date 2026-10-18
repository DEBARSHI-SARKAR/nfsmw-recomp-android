/* speed.exe 00643880 FUN_00643880; analysis pseudocode, not buildable source.
 * calls 00629990 FUN_00629990
 */

void FUN_00643880(int param_1,int param_2,int *param_3)

{
  while (param_1 != param_2) {
    *param_3 = *param_3 + 1;
    FUN_00629990();
  }
  return;
}

