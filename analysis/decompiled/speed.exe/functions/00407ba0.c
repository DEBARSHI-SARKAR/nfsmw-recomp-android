/* speed.exe 00407ba0 FUN_00407ba0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00407ba0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  float10 fVar2;
  
  piVar1 = (int *)(**(code **)(*param_2 + 0xac))();
  if (piVar1 != (int *)0x0) {
    fVar2 = (float10)(**(code **)(*piVar1 + 0x78))(*param_1);
    if ((float10)(float)param_1[1] < fVar2) {
      fVar2 = (float10)(float)param_1[1];
    }
    param_1[1] = (float)fVar2;
  }
  return;
}

