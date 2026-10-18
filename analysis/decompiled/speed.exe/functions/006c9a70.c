/* speed.exe 006c9a70 FUN_006c9a70; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006c9a70(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x34);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

