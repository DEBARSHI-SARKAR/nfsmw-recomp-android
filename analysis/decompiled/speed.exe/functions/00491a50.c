/* speed.exe 00491a50 FUN_00491a50; analysis pseudocode, not buildable source.
 * calls 00491500 FUN_00491500
 */

undefined4 __thiscall FUN_00491a50(int *param_1,byte *param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  
  pbVar7 = param_3;
  *param_4 = 0;
  iVar6 = *param_1;
  if (iVar6 == 0) {
    return 0;
  }
  iVar2 = *(int *)(iVar6 + 0x14);
  iVar4 = FUN_00491500();
  uVar3 = *(uint *)(iVar6 + 0x20 + iVar4 * 4);
  do {
    if (uVar3 == 0xffffffff) {
      if ((code *)param_1[7] != (code *)0x0) {
        param_3 = (byte *)((uint)param_3 & 0xffffff00);
        iVar6 = (*(code *)param_1[7])(pbVar7,&param_3);
        *param_4 = iVar6;
        if ((char)param_3 != '\0') {
          return 1;
        }
      }
      return 0;
    }
    if (uVar3 <= *(uint *)(iVar6 + 0x10)) {
      piVar5 = (int *)(iVar2 + uVar3 * 0x10);
      pbVar11 = (byte *)(*(int *)(iVar6 + 8) + *piVar5);
      pbVar10 = pbVar7 + 1;
      do {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
      iVar4 = -(int)pbVar10;
      pbVar8 = param_3;
      if (pbVar11[(int)(pbVar7 + (1 - (int)pbVar10))] == 0x7f) {
        pbVar10 = pbVar11 + (int)(pbVar7 + iVar4 + 2);
      }
      else {
        pbVar10 = pbVar11 + (int)(pbVar7 + iVar4);
      }
      do {
        bVar1 = *pbVar8;
        bVar12 = bVar1 < *pbVar11;
        if (bVar1 != *pbVar11) {
LAB_00491b04:
          iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_00491b09;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar12 = bVar1 < pbVar11[1];
        if (bVar1 != pbVar11[1]) goto LAB_00491b04;
        pbVar11 = pbVar11 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00491b09:
      pbVar11 = param_2;
      pbVar7 = param_3;
      if (iVar4 == 0) {
        do {
          bVar1 = *pbVar11;
          bVar12 = bVar1 < *pbVar10;
          if (bVar1 != *pbVar10) {
LAB_00491b35:
            iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_00491b3a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar11[1];
          bVar12 = bVar1 < pbVar10[1];
          if (bVar1 != pbVar10[1]) goto LAB_00491b35;
          pbVar10 = pbVar10 + 2;
          pbVar11 = pbVar11 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00491b3a:
        if (iVar4 == 0) {
          uVar9 = (uint)*(ushort *)((int)piVar5 + 0xe);
          if (*(char *)((int)piVar5 + 0xd) == '\x01') {
            *param_4 = *(int *)(iVar2 + 4 + uVar3 * 0x10);
            return 1;
          }
          if ((uVar9 != 0) && (uVar9 < *(ushort *)(*(int *)(iVar6 + 0x1c) + 0x30))) {
            *param_4 = *(int *)(*(int *)(iVar6 + 0x18) + 0x10 + uVar9 * 0x28) +
                       *(int *)(iVar2 + 4 + uVar3 * 0x10);
            return 1;
          }
        }
      }
    }
    uVar3 = *(uint *)(*(int *)(iVar6 + 0x420) + uVar3 * 4);
  } while( true );
}

