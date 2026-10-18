/* speed.exe 006edd60 FUN_006edd60; analysis pseudocode, not buildable source.
 * calls 00401dc0 FUN_00401dc0
 * calls 005d59f0 FUN_005d59f0
 * calls 006edc90 FUN_006edc90
 * calls 006e9aa0 FUN_006e9aa0
 * calls 00401da0 FUN_00401da0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006edd60(int param_1,float param_2,float param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  
  cVar1 = FUN_006edc90();
  if (((cVar1 == '\0') || (iVar2 = (**(code **)(*(int *)(param_1 + 0x2c) + 0xc))(), iVar2 == 0)) ||
     (piVar3 = (int *)FUN_005d59f0(&LAB_004040e0), piVar3 == (int *)0x0)) goto LAB_006ede1f;
  fVar4 = (float10)(**(code **)(*piVar3 + 0x8c))();
  if (*(char *)(param_1 + 0x80) == '\0') {
    if ((float10)_DAT_00901ae8 < fVar4 * (float10)_DAT_008967e0) {
      fVar4 = (float10)FUN_00401da0(param_2 / _DAT_00901ae4 + *(float *)(param_1 + 0x84),0x3f800000)
      ;
      goto LAB_006ede03;
    }
  }
  else if (DAT_00988e1c == '\0') {
    fVar4 = (float10)FUN_00401dc0(*(float *)(param_1 + 0x84) - param_3 * _DAT_00890cd4,0);
LAB_006ede03:
    *(float *)(param_1 + 0x84) = (float)fVar4;
  }
  if (*(float *)(param_1 + 0x84) < _DAT_00890968 == (*(float *)(param_1 + 0x84) == _DAT_00890968)) {
    return;
  }
LAB_006ede1f:
  FUN_006e9aa0(0);
  return;
}

