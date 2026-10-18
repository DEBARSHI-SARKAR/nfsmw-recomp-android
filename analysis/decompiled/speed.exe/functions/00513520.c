/* speed.exe 00513520 FUN_00513520; analysis pseudocode, not buildable source.
 * calls 0056c6e0 FUN_0056c6e0
 */

void __fastcall FUN_00513520(int param_1)

{
  if (*(char *)(param_1 + 0x11a2) == '\x01') {
    *(undefined1 *)(param_1 + 0x11a2) = 0;
    if (*(int *)(param_1 + 0x1168) != 0) {
      FUN_0056c6e0(*(int *)(param_1 + 0x1168));
      *(undefined4 *)(param_1 + 0x1168) = 0;
    }
  }
  return;
}

