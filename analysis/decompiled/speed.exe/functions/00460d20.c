/* speed.exe 00460d20 FUN_00460d20; analysis pseudocode, not buildable source.
 */

int FUN_00460d20(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  
  if (param_1 == (char *)0x0) {
    return -(uint)(param_2 != (char *)0x0);
  }
  if (param_2 == (char *)0x0) {
    return 1;
  }
  do {
    cVar1 = *param_1;
    cVar2 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if ((cVar1 == '\0') || (cVar2 == '\0')) break;
  } while (cVar1 == cVar2);
  return (int)cVar1 - (int)cVar2;
}

