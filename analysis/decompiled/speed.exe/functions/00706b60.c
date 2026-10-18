/* speed.exe 00706b60 FUN_00706b60; analysis pseudocode, not buildable source.
 */

void FUN_00706b60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 code *param_5)

{
  char cVar1;
  undefined4 *puVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    cVar1 = (*param_5)(*param_2);
    puVar2 = param_4;
    if (cVar1 == '\0') {
      puVar2 = param_4 + 1;
      *param_4 = *param_2;
    }
    param_2 = param_2 + 1;
    param_4 = puVar2;
  } while (param_2 != param_3);
  *param_1 = puVar2;
  return;
}

