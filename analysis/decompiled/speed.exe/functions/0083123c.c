/* speed.exe 0083123c FUN_0083123c; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0083123c(int *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  int local_c;
  
  bVar3 = false;
  puVar4 = DAT_009c29e4;
  do {
    while (puVar4 == (undefined4 *)0x0) {
      if (bVar3) {
        return 0xfffffffb;
      }
      bVar3 = true;
      puVar4 = DAT_009c29e4;
    }
    uVar8 = (uint)*(ushort *)((int)puVar4 + param_5 + -0x20);
    iVar2 = *(int *)((int)puVar4 + param_4 + -0x20);
    if (((*(short *)(puVar4 + -4) == *(short *)(param_2 + 1)) || (bVar3)) &&
       (local_c = 0, uVar8 != 0)) {
      puVar5 = (undefined4 *)(iVar2 + 4);
      do {
        if (*(short *)((int)param_2 + 6) == *(short *)(puVar5 + 1)) {
          pbVar9 = (byte *)*puVar5;
          pbVar7 = (byte *)*param_2;
          do {
            bVar1 = *pbVar7;
            bVar10 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_008312b3:
              iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_008312b8;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar10 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_008312b3;
            pbVar7 = pbVar7 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_008312b8:
          if (iVar6 == 0) {
            iVar2 = iVar2 + local_c * 0xc;
            *param_1 = iVar2;
            param_1[1] = *(int *)(iVar2 + 8);
            return 0;
          }
        }
        local_c = local_c + 1;
        puVar5 = puVar5 + 3;
      } while (local_c < (int)uVar8);
    }
    puVar4 = (undefined4 *)*puVar4;
  } while( true );
}

