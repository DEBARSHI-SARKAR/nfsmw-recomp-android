/* speed.exe 006f0270 FUN_006f0270; analysis pseudocode, not buildable source.
 */

int FUN_006f0270(int param_1,int param_2,code *param_3)

{
  char cVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    while (cVar1 = (*param_3)(param_1), cVar1 == '\0') {
      param_1 = param_1 + 8;
      if (param_1 == param_2) {
        return param_1;
      }
    }
    if (param_1 != param_2) {
      iVar2 = FUN_006ebef0(param_1 + 8,param_2,param_1,param_3);
      return iVar2;
    }
  }
  return param_1;
}

