/* speed.exe 00670030 FUN_00670030; analysis pseudocode, not buildable source.
 * calls 0066ff10 FUN_0066ff10
 */

void __thiscall FUN_00670030(int param_1,float param_2)

{
  int *piVar1;
  float10 fVar2;
  
  piVar1 = (int *)(**(code **)(*(int *)(param_1 + 0x2c) + 0x54))();
  FUN_0066ff10(param_2);
  fVar2 = (float10)(**(code **)(*piVar1 + 0x14))();
  fVar2 = (float10)param_2 * (float10)*(float *)(param_1 + 0xb4) + fVar2;
  if ((float10)*(float *)(param_1 + 0xb8) < fVar2) {
    (**(code **)(*(int *)(param_1 + 0x2c) + 8))();
    return;
  }
  (**(code **)(*piVar1 + 0x68))((float)fVar2);
  return;
}

