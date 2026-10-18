/* speed.exe 0083141a FUN_0083141a; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0083141a(int *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  
  bVar2 = false;
  puVar3 = DAT_009c29e4;
  do {
    while (puVar3 == (undefined4 *)0x0) {
      if (bVar2) {
        return 0xfffffffb;
      }
      bVar2 = true;
      puVar3 = DAT_009c29e4;
    }
    iVar4 = *(int *)((int)puVar3 + param_4 + -0x20);
    uVar9 = (uint)*(ushort *)((int)puVar3 + param_5 + -0x20);
    if (((*(short *)(puVar3 + -4) == *(short *)(param_2 + 1)) || (bVar2)) && (iVar5 = 0, uVar9 != 0)
       ) {
      puVar6 = (undefined4 *)(iVar4 + 8);
      do {
        if (*(short *)((int)param_2 + 6) == *(short *)(puVar6 + 1)) {
          pbVar10 = (byte *)*puVar6;
          pbVar8 = (byte *)*param_2;
          do {
            bVar1 = *pbVar8;
            bVar11 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_00831492:
              iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00831497;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar8[1];
            bVar11 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_00831492;
            pbVar8 = pbVar8 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00831497:
          if (iVar7 == 0) {
            iVar4 = iVar4 + iVar5 * 0x10;
            *param_1 = iVar4;
            param_1[1] = *(int *)(iVar4 + 0xc);
            return 0;
          }
        }
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 4;
      } while (iVar5 < (int)uVar9);
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}

