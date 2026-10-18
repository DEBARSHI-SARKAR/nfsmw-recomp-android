/* speed.exe 0040edd0 FUN_0040edd0; analysis pseudocode, not buildable source.
 */

void FUN_0040edd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 float param_5)

{
  int *piVar1;
  float10 fVar2;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    piVar1 = (int *)(**(code **)(*(int *)*param_2 + 0xac))();
    if (piVar1 != (int *)0x0) {
      fVar2 = (float10)(**(code **)(*piVar1 + 0x78))(param_4);
      if ((float10)param_5 < fVar2) {
        fVar2 = (float10)param_5;
      }
      param_5 = (float)fVar2;
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  return;
}

