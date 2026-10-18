/* speed.exe 005d1590 FUN_005d1590; analysis pseudocode, not buildable source.
 */

void FUN_005d1590(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 int param_5)

{
  undefined4 *puVar1;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    puVar1 = param_4;
    if (param_5 != param_2[1]) {
      *param_4 = *param_2;
      puVar1 = param_4 + 2;
      param_4[1] = param_2[1];
    }
    param_2 = param_2 + 2;
    param_4 = puVar1;
  } while (param_2 != param_3);
  *param_1 = puVar1;
  return;
}

