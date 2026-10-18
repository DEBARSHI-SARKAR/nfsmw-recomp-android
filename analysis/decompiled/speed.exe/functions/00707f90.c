/* speed.exe 00707f90 FUN_00707f90; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00707f90(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  iVar5 = DAT_00993cc8;
  if (((float)(DAT_00925ae8 - *(int *)(param_1 + 0x50)) * _DAT_00890984 < _DAT_00890dac) &&
     (iVar6 = *(int *)(DAT_00993cc8 + 0x5c), iVar6 != *(int *)(DAT_00993cc8 + 0x60))) {
    do {
      piVar1 = *(int **)(iVar6 + 4);
      (**(code **)(*piVar1 + 0x4c))(&local_c);
      fVar2 = *(float *)(param_1 + 0x6c) - local_c;
      fVar3 = *(float *)(param_1 + 0x70) - fStack_8;
      fVar4 = *(float *)(param_1 + 0x74) - fStack_4;
      fVar7 = (float10)FUN_005c5e80(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4);
      if (fVar7 < (float10)_DAT_00890dd0) {
        (**(code **)(*piVar1 + 0xfc))(2);
      }
      iVar6 = iVar6 + 8;
    } while (iVar6 != *(int *)(iVar5 + 0x60));
  }
  return;
}

