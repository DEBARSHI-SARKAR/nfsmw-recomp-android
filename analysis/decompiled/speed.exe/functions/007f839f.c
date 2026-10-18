/* speed.exe 007f839f FUN_007f839f; analysis pseudocode, not buildable source.
 * calls 0081c886 FUN_0081c886
 */

void __fastcall FUN_007f839f(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_0081c886(*(undefined4 *)(param_1 + 0xc));
    (*DAT_00909e58)(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

