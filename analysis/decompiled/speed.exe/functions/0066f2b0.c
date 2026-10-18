/* speed.exe 0066f2b0 FUN_0066f2b0; analysis pseudocode, not buildable source.
 */

undefined4 * FUN_0066f2b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,code *param_4)

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
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      param_3[5] = param_1[5];
      param_3 = param_3 + 6;
    }
    param_1 = param_1 + 6;
  } while (param_1 != param_2);
  return param_3;
}

