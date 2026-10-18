/* speed.exe 00460ca0 FUN_00460ca0; analysis pseudocode, not buildable source.
 */

void FUN_00460ca0(char *param_1,int param_2,int param_3)

{
  char cVar1;
  
  if (param_3 != 0) {
    param_2 = param_2 - (int)param_1;
    do {
      cVar1 = param_1[param_2];
      param_3 = param_3 + -1;
      *param_1 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}

