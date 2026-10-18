/* speed.exe 00607ee0 FUN_00607ee0; analysis pseudocode, not buildable source.
 * calls 00607570 FUN_00607570
 */

int * FUN_00607ee0(int *param_1,int *param_2)

{
  int iVar1;
  
  if (*param_1 != 3) {
    if (*param_1 == 4) {
      iVar1 = FUN_00607570(param_1[1] + 0x10,&param_1);
      if (iVar1 != 0) {
        *param_2 = 3;
        param_2[1] = (int)param_1;
        return param_2;
      }
    }
    param_1 = (int *)0x0;
  }
  return param_1;
}

