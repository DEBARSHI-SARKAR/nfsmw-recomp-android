/* speed.exe 0064ea60 FUN_0064ea60; analysis pseudocode, not buildable source.
 * calls 0064ea00 FUN_0064ea00
 */

void FUN_0064ea60(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *local_824;
  uint local_81c;
  uint local_818;
  uint *local_814;
  uint local_810 [258];
  uint auStack_408 [258];
  
  local_81c = 0x100;
  local_810[0] = 0;
  uVar7 = 1;
  uVar4 = 0;
  puVar2 = (uint *)(param_1 + 0x100);
  do {
    puVar2[0x919] = 99;
    if (*puVar2 != 0) {
      local_810[uVar7] = *puVar2;
      auStack_408[uVar7] = uVar4;
      uVar7 = uVar7 + 1;
    }
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar4 < 0x100);
  *(uint *)(param_1 + 0x2dc4) = uVar7 - 1;
  if (2 < uVar7) {
    local_818 = uVar7 - 2;
    local_824 = (uint *)(param_1 + 0x2144);
    uVar4 = local_81c;
    do {
      local_81c = uVar4;
      puVar2 = (&local_814)[uVar7];
      local_814 = &local_818;
      puVar6 = (uint *)(&local_818)[uVar7];
      puVar3 = puVar2;
      uVar4 = local_818;
      uVar8 = local_818 + 1;
      if (puVar2 < puVar6) {
        puVar3 = puVar6;
        puVar6 = puVar2;
        uVar4 = local_818 + 1;
        uVar8 = local_818;
      }
      uVar5 = local_818;
      uVar1 = uVar4;
      if (local_818 != 0) {
        while( true ) {
          uVar4 = uVar1;
          puVar2 = (&local_814)[uVar5];
          while (uVar5 = uVar5 - 1, puVar3 < puVar2) {
            puVar2 = (&local_814)[uVar5];
          }
          if (uVar5 == 0) break;
          puVar2 = (uint *)local_810[uVar5];
          puVar3 = puVar2;
          uVar1 = uVar4;
          uVar8 = uVar5;
          if (puVar2 <= puVar6) {
            puVar3 = puVar6;
            puVar6 = puVar2;
            uVar1 = uVar5;
            uVar8 = uVar4;
          }
        }
      }
      local_824[-0x208] = auStack_408[uVar8];
      local_810[uVar8] = (int)puVar6 + (int)puVar3;
      uVar5 = auStack_408[uVar4];
      auStack_408[uVar8] = local_81c;
      puVar2 = (&local_814)[uVar7];
      uVar7 = uVar7 - 1;
      *local_824 = uVar5;
      local_818 = local_818 - 1;
      local_810[uVar4] = (uint)puVar2;
      local_824 = local_824 + 1;
      auStack_408[uVar4] = auStack_408[uVar7];
      uVar4 = local_81c + 1;
    } while (2 < uVar7);
    FUN_0064ea00(param_1,local_81c,0);
    return;
  }
  FUN_0064ea00(param_1,auStack_408[uVar7 - 1],1);
  return;
}

