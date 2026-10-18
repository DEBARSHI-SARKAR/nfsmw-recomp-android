/* speed.exe 004afe90 FUN_004afe90; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004afe90(undefined4 *param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x3f) = 0;
  if ((int *)param_1[0x3c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3c] + 0x1c))();
  }
  piVar1 = param_1 + 0x3d;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*param_1)(1);
  }
  return;
}

