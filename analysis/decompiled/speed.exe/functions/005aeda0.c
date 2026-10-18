/* speed.exe 005aeda0 FUN_005aeda0; analysis pseudocode, not buildable source.
 */

int FUN_005aeda0(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  
  do {
    cVar2 = *param_1;
    if (('`' < cVar2) && (cVar2 < '{')) {
      cVar2 = cVar2 + -0x20;
    }
    cVar1 = *param_2;
    param_1 = param_1 + 1;
    if (('`' < cVar1) && (cVar1 < '{')) {
      cVar1 = cVar1 + -0x20;
    }
    param_2 = param_2 + 1;
  } while ((cVar2 != '\0') && (cVar2 == cVar1));
  return (int)cVar2 - (int)cVar1;
}

