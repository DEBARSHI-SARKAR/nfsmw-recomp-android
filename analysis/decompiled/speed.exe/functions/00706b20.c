/* speed.exe 00706b20 FUN_00706b20; analysis pseudocode, not buildable source.
 */

void FUN_00706b20(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,code *param_4)

{
  char cVar1;
  
  if (param_2 == param_3) {
    *param_1 = param_2;
    return;
  }
  do {
    cVar1 = (*param_4)(*param_2);
    if (cVar1 != '\0') break;
    param_2 = param_2 + 1;
  } while (param_2 != param_3);
  *param_1 = param_2;
  return;
}

