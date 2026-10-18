/* speed.exe 00459410 FUN_00459410; analysis pseudocode, not buildable source.
 * calls 00454030 FUN_00454030
 * calls 00458810 FUN_00458810
 * calls 00453a20 FUN_00453a20
 * calls 004557d0 FUN_004557d0
 * calls 00458760 FUN_00458760
 * calls 00458f80 FUN_00458f80
 */

undefined4 __thiscall FUN_00459410(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  undefined4 *puVar8;
  uint local_8;
  uint local_4;
  
  if (param_2 != 0) {
    uVar2 = FUN_00453a20(param_2);
    if (uVar2 < (uint)param_1[1]) {
      iVar4 = *param_1 + uVar2 * 0xc;
      if ((((*(byte *)(iVar4 + 0xb) & 0x10) != 0) || (*(int *)(iVar4 + 4) != iVar4)) && (iVar4 != 0)
         ) {
        local_8 = CONCAT31(local_8._1_3_,*(byte *)(iVar4 + 0xb)) & 0xffffff01;
        bVar6 = *(byte *)(iVar4 + 0xb) >> 1;
        bVar7 = bVar6 & 1;
        iVar1 = *(int *)(*(int *)(*(int *)(DAT_0090dcbc + 4) + 0x20) +
                        (-(uint)((uint)*(ushort *)(iVar4 + 8) <
                                *(uint *)(*(int *)(DAT_0090dcbc + 4) + 0x18)) &
                        (uint)*(ushort *)(iVar4 + 8)) * 4);
        local_4 = CONCAT31(local_4._1_3_,bVar6) & 0xffffff01;
        puVar3 = (undefined4 *)FUN_004557d0(iVar4,param_1[6],1);
        if ((*(byte *)(iVar4 + 0xb) & 0x10) == 0) {
          if (puVar3 != (undefined4 *)0x0) {
            FUN_00458f80(local_4,puVar3,local_8,iVar1);
          }
          return 1;
        }
        local_8 = 0;
        iVar4 = FUN_00454030(param_2,&local_8);
        if (iVar4 == 0) {
          if (bVar7 != 0) {
            FUN_00458810(0);
            return 1;
          }
          uVar2 = *(uint *)(iVar1 + 8);
          for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
          }
          for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)puVar3 = 0;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
          }
          return 1;
        }
        if (bVar7 == 0) {
          uVar2 = *(uint *)(iVar1 + 8);
          if ((*(byte *)(iVar4 + 0xb) & 0x20) == 0) {
            if ((*(byte *)(iVar4 + 0xb) & 0x10) == 0) {
              puVar8 = *(undefined4 **)(iVar4 + 4);
            }
            else {
              puVar8 = (undefined4 *)(*(int *)(local_8 + 0x18) + *(int *)(iVar4 + 4));
            }
          }
          else {
            puVar8 = (undefined4 *)(iVar4 + 4);
          }
          for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar3 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar3 = puVar3 + 1;
          }
          for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)puVar3 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar3 = (undefined4 *)((int)puVar3 + 1);
          }
          return 1;
        }
        if ((*(byte *)(iVar4 + 0xb) & 0x10) != 0) {
          FUN_00458760(*(int *)(local_8 + 0x18) + *(int *)(iVar4 + 4));
          return 1;
        }
        FUN_00458760(*(undefined4 *)(iVar4 + 4));
        return 1;
      }
    }
  }
  return 0;
}

