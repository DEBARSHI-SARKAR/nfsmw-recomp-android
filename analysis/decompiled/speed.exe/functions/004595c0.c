/* speed.exe 004595c0 FUN_004595c0; analysis pseudocode, not buildable source.
 * calls 00458f80 FUN_00458f80
 */

void __fastcall FUN_004595c0(int *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint local_8;
  uint local_4;
  
  uVar8 = param_1[1];
  uVar4 = 0;
  if (uVar8 != 0) {
    iVar6 = *param_1;
    do {
      if (((*(byte *)(iVar6 + 0xb) & 0x10) != 0) || (*(int *)(iVar6 + 4) != iVar6)) break;
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 0xc;
    } while (uVar4 < (uint)param_1[1]);
  }
  do {
    do {
      if (uVar8 <= uVar4) {
        return;
      }
      puVar5 = (undefined4 *)(*param_1 + uVar4 * 0xc);
      if ((*(byte *)((int)puVar5 + 0xb) & 0x10) == 0) {
        if ((undefined4 *)puVar5[1] == puVar5) {
          return;
        }
        if (((*(byte *)((int)puVar5 + 0xb) & 0x10) == 0) && ((undefined4 *)puVar5[1] == puVar5)) {
          puVar5 = (undefined4 *)0x0;
        }
      }
      bVar2 = *(byte *)((int)puVar5 + 0xb);
      local_4 = CONCAT31(local_4._1_3_,bVar2 >> 1) & 0xffffff01;
      local_8 = CONCAT31(local_8._1_3_,bVar2) & 0xffffff01;
      uVar3 = *(undefined4 *)
               (*(int *)(*(int *)(DAT_0090dcbc + 4) + 0x20) +
               (-(uint)((uint)*(ushort *)(puVar5 + 2) < *(uint *)(*(int *)(DAT_0090dcbc + 4) + 0x18)
                       ) & (uint)*(ushort *)(puVar5 + 2)) * 4);
      puVar1 = puVar5 + 1;
      puVar7 = puVar1;
      if (((bVar2 & 0x20) == 0) && (puVar7 = (undefined4 *)*puVar1, (bVar2 & 0x10) != 0)) {
        puVar7 = (undefined4 *)((int)*puVar1 + param_1[6]);
      }
      *puVar1 = puVar5;
      *puVar5 = 0;
      param_1[2] = param_1[2] + -1;
      *(undefined1 *)((int)puVar5 + 10) = 0;
      if (puVar7 != (undefined4 *)0x0) {
        FUN_00458f80(local_4,puVar7,local_8,uVar3);
      }
      uVar8 = param_1[1];
      uVar4 = uVar4 + 1;
    } while (uVar8 <= uVar4);
    iVar6 = *param_1 + uVar4 * 0xc;
    do {
      if (((*(byte *)(iVar6 + 0xb) & 0x10) != 0) || (*(int *)(iVar6 + 4) != iVar6)) break;
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 0xc;
    } while (uVar4 < (uint)param_1[1]);
  } while( true );
}

