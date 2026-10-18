/* speed.exe 00693010 FUN_00693010; analysis pseudocode, not buildable source.
 * calls 00692f10 FUN_00692f10
 * calls 00401ae0 FUN_00401ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00693010(int param_1,float param_2,int param_3,int param_4)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  cVar2 = (**(code **)(**(int **)(param_1 + 0x34) + 0x24))();
  if (cVar2 == '\0') {
    return (float10)_DAT_00890968;
  }
  if ((((param_3 < param_4) && (param_3 != 0)) && (1 < param_4)) && (1 < param_3)) {
    iVar3 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
    if (param_4 <= iVar3) {
      fVar4 = (float10)(**(code **)(*(int *)(param_1 + 0x54) + 8))();
      if ((float)fVar4 <= param_2) {
        return (float10)_DAT_008aac20;
      }
      fVar1 = *(float *)(param_1 + 0x9c + param_3 * 4);
      fVar5 = (float10)FUN_00692f10(param_4);
      fVar1 = (float)((float10)fVar1 - fVar5);
      if (fVar1 <= param_2) {
        fVar4 = (float10)FUN_00401ae0(param_2,fVar1,(float)fVar4);
        return fVar4 * (float10)_DAT_00891068 + (float10)_DAT_0089096c;
      }
    }
  }
  return (float10)_DAT_00890968;
}

