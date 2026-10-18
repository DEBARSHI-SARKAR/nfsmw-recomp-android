/* speed.exe 00460c70 FUN_00460c70; analysis pseudocode, not buildable source.
 */

void FUN_00460c70(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_2;
  *param_1 = cVar1;
  if (cVar1 != '\0') {
    pcVar2 = param_1;
    do {
      cVar1 = pcVar2[(int)(param_2 + (1 - (int)param_1))];
      pcVar2 = pcVar2 + 1;
      *pcVar2 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}

