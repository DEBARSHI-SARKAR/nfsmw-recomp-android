/* speed.exe 004655f0 FUN_004655f0; analysis pseudocode, not buildable source.
 * calls 00464e10 FUN_00464e10
 * calls 00464510 FUN_00464510
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00465110 FUN_00465110
 * calls 007ec1bd FUN_007ec1bd
 */

void FUN_004655f0(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  if (param_1 != 0) {
    piVar6 = &DAT_0090de50;
    do {
      iVar2 = *piVar6;
      if (((iVar2 != 0) && (*(int *)(iVar2 + 8) <= param_1)) &&
         (param_1 < *(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 8))) {
        iVar5 = 1;
        do {
          iVar3 = (&DAT_0090df10)[iVar5];
          if (((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) <= param_1)) &&
             (param_1 < *(int *)(iVar3 + 0x20) + *(int *)(iVar3 + 0x1c))) break;
          iVar3 = (&DAT_0090df14)[iVar5];
          if (((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) <= param_1)) &&
             (param_1 < *(int *)(iVar3 + 0x20) + *(int *)(iVar3 + 0x1c))) {
            iVar5 = iVar5 + 1;
            break;
          }
          iVar3 = (&DAT_0090df18)[iVar5];
          if (((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) <= param_1)) &&
             (param_1 < *(int *)(iVar3 + 0x20) + *(int *)(iVar3 + 0x1c))) {
            iVar5 = iVar5 + 2;
            break;
          }
          iVar3 = (&DAT_0090df1c)[iVar5];
          if (((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) <= param_1)) &&
             (param_1 < *(int *)(iVar3 + 0x20) + *(int *)(iVar3 + 0x1c))) {
            iVar5 = iVar5 + 3;
            break;
          }
          iVar3 = (&DAT_0090df20)[iVar5];
          if (((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) <= param_1)) &&
             (param_1 < *(int *)(iVar3 + 0x20) + *(int *)(iVar3 + 0x1c))) {
            iVar5 = iVar5 + 4;
            break;
          }
          iVar5 = iVar5 + 5;
        } while (iVar5 < 0x10);
        if (iVar5 == 0x10) {
          (**(code **)(iVar2 + 0x14))(*(undefined4 *)(iVar2 + 4),param_1);
          return;
        }
      }
      piVar6 = piVar6 + 3;
    } while ((int)piVar6 < 0x90df10);
    iVar2 = (&DAT_0090df10)[*(byte *)(param_1 + -0xc)];
    local_1f = 0;
    local_1b = 0;
    local_17 = 0;
    local_13 = 0;
    local_f = 0;
    local_b = 0;
    local_7 = 0;
    local_3 = 0;
    local_20 = 0;
    local_1 = 0;
    if (((DAT_0090e660 != 0) && (DAT_0090e678 % DAT_0090e660 == 0)) && (iVar2 != 0)) {
      FUN_00465110(1);
    }
    if (*(char *)(param_1 + -0xb) != '\"') {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar1 = *(ushort *)(param_1 + -10);
    iVar5 = *(int *)(param_1 + -0x14);
    piVar6 = *(int **)(param_1 + -0x10);
    *(undefined1 *)(param_1 + -0xb) = 0;
    *piVar6 = iVar5;
    *(int **)(iVar5 + 4) = piVar6;
    iVar5 = *(int *)(param_1 + -8);
    FUN_007ec1bd();
    FUN_00464510((param_1 + -0x14) - (uint)uVar1,iVar5,&local_20);
    iVar5 = *(int *)(iVar2 + 0x30) - iVar5;
    *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x2c) - iVar5;
    *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + -1;
    *(int *)(iVar2 + 0x30) = iVar5;
    FUN_007ec1c8();
    if ((DAT_0090e688 != 0) && (*(int *)(DAT_0090df10 + 0x24) == 0)) {
      FUN_00464e10();
      DAT_0090df10 = 0;
      DAT_0090e688 = 0;
    }
  }
  return;
}

