/* speed.exe 00795180 FUN_00795180; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00794f80 FUN_00794f80
 * calls 0083a670 FUN_0083a670
 * calls 0078fbc0 FUN_0078fbc0
 * calls 0083abc0 FUN_0083abc0
 */

void FUN_00795180(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&DAT_008b6e20,0);
    iVar3 = FUN_0083abc0(uVar2);
    uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),"START",0);
    FUN_0083abc0(uVar2);
    uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),"RANGE",0);
    iVar4 = FUN_0083abc0(uVar2);
    if (iVar4 == 0) {
      *(undefined1 *)(iVar3 + 0x83 + param_3) = 1;
      iVar5 = FUN_00794f80();
      iVar1 = *(int *)(iVar5 + 0x40);
      if (iVar1 != 0) {
        if (*(code **)(iVar1 + 0x18) != (code *)0x0) {
          (**(code **)(iVar1 + 0x18))(param_2,*(undefined4 *)(iVar1 + 0x1c));
        }
        iVar1 = *(int *)(iVar5 + 0x40);
        if (iVar1 != 0) {
          FUN_0078fbc0();
          thunk_FUN_007c7250(iVar1);
        }
        *(undefined4 *)(iVar5 + 0x40) = 0;
      }
    }
    *(int *)(param_3 + 0x98 + iVar3 * 4) = iVar4;
    return;
  }
  iVar4 = FUN_00794f80();
  iVar3 = *(int *)(iVar4 + 0x40);
  if (iVar3 != 0) {
    if (*(code **)(iVar3 + 0x18) != (code *)0x0) {
      (**(code **)(iVar3 + 0x18))(param_2,*(undefined4 *)(iVar3 + 0x1c));
    }
    iVar3 = *(int *)(iVar4 + 0x40);
    if (iVar3 != 0) {
      FUN_0078fbc0();
      thunk_FUN_007c7250(iVar3);
    }
    *(undefined4 *)(iVar4 + 0x40) = 0;
  }
  return;
}

