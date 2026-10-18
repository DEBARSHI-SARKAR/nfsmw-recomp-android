/* speed.exe 00602a00 FUN_00602a00; analysis pseudocode, not buildable source.
 * calls 006015b0 FUN_006015b0
 * calls 005de4b0 FUN_005de4b0
 */

void __fastcall FUN_00602a00(int param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 2;
  }
  if ((*(char *)(param_1 + 8) == '\x02') || (*(char *)(param_1 + 8) == '\x03')) {
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 2;
    FUN_005de4b0(*(undefined4 *)(param_1 + 0xc));
    FUN_006015b0(1);
  }
  return;
}

