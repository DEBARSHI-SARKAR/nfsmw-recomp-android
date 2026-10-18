/* speed.exe 0069c660 FUN_0069c660; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 006e8de0 FUN_006e8de0
 */

void __fastcall FUN_0069c660(int param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  
  piVar1 = (int *)FUN_005d59f0(&LAB_00404ff0);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0x10))();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 100))();
    }
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + -0x18) + 0x74))();
  if (piVar1 != (int *)0x0) {
    if (param_1 == 0x4c) {
      param_1 = 0;
    }
    else {
      param_1 = param_1 + 0x14;
    }
    iVar2 = *piVar1;
    fVar3 = (float10)FUN_006e8de0(param_1,2);
    (**(code **)(iVar2 + 0x34))(0x98c52567,(float)fVar3);
  }
  piVar1 = (int *)FUN_005d59f0(&LAB_00604250);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  piVar1 = (int *)FUN_005d59f0(&LAB_004040d0);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 4))();
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_005d59f0(&LAB_00405000);
      if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0069c721. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar1 + 0x10))();
        return;
      }
    }
  }
  return;
}

