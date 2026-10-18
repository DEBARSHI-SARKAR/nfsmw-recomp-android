/* speed.exe 0074b180 FUN_0074b180; analysis pseudocode, not buildable source.
 * calls 00729bf0 FUN_00729bf0
 * calls 00460460 FUN_00460460
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0074b180(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_78;
  int local_74;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar3 = FUN_00729bf0(param_2);
  if ((iVar3 != 0) && (*(short *)(iVar3 + 8) != 0)) {
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_1; puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[2] == (int)*(short *)(iVar3 + 8)) {
        iVar3 = FUN_007c4b80();
        iVar4 = FUN_007c4b80();
        local_74 = 0;
        if ((int)puVar1[3] < 1) {
          return 0;
        }
        local_78 = 0;
        do {
          iVar12 = puVar1[5];
          iVar8 = (int)*(short *)(iVar12 + local_78);
          iVar5 = (int)*(short *)(iVar12 + 2 + local_78);
          iVar12 = iVar12 + local_78;
          iVar13 = iVar8;
          if (iVar8 <= iVar5) {
            iVar13 = iVar5;
          }
          iVar10 = (int)*(short *)(iVar12 + 4);
          if (iVar13 <= iVar10) {
            iVar13 = iVar10;
          }
          iVar6 = iVar5;
          if (iVar8 < iVar5) {
            iVar6 = iVar8;
          }
          if (iVar10 <= iVar6) {
            iVar6 = iVar10;
          }
          if ((iVar3 <= iVar13) && (iVar6 <= iVar3)) {
            iVar11 = (int)*(short *)(iVar12 + 6);
            iVar6 = (int)*(short *)(iVar12 + 8);
            iVar13 = iVar11;
            if (iVar11 <= iVar6) {
              iVar13 = iVar6;
            }
            iVar9 = (int)*(short *)(iVar12 + 10);
            if (iVar13 <= iVar9) {
              iVar13 = iVar9;
            }
            iVar7 = iVar6;
            if (iVar11 < iVar6) {
              iVar7 = iVar11;
            }
            if (iVar9 <= iVar7) {
              iVar7 = iVar9;
            }
            if ((iVar4 <= iVar13) && (iVar7 <= iVar4)) {
              local_40 = (float)iVar8 * _DAT_008910f0;
              local_3c = (float)iVar11 * _DAT_008910f0;
              local_38 = (float)(int)*(short *)(iVar12 + 0xc) * _DAT_008b493c;
              local_30 = (float)iVar5 * _DAT_008910f0;
              local_2c = (float)iVar6 * _DAT_008910f0;
              local_28 = (float)(int)*(short *)(iVar12 + 0xe) * _DAT_008b493c;
              local_20 = (float)iVar10 * _DAT_008910f0;
              local_1c = (float)iVar9 * _DAT_008910f0;
              local_18 = (float)(int)*(short *)(iVar12 + 0x10) * _DAT_008b493c;
              cVar2 = FUN_00460460(param_2,&local_40,3);
              if (cVar2 != '\0') {
                return iVar12;
              }
            }
          }
          local_74 = local_74 + 1;
          local_78 = local_78 + 0x12;
        } while (local_74 < (int)puVar1[3]);
        return 0;
      }
    }
  }
  return 0;
}

