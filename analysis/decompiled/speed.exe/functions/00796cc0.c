/* speed.exe 00796cc0 FUN_00796cc0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00794f80 FUN_00794f80
 * calls 0078b530 FUN_0078b530
 * calls 0078fbc0 FUN_0078fbc0
 * calls 00794790 FUN_00794790
 */

void FUN_00796cc0(undefined4 param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    puVar3 = param_3;
    FUN_00794790(param_3);
    FUN_0078b530(puVar3);
  }
  *param_3 = 0;
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

