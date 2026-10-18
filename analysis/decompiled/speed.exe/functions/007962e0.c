/* speed.exe 007962e0 FUN_007962e0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0083a670 FUN_0083a670
 * calls 00794f80 FUN_00794f80
 * calls 0083abc0 FUN_0083abc0
 * calls 0078fbc0 FUN_0078fbc0
 */

void FUN_007962e0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_3 + 0x14) != 0) {
    if (*(int *)(param_3 + 0x1c) != -1) {
      uVar1 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),"IDENT",0xfffffffe);
      iVar2 = FUN_0083abc0(uVar1);
      if (iVar2 == *(int *)(param_3 + 0x1c)) {
        return;
      }
    }
    if (*(code **)(param_3 + 0x14) != (code *)0x0) {
      (**(code **)(param_3 + 0x14))(2,0,*(undefined4 *)(param_3 + 0x18));
    }
  }
  iVar3 = FUN_00794f80();
  iVar2 = *(int *)(iVar3 + 0x40);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) == 0x75736561)) {
    if (*(code **)(iVar2 + 0x18) != (code *)0x0) {
      (**(code **)(iVar2 + 0x18))(param_2,*(undefined4 *)(iVar2 + 0x1c));
    }
    iVar2 = *(int *)(iVar3 + 0x40);
    if (iVar2 != 0) {
      FUN_0078fbc0();
      thunk_FUN_007c7250(iVar2);
    }
    *(undefined4 *)(iVar3 + 0x40) = 0;
  }
  return;
}

