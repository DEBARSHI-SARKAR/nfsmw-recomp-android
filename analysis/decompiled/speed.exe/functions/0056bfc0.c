/* speed.exe 0056bfc0 FUN_0056bfc0; analysis pseudocode, not buildable source.
 */

bool __thiscall FUN_0056bfc0(int param_1,int param_2,int param_3,byte *param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  byte *pbVar5;
  int iVar6;
  
  bVar2 = false;
  iVar6 = 0;
  bVar3 = false;
  if (0 < param_3) {
    do {
      bVar2 = bVar3;
      bVar1 = *param_4;
      pbVar5 = param_4 + 1;
      if (bVar1 < 0x80) {
        uVar4 = (ushort)bVar1;
      }
      else if (DAT_0091cf88 == 0) {
        uVar4 = *(ushort *)(param_1 + 4 + (uint)bVar1 * 2);
        if (uVar4 < 0x80) {
          if (uVar4 == 0) {
            uVar4 = (ushort)bVar1;
            goto LAB_0056c029;
          }
          bVar1 = *pbVar5;
          pbVar5 = param_4 + 2;
          if (0x7f < bVar1) {
            uVar4 = *(ushort *)(param_1 + -0xfc + ((uint)uVar4 * 0x80 + (uint)bVar1) * 2);
            goto LAB_0056c029;
          }
        }
        else {
LAB_0056c029:
          if (uVar4 != 0) goto LAB_0056c035;
        }
        bVar2 = true;
        uVar4 = 0x5f;
      }
      else {
        uVar4 = (ushort)bVar1;
      }
LAB_0056c035:
      *(ushort *)(param_2 + iVar6 * 2) = uVar4;
      iVar6 = iVar6 + 1;
    } while ((uVar4 != 0) && (param_4 = pbVar5, bVar3 = bVar2, iVar6 < param_3));
  }
  return !bVar2;
}

