/* speed.exe 0069b430 FUN_0069b430; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069b430(int param_1,float param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int *piVar6;
  
  if ((*(int *)(param_1 + 0x1a8) != 0) &&
     (piVar2 = (int *)FUN_005d59f0(&LAB_00403f90), piVar2 != (int *)0x0)) {
    if (*(char *)(param_1 + 0x1b0) == '\0') {
      (**(code **)(*piVar2 + 0x1c))(0);
      (**(code **)(*piVar2 + 0x24))(0);
    }
    else {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x1a8) + 8))();
      uVar1 = *(undefined4 *)(iVar3 + 0x18);
      (**(code **)(**(int **)(param_1 + 0x1a8) + 8))();
      (**(code **)(*piVar2 + 0x1c))(uVar1);
      (**(code **)(*piVar2 + 0x24))(uVar1);
    }
  }
  if (*(char *)(param_1 + 0x1b0) != '\0') {
    iVar3 = (**(code **)(*(int *)(param_1 + 0x50) + 0xa0))();
    if (*(float *)(iVar3 + 4) < _DAT_00891050) {
      (**(code **)(*(int *)(param_1 + 0x194) + 8))(0);
    }
    piVar2 = (int *)FUN_005d59f0(&LAB_004039c0);
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar2 + 0xa0))();
      if (*(float *)(iVar3 + 4) < _DAT_00891050) {
        (**(code **)(*(int *)(param_1 + 0x194) + 8))(0);
      }
      pfVar4 = (float *)(**(code **)(*(int *)(param_1 + 0x50) + 0xa0))();
      pfVar5 = (float *)(**(code **)(*piVar2 + 0xa0))();
      if (*pfVar5 * *pfVar4 + pfVar5[1] * pfVar4[1] + pfVar5[2] * pfVar4[2] < _DAT_0089119c) {
        (**(code **)(*(int *)(param_1 + 0x194) + 8))(0);
      }
    }
    piVar2 = (int *)FUN_005d59f0(&LAB_00404040);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*(int *)(param_1 + 0x48) + 4))();
      piVar6 = (int *)FUN_005d59f0(&LAB_00404040);
      if (piVar6 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar2 + 0x4c))();
        if ((iVar3 < 2) || (iVar3 = (**(code **)(*piVar6 + 0x4c))(), iVar3 < 2)) {
          *(float *)(param_1 + 0x1cc) = param_2 + *(float *)(param_1 + 0x1cc);
        }
        else {
          *(undefined4 *)(param_1 + 0x1cc) = 0;
        }
        if (_DAT_008aac9c < *(float *)(param_1 + 0x1cc)) {
                    /* WARNING: Could not recover jumptable at 0x0069b618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(int *)(param_1 + 0x194) + 8))();
          return;
        }
      }
    }
  }
  return;
}

