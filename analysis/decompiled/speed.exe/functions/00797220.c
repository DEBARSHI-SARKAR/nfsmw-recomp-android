/* speed.exe 00797220 FUN_00797220; analysis pseudocode, not buildable source.
 * calls 007939e0 FUN_007939e0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00794f80 FUN_00794f80
 * calls 0078fbc0 FUN_0078fbc0
 */

void FUN_00797220(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    FUN_007939e0(*(undefined4 *)(param_2 + 0x10));
    *(undefined1 *)(param_3 + 0x22c) = 1;
  }
  iVar2 = FUN_00794f80();
  iVar1 = *(int *)(iVar2 + 0x40);
  if (iVar1 != 0) {
    if (*(code **)(iVar1 + 0x18) != (code *)0x0) {
      (**(code **)(iVar1 + 0x18))(param_2,*(undefined4 *)(iVar1 + 0x1c));
    }
    iVar1 = *(int *)(iVar2 + 0x40);
    if (iVar1 != 0) {
      FUN_0078fbc0();
      thunk_FUN_007c7250(iVar1);
    }
    *(undefined4 *)(iVar2 + 0x40) = 0;
  }
  return;
}

