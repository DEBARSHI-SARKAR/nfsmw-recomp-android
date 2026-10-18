/* speed.exe 00419ae0 FUN_00419ae0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 005cc240 FUN_005cc240
 * calls 00419910 FUN_00419910
 * calls 00627320 FUN_00627320
 * calls 00452940 FUN_00452940
 * calls 006ed200 FUN_006ed200
 */

undefined1 * FUN_00419ae0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_8;
  undefined1 *local_4;
  
  iVar1 = FUN_00419910();
  uVar7 = 0;
  if (iVar1 == 0) {
    return (undefined1 *)0x0;
  }
  local_4 = (undefined1 *)0x0;
  local_8 = 0;
  iVar2 = FUN_00452940();
  if (iVar2 != 0) {
    iVar2 = 0;
    do {
      iVar6 = *(int *)(iVar1 + 8);
      uVar3 = FUN_00452940();
      if (uVar7 < uVar3) {
        iVar6 = iVar6 + 8 + iVar2;
      }
      else {
        iVar6 = FUN_006269b0(0x18);
      }
      puVar4 = *(undefined1 **)(iVar6 + 0xc);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_00890978;
      }
      iVar5 = FUN_005cc240(puVar4);
      if (DAT_0090d8c8 != iVar5) {
        local_8 = local_8 + *(int *)(iVar6 + 0x10);
      }
      uVar7 = uVar7 + 1;
      iVar2 = iVar2 + 0x18;
      uVar3 = FUN_00452940();
    } while (uVar7 < uVar3);
  }
  FUN_006ed200();
  iVar2 = FUN_00627320();
  iVar6 = iVar2 * local_8 >> 0x10;
  uVar7 = 0;
  iVar2 = FUN_00452940();
  if (iVar2 != 0) {
    local_8 = 0;
    while( true ) {
      iVar2 = *(int *)(iVar1 + 8);
      uVar3 = FUN_00452940();
      if (uVar7 < uVar3) {
        iVar2 = local_8 + 8 + iVar2;
      }
      else {
        iVar2 = FUN_006269b0(0x18);
      }
      puVar4 = *(undefined1 **)(iVar2 + 0xc);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_00890978;
      }
      iVar5 = FUN_005cc240(puVar4);
      if ((DAT_0090d8c8 != iVar5) && (iVar6 = iVar6 - *(int *)(iVar2 + 0x10), iVar6 < 0)) break;
      local_8 = local_8 + 0x18;
      uVar7 = uVar7 + 1;
      uVar3 = FUN_00452940();
      if (uVar3 <= uVar7) {
        return (undefined1 *)0x0;
      }
    }
    local_4 = *(undefined1 **)(iVar2 + 0xc);
    if (local_4 == (undefined1 *)0x0) {
      local_4 = &DAT_00890978;
    }
  }
  return local_4;
}

