/* speed.exe 006e9980 FUN_006e9980; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006e9980(int param_1)

{
  if (*(int **)(param_1 + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x74) + 8))();
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return;
}

