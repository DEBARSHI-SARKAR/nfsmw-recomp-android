/* speed.exe 00602840 FUN_00602840; analysis pseudocode, not buildable source.
 * calls 005fab40 FUN_005fab40
 * calls 005e1780 FUN_005e1780
 * calls 00452430 FUN_00452430
 * calls 005e2850 FUN_005e2850
 * calls 00600a20 FUN_00600a20
 */

void FUN_00602840(void)

{
  byte *pbVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = DAT_0091dff8;
  if (DAT_0091dff8 != 0) {
    if ((*(ushort *)(DAT_0091dff8 + 0x18) & 0x200) == 0) {
      FUN_005e1780();
    }
    if (iVar9 != 0) {
      do {
        iVar4 = FUN_005e2850(&DAT_008a3704,0);
        if (iVar4 != 0) {
          uVar5 = FUN_00452430();
          FUN_00600a20(uVar5);
          puVar3 = DAT_0091e004;
          iVar4 = FUN_005fab40();
          piVar6 = (int *)puVar3[0xf];
          uVar2 = *puVar3;
          uVar7 = 0;
          if (uVar2 != 0) {
            do {
              if (*piVar6 == 0) break;
              if (*piVar6 == iVar4) goto LAB_006028da;
              piVar6 = piVar6 + 4;
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar2);
          }
          *piVar6 = iVar4;
LAB_006028da:
          puVar3 = DAT_0091e004;
          uVar2 = piVar6[1];
          iVar4 = FUN_005fab40();
          piVar6 = (int *)puVar3[0xf];
          uVar7 = *puVar3;
          uVar8 = 0;
          if (uVar7 != 0) {
            do {
              if (*piVar6 == 0) break;
              if (*piVar6 == iVar4) goto LAB_00602914;
              piVar6 = piVar6 + 4;
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar7);
          }
          *piVar6 = iVar4;
LAB_00602914:
          if ((((uint)piVar6[1] >> 3 & 1) == 0) || ((uVar2 >> 1 & 1) != 0)) {
            if (*(int *)(iVar9 + 0xc0) != 0) {
              pbVar1 = (byte *)(*(int *)(iVar9 + 0xc0) + 2);
              *pbVar1 = *pbVar1 & 0xfe;
              pbVar1 = (byte *)(*(int *)(iVar9 + 0xc0) + 2);
              *pbVar1 = *pbVar1 & 0xfd;
            }
          }
          else if (*(int *)(iVar9 + 0xc0) != 0) {
            pbVar1 = (byte *)(*(int *)(iVar9 + 0xc0) + 2);
            *pbVar1 = *pbVar1 | 1;
            pbVar1 = (byte *)(*(int *)(iVar9 + 0xc0) + 2);
            *pbVar1 = *pbVar1 | 2;
          }
        }
        iVar9 = *(int *)(iVar9 + 0x24);
        while( true ) {
          if (iVar9 == DAT_0091dff8) {
            return;
          }
          if ((*(ushort *)(iVar9 + 0x18) & 0x200) != 0) break;
          iVar9 = *(int *)(iVar9 + 0x24);
        }
      } while( true );
    }
  }
  return;
}

