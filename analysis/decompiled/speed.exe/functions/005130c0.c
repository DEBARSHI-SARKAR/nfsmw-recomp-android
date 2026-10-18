/* speed.exe 005130c0 FUN_005130c0; analysis pseudocode, not buildable source.
 * calls 0056c6e0 FUN_0056c6e0
 */

void __fastcall FUN_005130c0(int param_1)

{
  if (*(char *)(param_1 + 0x1ac) == '\x01') {
    *(undefined1 *)(param_1 + 0x1ac) = 0;
    if (*(int *)(param_1 + 0x19c) != 0) {
      FUN_0056c6e0(*(int *)(param_1 + 0x19c));
      *(undefined4 *)(param_1 + 0x19c) = 0;
    }
  }
  return;
}

