/* speed.exe 00491dd0 FUN_00491dd0; analysis pseudocode, not buildable source.
 * calls 00491500 FUN_00491500
 */

int FUN_00491dd0(byte *param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int unaff_EBX;
  byte *pbVar8;
  bool bVar9;
  
  iVar3 = *(int *)(unaff_EBX + 0x14);
  iVar4 = FUN_00491500();
  iVar4 = *(int *)(unaff_EBX + 0x20 + iVar4 * 4);
  do {
    if (iVar4 == -1) {
      return 0;
    }
    if (*(char *)(*(int *)(unaff_EBX + 0x424) + iVar4) != '\0') {
      piVar1 = (int *)(iVar4 * 0x10 + iVar3);
      pbVar5 = (byte *)(*(int *)(unaff_EBX + 8) + *piVar1);
      pbVar8 = param_1;
      do {
        bVar2 = *pbVar8;
        bVar9 = bVar2 < *pbVar5;
        if (bVar2 != *pbVar5) {
LAB_00491e36:
          iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00491e3b;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar8[1];
        bVar9 = bVar2 < pbVar5[1];
        if (bVar2 != pbVar5[1]) goto LAB_00491e36;
        pbVar8 = pbVar8 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar2 != 0);
      iVar6 = 0;
LAB_00491e3b:
      if (((iVar6 == 0) && (uVar7 = (uint)*(ushort *)((int)piVar1 + 0xe), uVar7 != 0)) &&
         (uVar7 < *(ushort *)(*(int *)(unaff_EBX + 0x1c) + 0x30))) {
        return *(int *)(*(int *)(unaff_EBX + 0x18) + 0x10 + uVar7 * 0x28) +
               *(int *)(iVar4 * 0x10 + 4 + iVar3);
      }
    }
    iVar4 = *(int *)(*(int *)(unaff_EBX + 0x420) + iVar4 * 4);
  } while( true );
}

