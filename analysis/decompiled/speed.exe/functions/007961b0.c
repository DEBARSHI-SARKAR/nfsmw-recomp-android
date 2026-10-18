/* speed.exe 007961b0 FUN_007961b0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00794f80 FUN_00794f80
 * calls 0078fbc0 FUN_0078fbc0
 */

void FUN_007961b0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((*(int *)(param_2 + 0xc) == 0) || (*(int *)(param_2 + 0xc) == 0x7567616d)) {
    puVar3 = (undefined4 *)(param_3 + 8);
    for (iVar2 = 0x19d; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(param_3 + 8) = 0xffffffff;
  }
  iVar1 = FUN_00794f80();
  iVar2 = *(int *)(iVar1 + 0x40);
  if (iVar2 != 0) {
    if (*(code **)(iVar2 + 0x18) != (code *)0x0) {
      (**(code **)(iVar2 + 0x18))(param_2,*(undefined4 *)(iVar2 + 0x1c));
    }
    iVar2 = *(int *)(iVar1 + 0x40);
    if (iVar2 != 0) {
      FUN_0078fbc0();
      thunk_FUN_007c7250(iVar2);
    }
    *(undefined4 *)(iVar1 + 0x40) = 0;
  }
  return;
}

