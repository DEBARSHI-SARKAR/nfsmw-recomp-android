/* speed.exe 004253c0 FUN_004253c0; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 */

void FUN_004253c0(int *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5,
                 int param_6)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    piVar1 = (int *)param_2[2];
    if (((char)param_5 == '\0') || (cVar2 = (**(code **)(*piVar1 + 0x88))(), cVar2 != '\0')) {
      (**(code **)(*piVar1 + 0x48))();
      iVar3 = FUN_00452430();
      if (iVar3 == param_4) {
        param_6 = param_6 + 1;
      }
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  return;
}

