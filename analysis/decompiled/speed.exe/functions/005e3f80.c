/* speed.exe 005e3f80 FUN_005e3f80; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 */

void __fastcall FUN_005e3f80(int param_1)

{
  int iVar1;
  uint uVar2;
  size_t _Size;
  void *pvVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int local_c;
  uint *local_8;
  
  uVar7 = DAT_0091e004[8];
  local_c = 0;
  if (uVar7 != 0) {
    piVar5 = (int *)(DAT_0091e004[9] + 0x14);
    local_c = 0;
    do {
      iVar6 = *piVar5;
      if (((iVar6 != 0) && ((*(byte *)(iVar6 + 8) & 1) == 0)) &&
         ((local_c == 0 ||
          ((uint)(*(int *)(local_c + 0x30) + *(int *)(local_c + 0x24) + *(int *)(local_c + 0x14)) <
           (uint)(*(int *)(iVar6 + 0x30) + *(int *)(iVar6 + 0x24) + *(int *)(iVar6 + 0x14)))))) {
        local_c = iVar6;
      }
      piVar5 = piVar5 + 7;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  iVar6 = 0;
  uVar7 = 0;
  uVar8 = DAT_0091e004[1] + *DAT_0091e004;
  if (uVar8 != 0) {
    iVar9 = 0;
    local_8 = DAT_0091e004 + (4 - *DAT_0091e004);
    iVar6 = 0;
    do {
      if (uVar7 < *DAT_0091e004) {
        uVar2 = DAT_0091e004[3] + iVar9;
      }
      else {
        uVar2 = *local_8;
      }
      iVar1 = *(int *)(uVar2 + 0x10);
      if (((iVar1 != 0) && ((*(byte *)(iVar1 + 8) & 1) == 0)) &&
         ((iVar6 == 0 ||
          ((uint)(*(int *)(iVar6 + 0x30) + *(int *)(iVar6 + 0x24) + *(int *)(iVar6 + 0x14)) <
           (uint)(*(int *)(iVar1 + 0x30) + *(int *)(iVar1 + 0x24) + *(int *)(iVar1 + 0x14)))))) {
        iVar6 = iVar1;
      }
      local_8 = local_8 + 1;
      uVar7 = uVar7 + 1;
      iVar9 = iVar9 + 0x14;
    } while (uVar7 < uVar8);
  }
  if (local_c == 0) {
    _Size = 0;
  }
  else {
    _Size = *(int *)(local_c + 0x30) + *(int *)(local_c + 0x24) + *(int *)(local_c + 0x14);
  }
  *(size_t *)(param_1 + 0x30) = _Size;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(iVar6 + 0x30) + *(int *)(iVar6 + 0x24) + *(int *)(iVar6 + 0x14);
  }
  *(int *)(param_1 + 0x3c) = iVar6;
  pvVar3 = _malloc(_Size);
  *(void **)(param_1 + 0x34) = pvVar3;
  pvVar3 = _malloc(*(size_t *)(param_1 + 0x3c));
  *(void **)(param_1 + 0x40) = pvVar3;
  uVar7 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar6 = *(int *)(param_1 + 0x20);
    puVar4 = (uint *)(*(int *)(param_1 + 0x24) + 0x1c);
    do {
      if (((~(byte)puVar4[-5] & 1) != 0) && (uVar7 <= *puVar4)) {
        uVar7 = *puVar4;
      }
      puVar4 = puVar4 + 0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  pvVar3 = _malloc(uVar7);
  *(void **)(param_1 + 0x48) = pvVar3;
  return;
}

