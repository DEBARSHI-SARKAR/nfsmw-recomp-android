/* speed.exe 004ddb60 FUN_004ddb60; analysis pseudocode, not buildable source.
 * calls 004b8f80 FUN_004b8f80
 */

void __fastcall FUN_004ddb60(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x3c) = 1;
  }
  (**(code **)(**(int **)(param_1 + 0x28) + 0x38))(param_1 + 0x30);
  FUN_004b8f80(param_1,0,1,0);
  return;
}

