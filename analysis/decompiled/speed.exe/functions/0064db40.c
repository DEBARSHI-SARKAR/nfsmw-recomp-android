/* speed.exe 0064db40 FUN_0064db40; analysis pseudocode, not buildable source.
 */

int FUN_0064db40(int *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  byte *pbVar6;
  ushort uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  
  if ((*param_1 == 0x5a4c444a) && ((char)param_1[1] == '\x02')) {
    pbVar9 = param_2 + param_1[2];
    pbVar6 = (byte *)((int)param_1 + 0x12);
    uVar4 = *(byte *)(param_1 + 4) | 0x100;
    uVar7 = *(byte *)((int)param_1 + 0x11) | 0x100;
    iVar8 = param_1[3] + -0x12;
    while (iVar8 != 0) {
      if ((uVar4 & 1) == 0) {
        if (param_2 < pbVar9) {
          *param_2 = *pbVar6;
          param_2 = param_2 + 1;
          pbVar6 = pbVar6 + 1;
        }
        iVar8 = iVar8 + -1;
      }
      else {
        uVar3 = uVar7 & 1;
        bVar1 = pbVar6[1];
        uVar7 = (short)uVar7 >> 1;
        if (uVar3 == 0) {
          bVar2 = *pbVar6;
          iVar5 = (bVar2 & 0x1f) + 3;
          iVar10 = 0;
          do {
            param_2[iVar10] = param_2[iVar10 - (((bVar2 & 0xffffffe0) << 3 | (uint)bVar1) + 0x11)];
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar5);
          pbVar6 = pbVar6 + 2;
          iVar8 = iVar8 + -2;
          param_2 = param_2 + iVar5;
        }
        else {
          bVar2 = *pbVar6;
          iVar5 = ((bVar2 & 0xfffffff0) << 4 | (uint)bVar1) + 3;
          iVar10 = 0;
          do {
            param_2[iVar10] = param_2[iVar10 - ((bVar2 & 0xf) + 1)];
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar5);
          pbVar6 = pbVar6 + 2;
          iVar8 = iVar8 + -2;
          param_2 = param_2 + iVar5;
        }
      }
      uVar4 = (short)uVar4 >> 1;
      if (uVar4 == 1) {
        uVar4 = *pbVar6 | 0x100;
        pbVar6 = pbVar6 + 1;
        iVar8 = iVar8 + -1;
      }
      if (uVar7 == 1) {
        uVar7 = *pbVar6 | 0x100;
        pbVar6 = pbVar6 + 1;
        iVar8 = iVar8 + -1;
      }
    }
    return param_1[2];
  }
  return 0;
}

