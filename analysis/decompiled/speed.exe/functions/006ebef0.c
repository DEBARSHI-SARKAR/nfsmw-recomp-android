/* speed.exe 006ebef0 FUN_006ebef0; analysis pseudocode, not buildable source.
 */

undefined4 * FUN_006ebef0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,code *param_4)

{
  char cVar1;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    cVar1 = (*param_4)(param_1);
    if (cVar1 == '\0') {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3 = param_3 + 2;
    }
    param_1 = param_1 + 2;
  } while (param_1 != param_2);
  return param_3;
}

