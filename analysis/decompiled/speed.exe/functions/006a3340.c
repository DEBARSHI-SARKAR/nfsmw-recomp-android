/* speed.exe 006a3340 FUN_006a3340; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_006a3340(int param_1)

{
  int *piVar1;
  int iVar2;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar3;
  undefined4 local_8;
  
  local_8 = 0.0;
  iVar2 = (**(code **)(*(int *)(param_1 + 0x4c) + 4))();
  if (*(float *)(*(int *)(param_1 + 0xf0) + 0x70) <= _DAT_00890968) goto LAB_006a33c2;
  piVar1 = *(int **)(param_1 + 0xd0);
  fVar3 = (float10)(**(code **)(*piVar1 + 0x50))(1);
  unaff_EBX = (float)fVar3;
  fVar3 = (float10)(**(code **)(*piVar1 + 0x50))(0);
  fVar3 = (fVar3 + (float10)0.0) * (float10)_DAT_008933d4;
  if (iVar2 != 0) {
    if (fVar3 <= (float10)_DAT_00890968) goto LAB_006a33b6;
  }
  else if ((float10)_DAT_00890968 <= fVar3) {
LAB_006a33b6:
    fVar3 = (float10)_DAT_00890968;
  }
  local_8 = (float)fVar3;
LAB_006a33c2:
  if (_DAT_0089096c <= *(float *)(*(int *)(param_1 + 0xf0) + 0x70)) {
    fVar3 = (float10)local_8;
  }
  else {
    piVar1 = *(int **)(param_1 + 0xd0);
    (**(code **)(*piVar1 + 0x50))(3);
    fVar3 = (float10)(**(code **)(*piVar1 + 0x50))(2);
    fVar3 = (fVar3 + (float10)unaff_EBX) * (float10)_DAT_008933d4;
    if (iVar2 != 0) {
      if (fVar3 <= (float10)unaff_ESI) {
        return (float10)unaff_ESI;
      }
    }
    else if ((float10)unaff_ESI <= fVar3) {
      return (float10)unaff_ESI;
    }
  }
  return fVar3;
}

