/* speed.exe 006e9f60 FUN_006e9f60; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006e9f60(int param_1)

{
  if (*(int **)(param_1 + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x6c) + 4))();
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return;
}

