/* speed.exe 00415d00 FUN_00415d00; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_00415d00(int *param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  
  (**(code **)(param_1[-0x13] + 0x48))();
  (**(code **)(*param_1 + 4))();
  piVar1 = (int *)FUN_005d59f0(&LAB_00405000);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))();
  }
  piVar1 = (int *)(**(code **)(*(int *)param_1[-6] + 0x74))();
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    fVar3 = (float10)FUN_006e8de0();
    (**(code **)(iVar2 + 0x58))((float)fVar3);
  }
  piVar1 = (int *)FUN_005d59f0(&LAB_004040d0);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 4))();
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_005d59f0(&LAB_00403700);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x88))();
      }
    }
  }
  piVar1 = (int *)FUN_005d59f0(&LAB_00404060);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x30))();
  }
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return;
}

