/* speed.exe 00676680 FUN_00676680; analysis pseudocode, not buildable source.
 */

void FUN_00676680(int *param_1,int *param_2,int *param_3,int *param_4)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (*param_4 != *param_1) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3 = param_3 + 2;
    }
  }
  return;
}

