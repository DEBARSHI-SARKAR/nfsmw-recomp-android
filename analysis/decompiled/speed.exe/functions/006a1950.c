/* speed.exe 006a1950 FUN_006a1950; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_006a1950(int param_1)

{
  int *piVar1;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar2;
  undefined4 local_8;
  
  local_8 = 0.0;
  if (*(float *)(*(int *)(param_1 + 0xf4) + 0x70) < _DAT_0089096c) {
    piVar1 = *(int **)(param_1 + 0xd4);
    fVar2 = (float10)(**(code **)(*piVar1 + 0x50))(3);
    unaff_ESI = (float)fVar2;
    fVar2 = (float10)(**(code **)(*piVar1 + 0x50))(2);
    local_8 = (float)((fVar2 + (float10)0.0) * (float10)_DAT_008933d4);
  }
  if (*(float *)(*(int *)(param_1 + 0xf4) + 0x70) <= _DAT_00890968) {
    fVar2 = (float10)local_8;
  }
  else {
    piVar1 = *(int **)(param_1 + 0xd4);
    (**(code **)(*piVar1 + 0x50))(1);
    fVar2 = (float10)(**(code **)(*piVar1 + 0x50))(0);
    fVar2 = (fVar2 + (float10)unaff_ESI) * (float10)_DAT_008933d4 + (float10)unaff_EDI;
    if (*(float *)(*(int *)(param_1 + 0xf4) + 0x70) < _DAT_0089096c) {
      return fVar2 * (float10)_DAT_008933d4;
    }
  }
  return fVar2;
}

