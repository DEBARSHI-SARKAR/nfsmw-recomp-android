/* speed.exe 0056bd40 FUN_0056bd40; analysis pseudocode, not buildable source.
 * calls 00460c50 FUN_00460c50
 */

bool FUN_0056bd40(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = 0;
  iVar8 = 0;
  bVar4 = false;
  iVar5 = FUN_00460c50(param_3);
  if (0 < iVar5) {
    do {
      if (param_2 <= iVar7) break;
      bVar2 = *(byte *)(iVar8 + param_3);
      iVar9 = iVar8 + 1;
      if ((char)bVar2 < '\0') {
        if ((bVar2 & 0xe0) == 0xc0) {
          pbVar1 = (byte *)(iVar9 + param_3);
          iVar9 = iVar8 + 2;
          if ((*pbVar1 & 0xc0) == 0x80) {
            *(ushort *)(param_1 + iVar7 * 2) =
                 (ushort)(bVar2 & 0x1f) * 0x40 + (ushort)(*pbVar1 & 0x3f);
            goto LAB_0056be49;
          }
          *(ushort *)(param_1 + iVar7 * 2) = (ushort)bVar2;
        }
        else if ((bVar2 & 0xf0) == 0xe0) {
          pbVar1 = (byte *)(iVar9 + param_3);
          bVar3 = *(byte *)(iVar8 + 2 + param_3);
          iVar9 = iVar8 + 3;
          if (((*pbVar1 & 0xc0) == 0x80) && ((bVar3 & 0xc0) == 0x80)) {
            uVar6 = ((ushort)(*pbVar1 & 0x3f) + (ushort)bVar2 * 0x40) * 0x40 +
                    (ushort)(bVar3 & 0x3f);
            if (0xff7f < uVar6) {
              uVar6 = uVar6 & 0xff;
            }
            *(ushort *)(param_1 + iVar7 * 2) = uVar6;
            goto LAB_0056be49;
          }
          *(ushort *)(param_1 + iVar7 * 2) = (ushort)bVar2;
        }
        else {
          *(ushort *)(param_1 + iVar7 * 2) = (ushort)bVar2;
        }
        iVar9 = iVar8 + 1;
        bVar4 = true;
      }
      else {
        *(ushort *)(param_1 + iVar7 * 2) = (ushort)bVar2;
      }
LAB_0056be49:
      iVar7 = iVar7 + 1;
      iVar8 = iVar9;
    } while (iVar9 < iVar5);
  }
  *(undefined2 *)(param_1 + iVar7 * 2) = 0;
  return !bVar4;
}

