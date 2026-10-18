/* speed.exe 005d5470 FUN_005d5470; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

void FUN_005d5470(int *param_1,int *param_2)

{
  int *piVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    piVar1 = (int *)*param_1;
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && (*param_1 != 0)) {
      thunk_FUN_007c7250(*param_1);
    }
  }
  return;
}

