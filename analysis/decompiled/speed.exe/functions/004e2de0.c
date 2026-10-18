/* speed.exe 004e2de0 FUN_004e2de0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_004e2de0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int local_18;
  int local_14;
  
  iVar2 = *(int *)(param_1 + 0x84);
  if (iVar2 == *(int *)(param_1 + 0x80)) {
    return 0;
  }
  bVar1 = *(byte *)(param_2 + 6);
  if ((bVar1 & 0x1f) != 0) {
    iVar3 = *(int *)(param_1 + 300);
    puVar6 = (uint *)(param_2 + 0x18);
    local_18 = 0;
    local_14 = 0;
    iVar5 = 0;
    if ((bVar1 & 0x1f) != 0) {
      do {
        uVar4 = *puVar6;
        uVar7 = uVar4 >> 0x10 & 0xff;
        puVar6 = puVar6 + 1;
        if (uVar7 == *(byte *)(param_2 + 2)) {
          *(uint *)(*(int *)(param_1 + 300) + (*(int *)(param_1 + 0x84) + local_14) * 4) =
               param_3 << 0xb | uVar4;
          local_18 = local_18 + 1;
        }
        else {
          iVar5 = 0;
          if (0 < *(int *)(param_1 + 4 + uVar7 * 4)) {
            do {
              *(uint *)(*(int *)(param_1 + 300) + (local_14 + iVar5 + *(int *)(param_1 + 0x84)) * 4)
                   = iVar5 << 0xb | uVar4;
              local_18 = local_18 + 1;
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)(param_1 + 4 + uVar7 * 4));
          }
        }
        local_14 = local_14 + 1;
        iVar5 = local_18;
      } while (local_14 < (int)(bVar1 & 0x1f));
    }
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xffffff | iVar5 << 0x18;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + iVar5;
    return iVar3 + iVar2 * 4;
  }
  return 0;
}

