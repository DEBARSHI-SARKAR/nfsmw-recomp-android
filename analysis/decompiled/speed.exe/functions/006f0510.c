/* speed.exe 006f0510 FUN_006f0510; analysis pseudocode, not buildable source.
 */

void FUN_006f0510(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int param_5,int param_6
                 )

{
  int *piVar1;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    if (((param_6 != 0) && (param_6 != param_2[1])) ||
       ((piVar1 = param_4, param_5 != 0 && (param_5 != *param_2)))) {
      *param_4 = *param_2;
      param_4[1] = param_2[1];
      param_4[2] = param_2[2];
      piVar1 = param_4 + 4;
      param_4[3] = param_2[3];
    }
    param_2 = param_2 + 4;
    param_4 = piVar1;
  } while (param_2 != param_3);
  *param_1 = piVar1;
  return;
}

