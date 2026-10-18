/* speed.exe 00407be0 FUN_00407be0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00407be0(int param_1,float param_2,char param_3,float param_4)

{
  bool bVar1;
  float10 fVar2;
  
  if ((_DAT_00890bf8 <= param_2) && (param_2 < *(float *)(param_1 + 0x58))) {
    fVar2 = (float10)_DAT_00890968;
    if ((fVar2 < (float10)*(float *)(param_1 + 0x8c)) &&
       ((fVar2 < (float10)*(float *)(param_1 + 0x90) && (*(int *)(param_1 + 0x4c) != 0)))) {
      bVar1 = param_3 == '\0';
      _param_3 = _DAT_0089096c -
                 (param_4 * _DAT_00890d68 + _DAT_00890694) * *(float *)(param_1 + 0x90);
      if (bVar1) {
        _param_3 = (_DAT_0089096c - _param_3) * (param_4 * _DAT_00890d64 + _DAT_00890634);
      }
      fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x4c) + 0x1c))();
      if (fVar2 < (float10)_param_3 != (fVar2 == (float10)_param_3)) goto LAB_00407c96;
      fVar2 = (fVar2 - (float10)_param_3) * (float10)*(float *)(param_1 + 0x94);
    }
    return fVar2;
  }
LAB_00407c96:
  return (float10)_DAT_00890968;
}

