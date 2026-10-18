/* speed.exe 0073dbe0 FUN_0073dbe0; analysis pseudocode, not buildable source.
 * calls 0073dab0 FUN_0073dab0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0073dbe0(int *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  int extraout_EDX;
  float10 fVar3;
  
  iVar1 = DAT_00925b14;
  if ((char)param_1[3] != '\0') {
    iVar1 = DAT_00925ae8;
  }
  fVar2 = (float)iVar1 * _DAT_00890984 - (float)param_1[1];
  if ((*(char *)((int)param_1 + 0xd) != '\0') &&
     (param_2 < *(float *)(*(int *)(*param_1 + 8) + 0x4c))) {
    param_1[1] = 0;
  }
  if ((*(char *)((int)param_1 + 0xe) != '\0') && ((float)param_1[2] <= fVar2)) {
    param_1[1] = 0;
  }
  iVar1 = *(int *)(*param_1 + 8);
  if (fVar2 < _DAT_00890968 == (fVar2 == _DAT_00890968)) {
    if (fVar2 < (float)param_1[2]) {
      fVar3 = (float10)FUN_0073dab0(fVar2 / (float)param_1[2],iVar1);
      return fVar3 * (float10)*(float *)(extraout_EDX + 0x48);
    }
    return (float10)*(float *)(iVar1 + 0x48) * (float10)*(float *)(iVar1 + 0x34);
  }
  return (float10)*(float *)(iVar1 + 0x48) * (float10)*(float *)(iVar1 + 4);
}

