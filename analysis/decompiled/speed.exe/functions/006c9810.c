/* speed.exe 006c9810 FUN_006c9810; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006c9810(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))(piVar1,0,0,(undefined4 *)(param_1 + 0x38),0);
  }
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))(piVar1,0,0,(undefined4 *)(param_1 + 0x44),0);
  }
  return;
}

