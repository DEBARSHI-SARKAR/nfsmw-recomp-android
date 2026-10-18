/* speed.exe 0054ab00 FUN_0054ab00; analysis pseudocode, not buildable source.
 * calls 005363b0 FUN_005363b0
 * calls 005926b0 FUN_005926b0
 * calls 00796280 FUN_00796280
 * calls 0079bac0 FUN_0079bac0
 * calls 00537120 FUN_00537120
 * calls 00536ac0 FUN_00536ac0
 * calls 00535dd0 FUN_00535dd0
 * calls 00796220 FUN_00796220
 * calls 00536e60 FUN_00536e60
 * calls 00536670 FUN_00536670
 */

void __fastcall FUN_0054ab00(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x54);
  iVar3 = 1;
  do {
    uVar4 = *(undefined4 *)(iVar2 + 0x18);
    FUN_0079bac0(uVar4);
    piVar1 = (int *)FUN_00796220(uVar4);
    iVar5 = iVar2 + 0x1c;
    FUN_0079bac0(iVar5);
    FUN_00796280(iVar5);
    if (piVar1 == (int *)0x0) {
      FUN_00537120(iVar3);
    }
    else {
      iVar5 = *piVar1;
      if (iVar5 < 0) {
        FUN_00536e60(iVar3);
      }
      else if (iVar5 < 0x4c) {
        FUN_005363b0(iVar3);
      }
      else if (iVar5 < 0xb0) {
        FUN_00536670(iVar3);
      }
      else {
        FUN_00536ac0(iVar3);
      }
    }
    if (*(int *)(iVar2 + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4) + -4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10);
  FUN_005926b0(1);
  FUN_00535dd0();
  return;
}

