/* speed.exe 005e39e0 FUN_005e39e0; analysis pseudocode, not buildable source.
 * calls 005dc970 FUN_005dc970
 */

void __thiscall FUN_005e39e0(int param_1,int param_2)

{
  if (param_2 != 0) {
    if (param_2 != *(int *)(param_1 + 0x2c)) {
      FUN_005dc970();
      return;
    }
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  return;
}

