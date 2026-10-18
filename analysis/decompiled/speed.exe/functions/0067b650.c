/* speed.exe 0067b650 FUN_0067b650; analysis pseudocode, not buildable source.
 * calls 006eea10 FUN_006eea10
 * calls 00676540 FUN_00676540
 * calls 006e9c90 FUN_006e9c90
 */

void __fastcall FUN_0067b650(int param_1)

{
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_006e9c90(*(int *)(param_1 + 0xe0));
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  if ((*(int **)(param_1 + 0xd8) != (int *)0x0) && (*(char *)(param_1 + 0xe5) == '\0')) {
    (**(code **)(**(int **)(param_1 + 0xd8) + 0x60))();
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  if (*(int **)(param_1 + 0xe8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xe8) + 0x20))();
    (**(code **)(**(int **)(param_1 + 0xe8) + 0x2c))();
  }
  if (*(int **)(param_1 + 0xec) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xec) + 4))(0x308,0);
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
  FUN_00676540(param_1 + -0x2c);
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_006eea10(*(int *)(param_1 + 0x5c));
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return;
}

