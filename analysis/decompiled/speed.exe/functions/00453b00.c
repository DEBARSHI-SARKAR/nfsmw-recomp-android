/* speed.exe 00453b00 FUN_00453b00; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_00453b00(int *param_1,uint param_2,byte param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_c;
  uint local_8;
  
  if ((param_1[2] == 0) || (param_2 == 0)) {
    return 0;
  }
  iVar1 = *param_1;
  bVar2 = (byte)*(undefined2 *)((int)param_1 + 0xe);
  local_8 = 0;
  uVar6 = (param_2 >> (0x20 - bVar2 & 0x1f) | param_2 << (bVar2 & 0x1f)) % (uint)param_1[1];
  iVar3 = uVar6 * 0xc;
  uVar5 = (uint)*(byte *)(iVar3 + 10 + iVar1);
  uVar8 = (uint)(iVar3 + iVar1) >> (param_3 & 0x1f);
  uVar7 = 0;
  if (uVar8 != 0) {
    uVar7 = uVar8;
  }
  local_c = (uint)(uVar8 != 0);
  if (uVar5 != 0) {
    do {
      puVar4 = (uint *)(iVar3 + iVar1);
      if (((*(byte *)(iVar3 + 0xb + iVar1) & 0x10) == 0) && ((uint *)puVar4[1] == puVar4)) {
        uVar8 = 0;
      }
      else {
        uVar8 = *puVar4;
      }
      if (uVar8 == param_2) {
        return local_c;
      }
      uVar6 = (uVar6 + 1) % (uint)param_1[1];
      iVar3 = uVar6 * 0xc;
      uVar8 = (uint)(iVar3 + iVar1) >> (param_3 & 0x1f);
      if (uVar8 != uVar7) {
        local_c = local_c + 1;
        uVar7 = uVar8;
      }
      local_8 = local_8 + 1;
    } while (local_8 < uVar5);
  }
  return local_c;
}

