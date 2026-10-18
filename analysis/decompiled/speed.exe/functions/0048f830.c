/* speed.exe 0048f830 FUN_0048f830; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_0048f830(int param_1,undefined4 param_2,int param_3,undefined4 param_4,ushort *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint local_434;
  byte *local_430;
  uint local_42c;
  int local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined2 local_408;
  uint local_404;
  int *local_400;
  int local_3fc [255];
  
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = iVar2 + (uint)*param_5 * 0xc;
  local_41c = *(int *)(iVar1 + 0xc);
  local_418 = *(undefined4 *)(param_5 + 2);
  local_414 = 0;
  local_410 = 0;
  local_404 = (uint)*(ushort *)(iVar1 + 0x10);
  local_408 = *(undefined2 *)(iVar1 + 0x12);
  local_400 = local_3fc;
  local_40c = param_4;
  local_430 = (byte *)((uint)*(ushort *)(*(int *)(param_1 + 0xc) + (uint)param_5[1] * 2) +
                      *(int *)(param_1 + 0x10));
  uVar7 = 0;
  local_42c = 0;
  if (local_404 != 0) {
    do {
      uVar8 = (uint)*(byte *)(*(int *)(iVar2 + 8) + (local_42c & 0xffff) + *(int *)(iVar1 + 0x14));
      iVar9 = 0;
      local_434 = 0;
      do {
        uVar5 = 8 - uVar7;
        if ((int)uVar8 <= (int)(8 - uVar7)) {
          uVar5 = uVar8;
        }
        bVar4 = (byte)uVar7;
        uVar7 = uVar7 + uVar5;
        uVar8 = uVar8 - uVar5;
        bVar6 = (byte)iVar9;
        iVar9 = iVar9 + uVar5;
        local_434 = local_434 |
                    ((uint)(*local_430 >> (bVar4 & 0x1f)) & (1 << ((byte)uVar5 & 0x1f)) - 1U) <<
                    (bVar6 & 0x1f);
        if (7 < uVar7) {
          uVar7 = 0;
          local_430 = local_430 + 1;
        }
      } while (0 < (int)uVar8);
      local_3fc[local_42c] =
           *(int *)(*(int *)(iVar2 + 4) + (*(int *)(iVar1 + 0x14) + (local_42c & 0xffff)) * 4) +
           local_434;
      local_42c = local_42c + 1;
    } while ((int)local_42c < (int)local_404);
  }
  puVar3 = *(undefined4 **)(param_3 + local_41c * 4);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(param_2,&local_41c,&local_40c);
  }
  return;
}

