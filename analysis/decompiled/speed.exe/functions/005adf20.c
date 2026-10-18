/* speed.exe 005adf20 FUN_005adf20; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005adf20(int param_1,float param_2)

{
  bool bVar1;
  float fVar2;
  
  if (*(code **)(param_1 + 0xbc) != (code *)0x0) {
    (**(code **)(param_1 + 0xbc))(param_1);
  }
  fVar2 = param_2 * *(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0xa4);
  bVar1 = fVar2 < _DAT_00890968;
  *(float *)(param_1 + 0xa4) = fVar2;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(float *)(param_1 + 0xa8) = -*(float *)(param_1 + 0xa8);
    return;
  }
  if (_DAT_0089096c < fVar2) {
    *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
    *(float *)(param_1 + 0xa8) = -*(float *)(param_1 + 0xa8);
  }
  return;
}

