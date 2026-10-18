/* speed.exe 00708f50 FUN_00708f50; analysis pseudocode, not buildable source.
 */

void FUN_00708f50(undefined4 *param_1,int *param_2,int *param_3,undefined4 *param_4,int *param_5)

{
  undefined4 *puVar1;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    puVar1 = param_4;
    if (param_2[2] != *param_5) {
      puVar1 = (undefined4 *)*param_4;
      param_4[2] = param_2[2];
    }
    param_2 = (int *)*param_2;
    param_4 = puVar1;
  } while (param_2 != param_3);
  *param_1 = puVar1;
  return;
}

