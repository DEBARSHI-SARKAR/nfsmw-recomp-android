/* speed.exe 0064b1a0 FUN_0064b1a0; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 */

int __thiscall FUN_0064b1a0(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  param_4 = param_4 + 1;
  if (param_4 < *param_1) {
    piVar2 = param_1 + param_4 * 3 + 2;
    do {
      if (*piVar2 == param_3) {
        iVar1 = FUN_00460d20(piVar2[2],param_2);
        if (iVar1 == 0) {
          return param_4;
        }
      }
      param_4 = param_4 + 1;
      piVar2 = piVar2 + 3;
    } while (param_4 < *param_1);
  }
  return -1;
}

