/* speed.exe 007f3367 FUN_007f3367; analysis pseudocode, not buildable source.
 * calls 007ec298 FUN_007ec298
 */

undefined4 __fastcall FUN_007f3367(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x468) + 0x1c))(*(int **)(param_1 + 0x468));
  if (iVar1 != 0) {
    while (iVar1 == -0x7ff8ffe2) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x468) + 0x1c))(*(int **)(param_1 + 0x468));
      FUN_007ec298(0);
    }
    return 4;
  }
  return 0;
}

