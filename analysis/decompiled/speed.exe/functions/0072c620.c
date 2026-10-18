/* speed.exe 0072c620 FUN_0072c620; analysis pseudocode, not buildable source.
 * calls 0072ba30 FUN_0072ba30
 */

void FUN_0072c620(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_009ab24c;
  if ((undefined4 **)DAT_009ab24c != &DAT_009ab24c) {
    while (puVar1[2] != param_1) {
      puVar1 = (undefined4 *)*puVar1;
      if ((undefined4 **)puVar1 == &DAT_009ab24c) {
        return;
      }
    }
    FUN_0072ba30();
    *(undefined1 *)((int)&DAT_00902160 + (int)*(short *)(puVar1 + 3)) = 0;
  }
  return;
}

