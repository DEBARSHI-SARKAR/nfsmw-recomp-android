/* speed.exe 005ebf90 FUN_005ebf90; analysis pseudocode, not buildable source.
 * calls 005e5ed0 FUN_005e5ed0
 * calls 005dfad0 FUN_005dfad0
 */

void __fastcall FUN_005ebf90(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 0x90);
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    (**(code **)(*(int *)piVar2[4] + 8))();
    FUN_005dfad0();
    piVar1 = *(int **)(param_1 + 0x90);
  }
  FUN_005e5ed0(*(undefined4 *)(*(int *)(param_1 + 0x90) + 4));
  *(int *)(*(int *)(param_1 + 0x90) + 4) = *(int *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(int *)(*(int *)(param_1 + 0x90) + 8) = *(int *)(param_1 + 0x90);
  return;
}

