/* speed.exe 006f04d0 FUN_006f04d0; analysis pseudocode, not buildable source.
 */

void FUN_006f04d0(undefined4 *param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  if (param_2 == param_3) {
    *param_1 = param_2;
    return;
  }
  do {
    if (((param_5 == 0) || (param_5 == param_2[1])) && ((param_4 == 0 || (param_4 == *param_2))))
    break;
    param_2 = param_2 + 4;
  } while (param_2 != param_3);
  *param_1 = param_2;
  return;
}

