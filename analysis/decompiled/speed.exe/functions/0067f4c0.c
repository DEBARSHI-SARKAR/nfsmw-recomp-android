/* speed.exe 0067f4c0 FUN_0067f4c0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0067f4c0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 0xa0);
  if (piVar1 != *(int **)(param_1 + 0xa0)) {
    do {
      (**(code **)(*(int *)piVar1[2] + 8))();
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0xa0));
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  return;
}

