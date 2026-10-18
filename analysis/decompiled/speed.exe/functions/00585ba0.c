/* speed.exe 00585ba0 FUN_00585ba0; analysis pseudocode, not buildable source.
 * calls 00503400 FUN_00503400
 * calls 00460c50 FUN_00460c50
 * calls 005af1c0 FUN_005af1c0
 * calls 007e8930 FUN_007e8930
 * calls 00460dd0 FUN_00460dd0
 */

int __thiscall FUN_00585ba0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(int *)(param_1 + 0x1c) = param_2 + 8;
  *(int *)(param_1 + 0x20) = param_2 + 0x108;
  iVar1 = FUN_005af1c0(param_2 + 8);
  iVar7 = 0;
  iVar2 = FUN_00460c50(*(undefined4 *)(param_1 + 0x1c));
  if (0 < iVar2) {
    do {
      iVar2 = 0;
      do {
        iVar6 = 0;
        piVar3 = &DAT_008f40f8;
        do {
          if (*piVar3 == iVar2) {
            if (iVar6 * 0x14 != -0x8f40f8) {
              pcVar4 = (&PTR_s_ENGLISH_008f40fc)[iVar6 * 5];
              goto LAB_00585c14;
            }
            break;
          }
          piVar3 = piVar3 + 5;
          iVar6 = iVar6 + 1;
        } while ((int)piVar3 < 0x8f41c0);
        pcVar4 = "UNKNOWN";
LAB_00585c14:
        iVar6 = FUN_00460dd0(*(int *)(param_1 + 0x1c) + iVar7,pcVar4);
        if (((iVar6 == 0) && (0 < iVar7)) &&
           (*(char *)(*(int *)(param_1 + 0x1c) + -1 + iVar7) == '_')) {
          *(undefined1 *)(*(int *)(param_1 + 0x1c) + -1 + iVar7) = 0;
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x10);
      iVar7 = iVar7 + 1;
      iVar2 = FUN_00460c50(*(undefined4 *)(param_1 + 0x1c));
    } while (iVar7 < iVar2);
  }
  uVar5 = FUN_007e8930(*(int *)(param_1 + 0x20) + 0x100);
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  uVar5 = FUN_005af1c0(*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  uVar5 = FUN_005af1c0(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(float *)(param_1 + 0x24) = (float)*(int *)(*(int *)(param_1 + 0xc) + 0x24);
  uVar5 = FUN_00503400(uVar5,0,0);
  *(undefined4 *)(param_1 + 8) = uVar5;
  iVar2 = 0;
  piVar3 = &DAT_008f48b8;
  do {
    if (iVar1 == *piVar3) {
      if (iVar2 * 0xc != -0x8f48b8) {
        *(undefined4 *)(param_1 + 0x28) = (&DAT_008f48bc)[iVar2 * 3];
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar2 * 0xc + 0x8f48c0);
        return param_1;
      }
      break;
    }
    piVar3 = piVar3 + 3;
    iVar2 = iVar2 + 1;
  } while ((int)piVar3 < 0x8f48e8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  return param_1;
}

