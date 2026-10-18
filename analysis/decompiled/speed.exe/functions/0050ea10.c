/* speed.exe 0050ea10 FUN_0050ea10; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0050ea10(int param_1,int param_2)

{
  if (param_2 != -1) {
    if (param_2 == 4) {
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined4 *)(param_1 + 6) = 0;
      return;
    }
    *(undefined1 *)(param_2 + 2 + param_1) = 0;
  }
  return;
}

