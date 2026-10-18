/* speed.exe 00833dd7 FUN_00833dd7; analysis pseudocode, not buildable source.
 * calls 00831cd3 FUN_00831cd3
 * calls 008349fa FUN_008349fa
 * calls 008328fa FUN_008328fa
 * calls 0083298b FUN_0083298b
 * calls 00832634 FUN_00832634
 */

int FUN_00833dd7(int param_1,int param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int *local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_14 = 0;
  if ((DAT_009c2be0 != (code *)0x0) && (iVar5 = FUN_00831cd3(param_3,&local_18), iVar5 != 0)) {
    iVar5 = local_18[1];
    local_2c = (uint)*(byte *)(*local_18 + 9);
    uVar8 = (uint)(*(byte *)(param_2 + 2) >> 2);
    local_8 = 0;
    local_34 = uVar8;
    local_30 = iVar5;
    if (uVar8 != 0) {
      piVar7 = &DAT_009c2c38 + iVar5 * 0x28;
      do {
        if (*(int *)(DAT_009c2c10 + (short)piVar7[1] * 8) != *piVar7) {
          sVar4 = FUN_008328fa(*piVar7);
          *(short *)(piVar7 + 1) = sVar4;
          if (sVar4 < 0) {
            return local_14;
          }
        }
        local_8 = local_8 + 1;
        piVar7 = piVar7 + 3;
      } while (local_8 < (int)uVar8);
    }
    local_8 = 0;
    if (uVar8 != 0) {
      local_1c = iVar5 * 0xa0;
      do {
        puVar2 = (undefined4 *)((int)&DAT_009c2c38 + local_8 * 0xc + local_1c);
        local_14 = (uint)*(ushort *)(puVar2 + 2);
        iVar5 = *(int *)(DAT_009c2c10 + 4 + *(short *)(puVar2 + 1) * 8);
        uVar3 = *puVar2;
        if (((*(byte *)(iVar5 + 4) & 0x80) != 0) && (DAT_0090d24c != 0)) {
          local_20 = local_14 / 8;
          local_24 = local_14 % 8;
          iVar6 = FUN_00832634(iVar5);
          pbVar1 = (byte *)(iVar6 + 1 + local_20);
          *pbVar1 = *pbVar1 & ~('\x01' << ((byte)local_24 & 0x1f));
        }
        iVar6 = FUN_008349fa(iVar5,local_14,&local_10,&local_28);
        if (iVar6 != 0) {
          local_50 = local_10;
          if (*(short *)((int)puVar2 + 6) != -1) {
            local_50 = (*(byte *)(iVar5 + 7) + 1) * (uint)*(ushort *)(iVar5 + 8) *
                       (int)*(short *)((int)puVar2 + 6) * 0x100 + local_10;
          }
          local_c = local_c + local_28;
          local_48 = *param_3;
          local_3c = local_2c;
          local_4c = local_28;
          local_44 = local_30;
          local_40 = (uint)*(ushort *)(iVar5 + 2);
          if (local_8 == 0) {
            local_38 = *(byte *)(param_1 + 10) >> 5 & 1;
          }
          else {
            local_38 = 0;
          }
          local_54 = uVar3;
          (*DAT_009c2be0)(&local_54);
          FUN_0083298b(iVar5,local_14);
        }
        local_8 = local_8 + 1;
      } while (local_8 < (int)local_34);
    }
    local_14 = 0;
    if (DAT_009c29f4 != 0) {
      local_14 = (local_c * 100) / DAT_009c29f4;
    }
  }
  return local_14;
}

