/* speed.exe 006a45c0 FUN_006a45c0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006a45c0(int param_1)

{
  if (*(int **)(param_1 + 0xf0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xf0) + 0x10))(0,0);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}

