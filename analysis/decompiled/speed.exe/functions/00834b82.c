/* speed.exe 00834b82 FUN_00834b82; analysis pseudocode, not buildable source.
 * calls 00831d8f FUN_00831d8f
 */

uint FUN_00834b82(undefined4 param_1,uint param_2,int param_3,uint *param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = 0;
  FUN_00831d8f(param_1,&local_18);
  uVar6 = (uint)*(byte *)(param_2 + 7);
  puVar4 = (undefined1 *)(((uint)*(byte *)(param_2 + 6) * 2 + 3 & 0xfffffffc) + 0xc + param_2);
  if (uVar6 != 0) {
    local_10 = 0x1f;
    puVar3 = puVar4;
    local_14 = uVar6;
    do {
      param_2 = 0;
      if ((byte)puVar3[1] != 0) {
        uVar5 = 1 << ((byte)local_10 & 0x1f);
        if (DAT_009c2be4 == (code *)0x0) {
          iVar2 = -1;
        }
        else {
          iVar2 = (*DAT_009c2be4)(param_1,*puVar3,
                                  *(undefined4 *)(param_3 + (uint)(byte)puVar3[1] * 4),local_18);
        }
        if (iVar2 == 0) {
          param_2 = 0;
          uVar5 = param_2;
        }
        else if (iVar2 < 1) {
          local_8 = local_8 | uVar5;
          uVar5 = param_2;
        }
        param_2 = uVar5;
        local_c = local_c | param_2;
      }
      puVar3 = puVar3 + 3;
      local_10 = local_10 + -1;
      local_14 = local_14 - 1;
    } while (local_14 != 0);
    if (uVar6 != 0) {
      bVar1 = 0x1f;
      local_14 = uVar6;
      do {
        if (puVar4[1] == '\0') {
          uVar6 = 1 << (bVar1 & 0x1f);
          if (DAT_009c2be4 == (code *)0x0) {
            iVar2 = -1;
          }
          else {
            iVar2 = (*DAT_009c2be4)(param_1,*puVar4,0,local_18);
          }
          if (iVar2 == 0) {
            uVar6 = 0;
          }
          else if (iVar2 < 1) {
            local_8 = local_8 | uVar6;
            uVar6 = 0;
          }
          local_c = local_c | uVar6;
        }
        puVar4 = puVar4 + 3;
        bVar1 = bVar1 - 1;
        local_14 = local_14 - 1;
      } while (local_14 != 0);
    }
  }
  *param_4 = local_8;
  return local_c;
}

