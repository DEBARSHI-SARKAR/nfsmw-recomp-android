/* speed.exe 00461220 FUN_00461220; analysis pseudocode, not buildable source.
 */

void FUN_00461220(short *param_1,char *param_2,int param_3)

{
  char cVar1;
  
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    cVar1 = *param_2;
    param_3 = param_3 + -1;
    *param_1 = (short)cVar1;
    if (cVar1 == 0) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

