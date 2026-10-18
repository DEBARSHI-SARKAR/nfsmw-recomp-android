/* speed.exe 00833b81 FUN_00833b81; analysis pseudocode, not buildable source.
 * calls 008349d8 FUN_008349d8
 * calls 00831dbc FUN_00831dbc
 */

void FUN_00833b81(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBX;
  byte *pbVar4;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  byte *local_8;
  
  iVar1 = FUN_00831dbc(param_1,&local_18);
  if (iVar1 != 0) {
    local_10 = 0;
    uVar2 = (uint)(*(byte *)(unaff_EBX + 2) >> 2);
    if (uVar2 != 0) {
      pbVar4 = (byte *)(param_2 + 10);
      local_14 = uVar2;
      do {
        local_c = 0;
        iVar1 = unaff_EBX + (uint)*(byte *)(unaff_EBX + 8 + local_10) * 4;
        if ('\0' < *(char *)(iVar1 + 4)) {
          local_8 = (byte *)(iVar1 + 0xe);
          do {
            if (((local_8[-2] == 0xfe) && ((*local_8 & 0x80) == 0)) &&
               (iVar3 = FUN_008349d8(*(undefined4 *)(DAT_009c2c10 + 4 + *(short *)(pbVar4 + -6) * 8)
                                     ,*(undefined1 *)(*pbVar4 + 0x92 + param_2)), uVar2 = local_14,
               iVar3 != 0)) {
              *(undefined1 *)((uint)*local_8 + local_18) = *(undefined1 *)(iVar3 + local_c);
            }
            local_c = local_c + 1;
            local_8 = local_8 + 8;
          } while (local_c < *(char *)(iVar1 + 4));
        }
        local_10 = local_10 + 1;
        pbVar4 = pbVar4 + 0xc;
      } while (local_10 < (int)uVar2);
    }
  }
  return;
}

