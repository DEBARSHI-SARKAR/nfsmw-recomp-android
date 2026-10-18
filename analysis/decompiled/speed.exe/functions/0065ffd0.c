/* speed.exe 0065ffd0 FUN_0065ffd0; analysis pseudocode, not buildable source.
 * calls 0065fde0 FUN_0065fde0
 * calls 0045cd20 __break
 * calls 00659930 FUN_00659930
 */

uint __thiscall FUN_0065ffd0(int *param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = *param_1;
  do {
    if ((param_1[2] - *param_1 < 0x100) && (param_1[2] != param_1[4])) {
      FUN_0065fde0(*param_1);
    }
    iVar3 = *param_1 - param_1[3];
    bVar1 = *(byte *)(iVar3 + 0x118 + (int)param_1);
    uVar5 = bVar1 & 0xf;
    uVar4 = (uint)(bVar1 >> 4);
    uVar8 = 0;
    if (uVar4 != 0) {
      pbVar6 = (byte *)((int)param_1 + uVar4 + iVar3 + 0x118);
      uVar7 = uVar4;
      do {
        uVar8 = uVar8 << 8 | (uint)*pbVar6;
        pbVar6 = pbVar6 + -1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    iVar3 = uVar4 + 1 + *param_1;
    *param_1 = iVar3;
  } while ((&DAT_008f8069)[uVar5 * 0xc] != '\0');
  if (iVar3 < param_1[4]) {
    do {
      if ((param_1[2] - *param_1 < 0x100) && (param_1[2] != param_1[4])) {
        FUN_0065fde0(*param_1);
      }
      bVar1 = *(byte *)((iVar3 - param_1[3]) + 0x118 + (int)param_1);
      iVar3 = iVar3 + 1 + (uint)(bVar1 >> 4);
    } while (((&DAT_008f8069)[(bVar1 & 0xf) * 0xc] != '\0') &&
            (*param_1 = iVar3, iVar3 < param_1[4]));
  }
  if (uVar5 == param_3) {
    return uVar8;
  }
  FUN_00659930(iVar2);
                    /* WARNING: Subroutine does not return */
  __break();
}

