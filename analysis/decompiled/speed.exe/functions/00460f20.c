/* speed.exe 00460f20 FUN_00460f20; analysis pseudocode, not buildable source.
 */

char * FUN_00460f20(char *param_1,int param_2)

{
  char cVar1;
  
  if (param_1 != (char *)0x0) {
    do {
      cVar1 = *param_1;
      if (cVar1 == param_2) {
        return param_1;
      }
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  return (char *)0x0;
}

