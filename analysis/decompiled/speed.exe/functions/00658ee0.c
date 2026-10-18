/* speed.exe 00658ee0 FUN_00658ee0; analysis pseudocode, not buildable source.
 * calls 00658a00 FUN_00658a00
 * calls 004655f0 FUN_004655f0
 * calls 00461980 FUN_00461980
 */

void __fastcall FUN_00658ee0(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_00658a00(*(int *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0x1c));
    if ((*(char *)(param_1 + 8) != '\0') && (*(int *)(param_1 + 0x3c) != 0)) {
      FUN_004655f0(*(int *)(param_1 + 0x3c));
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
  }
  FUN_00461980(*(undefined4 *)(param_1 + 0x1c));
  FUN_00461980(*(undefined4 *)(param_1 + 0x20));
  FUN_00461980(*(undefined4 *)(param_1 + 0x24));
  return;
}

