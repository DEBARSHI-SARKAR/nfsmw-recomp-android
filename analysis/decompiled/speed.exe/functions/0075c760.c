/* speed.exe 0075c760 FUN_0075c760; analysis pseudocode, not buildable source.
 * calls 0065c770 FUN_0065c770
 * calls 0075bed0 FUN_0075bed0
 */

void __thiscall FUN_0075c760(int *param_1,int param_2,int param_3)

{
  float10 fVar1;
  
  if (param_1[5] == 0) {
    fVar1 = (float10)FUN_0065c770();
    param_1[6] = (int)(float)fVar1;
    if (param_2 != 0) {
      *param_1 = param_2;
      param_1[1] = param_3;
    }
    if (param_1[5] == 0) {
      FUN_0075bed0();
    }
  }
  else if (param_1[5] == 2) {
    param_1[5] = 1;
    return;
  }
  return;
}

