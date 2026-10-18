/* speed.exe 00790050 FUN_00790050; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0078fbc0 FUN_0078fbc0
 */

void __thiscall FUN_00790050(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    if ((param_3 == '\x01') && (*(code **)(iVar1 + 0x18) != (code *)0x0)) {
      (**(code **)(iVar1 + 0x18))(param_2,*(undefined4 *)(iVar1 + 0x1c));
    }
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 != 0) {
      FUN_0078fbc0();
      thunk_FUN_007c7250(iVar1);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

