/* speed.exe 005be800 FUN_005be800; analysis pseudocode, not buildable source.
 * calls 005b7690 FUN_005b7690
 * calls 005bb9c0 FUN_005bb9c0
 * calls 005b3850 FUN_005b3850
 */

void __fastcall FUN_005be800(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [60];
  int aiStack_84 [33];
  
  local_c8 = 0;
  local_c4 = 0x3f800000;
  (**(code **)(**(int **)(param_1 + 0x108) + 0x3c))(local_c0);
  iVar4 = 0;
  for (iVar5 = *(int *)(param_1 + 0xe0); iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
    aiStack_84[iVar4] = iVar5;
    iVar4 = iVar4 + 1;
  }
  if (0 < iVar4) {
    iVar5 = 0;
    do {
      iVar3 = aiStack_84[iVar5];
      for (iVar1 = *(int *)(param_1 + 0xe0); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
        if (iVar1 == iVar3) {
          if (iVar3 != 0) {
            if (iVar3 == *(int *)(param_1 + 0xe0)) {
              *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(iVar3 + 4);
            }
            if (iVar3 == *(int *)(param_1 + 0xe4)) {
              *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(iVar3 + 8);
            }
            if (*(int *)(iVar3 + 8) != 0) {
              *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = *(undefined4 *)(iVar3 + 4);
            }
            if (*(int *)(iVar3 + 4) != 0) {
              *(undefined4 *)(*(int *)(iVar3 + 4) + 8) = *(undefined4 *)(iVar3 + 8);
            }
            *(undefined4 *)(iVar3 + 4) = 0xabadcafe;
            *(undefined4 *)(iVar3 + 8) = 0xabadcafe;
            *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + -1;
          }
          break;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      iVar3 = *(int *)(param_1 + 0xe4);
      iVar1 = aiStack_84[iVar5];
      if (iVar3 != 0) {
        do {
          if (*(int *)(iVar3 + 0x1c) <= *(int *)(iVar1 + 0x1c)) break;
          iVar3 = *(int *)(iVar3 + 8);
        } while (iVar3 != 0);
      }
      if (iVar1 != 0) {
        if (iVar3 == 0) {
          iVar2 = *(int *)(param_1 + 0xe0);
          *(int *)(iVar1 + 4) = iVar2;
          if (iVar2 != 0) {
            *(int *)(iVar2 + 8) = iVar1;
          }
          *(undefined4 *)(iVar1 + 8) = 0;
          *(int *)(param_1 + 0xe0) = iVar1;
        }
        else {
          iVar2 = *(int *)(iVar3 + 4);
          *(int *)(iVar1 + 4) = iVar2;
          if (iVar2 != 0) {
            *(int *)(iVar2 + 8) = iVar1;
          }
          *(int *)(iVar1 + 8) = iVar3;
          *(int *)(iVar3 + 4) = iVar1;
        }
        if (*(int *)(param_1 + 0xe4) == iVar3) {
          *(int *)(param_1 + 0xe4) = iVar1;
        }
        *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  iVar5 = *(int *)(param_1 + 0xe0);
  *(undefined2 *)(param_1 + 0xd4) = 0;
  if (iVar5 != 0) {
    do {
      (**(code **)(**(int **)(param_1 + 0x108) + 0x20))(iVar5);
      *(undefined4 *)(param_1 + 0x10c) = 0;
      for (iVar4 = *(int *)(iVar5 + 0x4c); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
        if (*(int *)(iVar4 + 0x18) == 5) {
          FUN_005bb9c0(iVar4,&stack0xfffffef8,&local_c8,0);
        }
        else {
          FUN_005b7690(iVar4,&local_c8,0);
        }
      }
      FUN_005b3850();
      (**(code **)(**(int **)(param_1 + 0x108) + 0x30))
                (param_1 + 0x110,*(undefined4 *)(param_1 + 0x10c));
      (**(code **)(**(int **)(param_1 + 0x108) + 0x24))(iVar5);
      iVar5 = *(int *)(iVar5 + 4);
    } while (iVar5 != 0);
    param_1[0x524d] = *param_1;
    return;
  }
  param_1[0x524d] = *param_1;
  return;
}

