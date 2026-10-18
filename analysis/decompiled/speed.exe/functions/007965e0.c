/* speed.exe 007965e0 FUN_007965e0; analysis pseudocode, not buildable source.
 * calls 0083b210 FUN_0083b210
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0083a670 FUN_0083a670
 * calls 00794f80 FUN_00794f80
 * calls 0078fbc0 FUN_0078fbc0
 */

void FUN_007965e0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar1 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),"LIDENT");
    if (iVar1 == 0) {
      uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&DAT_008b4cbc,param_3 + 0xc,0x24,
                           &DAT_00890978);
      FUN_0083b210(uVar2);
    }
    else {
      *(undefined1 *)(param_3 + 0xc) = 0;
    }
  }
  iVar3 = FUN_00794f80();
  iVar1 = *(int *)(iVar3 + 0x40);
  if (iVar1 != 0) {
    if (*(code **)(iVar1 + 0x18) != (code *)0x0) {
      (**(code **)(iVar1 + 0x18))(param_2,*(undefined4 *)(iVar1 + 0x1c));
    }
    iVar1 = *(int *)(iVar3 + 0x40);
    if (iVar1 != 0) {
      FUN_0078fbc0();
      thunk_FUN_007c7250(iVar1);
    }
    *(undefined4 *)(iVar3 + 0x40) = 0;
  }
  return;
}

