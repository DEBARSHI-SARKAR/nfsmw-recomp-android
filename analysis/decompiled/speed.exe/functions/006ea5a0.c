/* speed.exe 006ea5a0 FUN_006ea5a0; analysis pseudocode, not buildable source.
 * calls 004509e0 FUN_004509e0
 * calls 0044cde0 FUN_0044cde0
 */

void __fastcall FUN_006ea5a0(int param_1)

{
  if (*(int **)(param_1 + 0x3b8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3b8) + 4))();
    *(undefined4 *)(param_1 + 0x3b8) = 0;
  }
  if (*(int *)(param_1 + 0x3a0) != 0) {
    FUN_004509e0(*(int *)(param_1 + 0x3a0),1);
    *(undefined4 *)(param_1 + 0x3a0) = 0;
  }
  if (*(int *)(param_1 + 0x394) != 0) {
    FUN_0044cde0(*(int *)(param_1 + 0x394));
  }
  return;
}

