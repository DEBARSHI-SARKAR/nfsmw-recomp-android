/* speed.exe 0041ead0 FUN_0041ead0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0041ead0(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 6;
  if (*(int **)param_1[0xb] == piVar1) {
    *(int *)param_1[0xb] = param_1[7];
  }
  if (*piVar1 != 0) {
    *(int *)(*piVar1 + 4) = param_1[7];
  }
  if ((int *)param_1[7] != (int *)0x0) {
    *(int *)param_1[7] = *piVar1;
  }
  param_1[7] = 0;
  *piVar1 = 0;
  if (*(int **)param_1[5] == param_1) {
    *(int *)param_1[5] = param_1[1];
  }
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  if ((int *)param_1[1] != (int *)0x0) {
    *(int *)param_1[1] = *param_1;
  }
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

