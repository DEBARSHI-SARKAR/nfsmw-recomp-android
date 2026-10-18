/* speed.exe 007f33a8 FUN_007f33a8; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_007f33a8(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x468);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1);
    piVar1 = *(int **)(param_1 + 0x468);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x468) = 0;
    }
  }
  return 0;
}

