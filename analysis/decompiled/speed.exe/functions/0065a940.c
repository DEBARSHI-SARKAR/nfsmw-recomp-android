/* speed.exe 0065a940 FUN_0065a940; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0065a940(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x2c);
  if (pcVar1 != (code *)0x0) {
    if (*(int *)(param_1 + 0x38) != 0) {
      (*pcVar1)(*(undefined4 *)(param_1 + 0x30),param_2,*(undefined4 *)(param_1 + 0x34));
      return;
    }
    (*pcVar1)(*(undefined4 *)(param_1 + 0x30),param_2);
  }
  return;
}

