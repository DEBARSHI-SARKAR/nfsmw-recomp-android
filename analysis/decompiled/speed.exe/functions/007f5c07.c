/* speed.exe 007f5c07 FUN_007f5c07; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007f5c07(int param_1)

{
  if (*(char *)(param_1 + 0x78) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x10) + 4))();
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  return;
}

