/* speed.exe 00833a21 FUN_00833a21; analysis pseudocode, not buildable source.
 * calls 008346ff FUN_008346ff
 */

void FUN_00833a21(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int in_EAX;
  uint uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint local_8;
  
  local_8 = (uint)(*(byte *)(in_EAX + 2) >> 2);
  if (local_8 != 0) {
    pbVar5 = (byte *)(param_1 + 9);
    do {
      iVar1 = pbVar5[-1] + 0x92 + param_1;
      for (uVar6 = (uint)*pbVar5; 1 < (int)uVar6; uVar6 = uVar6 - 1) {
        uVar3 = FUN_008346ff(uVar6,0xffffffff);
        puVar4 = (undefined1 *)((uVar3 & 0xffff) + iVar1);
        uVar2 = *(undefined1 *)(iVar1 + -1 + uVar6);
        *(undefined1 *)(iVar1 + -1 + uVar6) = *puVar4;
        *puVar4 = uVar2;
      }
      pbVar5 = pbVar5 + 0xc;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return;
}

