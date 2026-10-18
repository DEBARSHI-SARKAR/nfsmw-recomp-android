/* speed.exe 0080891b FUN_0080891b; analysis pseudocode, not buildable source.
 * calls 00801332 FUN_00801332
 * calls 00806f24 FUN_00806f24
 */

void FUN_0080891b(int param_1)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 *local_10;
  undefined1 *local_8;
  
  iVar1 = param_1 + 0x150;
  iVar6 = 0;
  local_8 = &DAT_008c54f9;
  do {
    iVar4 = FUN_00806f24(iVar1,local_8[-1]);
    if (iVar4 != 0) {
      cVar3 = FUN_00801332(iVar1,7);
      pcVar2 = (char *)(iVar6 + 0x70a + param_1);
      *pcVar2 = cVar3 << 1;
      if ((char)(cVar3 << 1) == '\0') {
        *pcVar2 = '\x01';
      }
    }
    iVar4 = FUN_00806f24(iVar1,*local_8);
    if (iVar4 != 0) {
      cVar3 = FUN_00801332(iVar1,7);
      pcVar2 = (char *)(iVar6 + 0x708 + param_1);
      *pcVar2 = cVar3 << 1;
      if ((char)(cVar3 << 1) == '\0') {
        *pcVar2 = '\x01';
      }
    }
    local_8 = local_8 + 0x11;
    iVar6 = iVar6 + 1;
  } while ((int)local_8 < 0x8c551b);
  iVar6 = param_1 + 0x70c;
  local_8 = &DAT_008c54fa;
  do {
    uVar7 = 0;
    local_10 = local_8;
    do {
      iVar4 = FUN_00806f24(iVar1,*local_10);
      if (iVar4 != 0) {
        cVar3 = FUN_00801332(iVar1,7);
        *(char *)(iVar6 + uVar7) = cVar3 << 1;
        if ((char)(cVar3 << 1) == '\0') {
          *(undefined1 *)(iVar6 + uVar7) = 1;
        }
      }
      uVar7 = uVar7 + 1;
      local_10 = local_10 + 1;
    } while (uVar7 < 7);
    local_8 = local_8 + 0x11;
    iVar6 = iVar6 + 7;
  } while ((int)local_8 < 0x8c551c);
  param_1 = param_1 + 0x720;
  local_8 = &DAT_008c5501;
  do {
    uVar7 = 0;
    puVar5 = local_8;
    do {
      iVar6 = FUN_00806f24(iVar1,*puVar5);
      if (iVar6 != 0) {
        cVar3 = FUN_00801332(iVar1,7);
        *(char *)(param_1 + uVar7) = cVar3 << 1;
        if ((char)(cVar3 << 1) == '\0') {
          *(undefined1 *)(param_1 + uVar7) = 1;
        }
      }
      uVar7 = uVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar7 < 8);
    local_8 = local_8 + 0x11;
    param_1 = param_1 + 8;
  } while ((int)local_8 < 0x8c5523);
  return;
}

