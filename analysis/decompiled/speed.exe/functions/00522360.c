/* speed.exe 00522360 FUN_00522360; analysis pseudocode, not buildable source.
 * calls 00460dd0 FUN_00460dd0
 * calls 0056bc10 FUN_0056bc10
 * calls 00586ca0 FUN_00586ca0
 * calls 005a8d10 FUN_005a8d10
 */

undefined4 __thiscall FUN_00522360(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x3c) + -4;
  }
  uVar1 = FUN_00586ca0(*(undefined4 *)(param_1 + 0x50));
  uVar5 = 1;
  if (1 < *(uint *)(param_1 + 0x48)) {
    do {
      if (*(int *)(iVar7 + 0xc) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar7 + 0xc) + -4;
      }
      iVar6 = 1;
      if (1 < param_2) {
        do {
          if (*(int *)(iVar7 + 0x10) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(iVar7 + 0x10) + -4;
          }
          if (iVar2 == iVar4) {
            return 0;
          }
          if (*(int *)(iVar2 + 4) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(iVar2 + 4) + -4;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_2);
      }
      if (*(char *)(iVar2 + 0xc) == '\0') {
        uVar3 = FUN_0056bc10(*(undefined4 *)(iVar2 + 0x8c));
        iVar2 = FUN_00460dd0(param_3,uVar3);
      }
      else {
        iVar2 = FUN_00460dd0(param_3,iVar2 + 0xc);
      }
      if (iVar2 == 0) {
        FUN_005a8d10(uVar5);
        return 1;
      }
      if (*(int *)(iVar7 + 4) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iVar7 + 4) + -4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x48));
  }
  FUN_005a8d10(uVar1);
  return 0;
}

