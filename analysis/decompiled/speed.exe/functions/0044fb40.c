/* speed.exe 0044fb40 FUN_0044fb40; analysis pseudocode, not buildable source.
 * calls 0044b3a0 FUN_0044b3a0
 * calls 0044efc0 FUN_0044efc0
 */

void __fastcall FUN_0044fb40(int param_1)

{
  if (((DAT_0090d9ec != '\0') || (DAT_009260d8 != 0)) && (*(int *)(param_1 + 0xc) == 0)) {
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0044b3a0();
    if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  FUN_0044efc0();
  return;
}

