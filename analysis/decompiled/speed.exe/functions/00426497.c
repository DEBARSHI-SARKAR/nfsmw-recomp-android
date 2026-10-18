/* speed.exe 00426497 FUN_00426497; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

int * __fastcall FUN_00426497(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *unaff_EBX;
  int unaff_EBP;
  
  piVar1 = (int *)(**(code **)(param_1 + 4))();
  if (piVar1 != unaff_EBX) {
    (**(code **)(*(int *)(unaff_EBP + 0x2c) + 8))(piVar1);
    piVar1 = (int *)FUN_005d59f0(&LAB_004040e0);
    if (piVar1 != unaff_EBX) {
      piVar2 = (int *)(**(code **)(*piVar1 + 0xac))();
      (**(code **)(*piVar2 + 0x8c))();
      *(int **)(unaff_EBP + 0x8c) = unaff_EBX;
      return piVar1;
    }
  }
  return (int *)0x0;
}

