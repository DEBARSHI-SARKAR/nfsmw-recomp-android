/* speed.exe 006948b0 FUN_006948b0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006948b0(int param_1,float param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  
  piVar1 = *(int **)(param_1 + 0xec);
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0x4c))();
    iVar4 = (**(code **)(*piVar1 + 8))();
    if ((iVar3 != iVar4) && (*(int **)(param_1 + 0xe8) != (int *)0x0)) {
      cVar2 = (**(code **)(**(int **)(param_1 + 0xe8) + 0x1c))();
      if (cVar2 != '\0') {
        pfVar5 = (float *)(**(code **)(**(int **)(param_1 + 0xe8) + 0xa0))();
        pfVar6 = (float *)(**(code **)(**(int **)(param_1 + 0xe8) + 0x80))();
        if ((*pfVar6 * *pfVar5 + pfVar6[1] * pfVar5[1] + pfVar6[2] * pfVar5[2] < _DAT_008933d4) &&
           (pfVar5[1] < _DAT_008933d4)) {
          *(float *)(param_1 + 0x54) = param_2 + *(float *)(param_1 + 0x54);
          return;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}

