/* speed.exe 006a0100 FUN_006a0100; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_006a0100(int param_1)

{
  int *piVar1;
  
  (**(code **)(**(int **)(param_1 + 0x4c) + 4))();
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x42700000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  piVar1 = (int *)FUN_005d59f0(&LAB_00620460);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006a013e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}

