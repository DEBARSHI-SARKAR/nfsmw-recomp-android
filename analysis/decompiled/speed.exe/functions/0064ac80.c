/* speed.exe 0064ac80 FUN_0064ac80; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_0064ac80(int param_1)

{
  if ((*(char *)(param_1 + 8) != '\0') && (*(int *)(param_1 + 0x3c) != 0)) {
    FUN_004655f0(*(int *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}

