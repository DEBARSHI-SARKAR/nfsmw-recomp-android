/* speed.exe 006922c0 FUN_006922c0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_006922c0(int param_1)

{
  int *piVar1;
  float unaff_ESI;
  float10 fVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0.0;
  local_c = 0.0;
  if (*(float *)(*(int *)(param_1 + 0x160) + 0x70) < _DAT_0089096c) {
    piVar1 = *(int **)(param_1 + 0x114);
    fVar2 = (float10)(**(code **)(*piVar1 + 0x30))(2);
    local_c = (float)fVar2;
    fVar2 = (float10)(**(code **)(*piVar1 + 0x30))(3);
    local_8 = (float)(fVar2 + (float10)0.0);
  }
  if (_DAT_00890968 < *(float *)(*(int *)(param_1 + 0x160) + 0x70)) {
    piVar1 = *(int **)(param_1 + 0x114);
    (**(code **)(*piVar1 + 0x30))();
    fVar2 = (float10)(**(code **)(*piVar1 + 0x30))(0);
    return (fVar2 + (float10)(float)((int)local_c + 2) + (float10)unaff_ESI) / (float10)1;
  }
  return (float10)local_8 / (float10)(int)local_c;
}

