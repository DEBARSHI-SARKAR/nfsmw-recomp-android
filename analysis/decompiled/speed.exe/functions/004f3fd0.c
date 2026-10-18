/* speed.exe 004f3fd0 FUN_004f3fd0; analysis pseudocode, not buildable source.
 * calls 00727170 FUN_00727170
 * calls 00445630 FUN_00445630
 * calls 00460bf0 FUN_00460bf0
 * calls 00727300 FUN_00727300
 * calls 004ea9b0 FUN_004ea9b0
 * calls 004b8f80 FUN_004b8f80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f3fd0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x3c) = 1;
  }
  (**(code **)(**(int **)(param_1 + 0x540) + 0x38))(param_1 + 0x550);
  (**(code **)(**(int **)(param_1 + 0x540) + 0x3c))(param_1 + 0x560);
  (**(code **)(**(int **)(param_1 + 0x540) + 0x40))(param_1 + 0x570);
  FUN_004b8f80(param_1,0,6,0);
  _DAT_00914358 = 0;
  iVar6 = *(int *)(param_1 + 0x3c);
  iVar11 = iVar6;
  if (0 < iVar6) {
    do {
      iVar11 = iVar11 + -1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    *(int *)(param_1 + 0x3c) = iVar11;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    (**(code **)(*(int *)(param_1 + 0x30) + 8))
              (*(int *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  do {
    pcVar7 = (char *)FUN_00445630(*(undefined4 *)((int)&DAT_008f20b0 + iVar12));
    if (*pcVar7 != '\0') {
      uVar8 = FUN_00460bf0(pcVar7);
      iVar6 = FUN_00727170(0,uVar8);
      iVar11 = 0;
      if (0 < iVar6) {
        do {
          iVar9 = FUN_00727300(uVar8,iVar11);
          if (iVar9 != 0) {
            fVar2 = *(float *)(iVar9 + 0x14);
            fVar3 = *(float *)((int)&DAT_008f20b4 + iVar12);
            fVar4 = *(float *)(iVar9 + 0x10);
            fVar5 = *(float *)(iVar9 + 0x18);
            if (*(uint *)(param_1 + 0x38) <= *(uint *)(param_1 + 0x3c)) {
              uVar10 = (**(code **)(*(int *)(param_1 + 0x30) + 0xc))(*(uint *)(param_1 + 0x3c) + 1);
              FUN_004ea9b0(uVar10);
            }
            pfVar1 = (float *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c) * 0x14);
            if (pfVar1 != (float *)0x0) {
              *pfVar1 = -fVar2;
              pfVar1[1] = fVar5;
              pfVar1[2] = fVar4;
              pfVar1[3] = 1.0;
              pfVar1[4] = fVar3;
            }
            *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar6);
      }
    }
    iVar12 = iVar12 + 8;
  } while (iVar12 < 0x78);
  return;
}

