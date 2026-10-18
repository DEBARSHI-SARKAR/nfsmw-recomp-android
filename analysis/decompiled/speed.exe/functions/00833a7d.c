/* speed.exe 00833a7d FUN_00833a7d; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00833a7d(int param_1)

{
  bool bVar1;
  int in_EAX;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 local_c;
  
  local_c = 0;
  bVar1 = false;
  iVar3 = (*(byte *)(in_EAX + 2) >> 2) - 1;
  pbVar2 = (byte *)(param_1 + iVar3 * 0xc);
  uVar4 = (uint)pbVar2[9] + (uint)pbVar2[8];
  pbVar5 = pbVar2 + 8;
  do {
    pbVar2[10] = pbVar2[10] + 1;
    if (pbVar2[10] < uVar4) {
      return local_c;
    }
    iVar3 = iVar3 + -1;
    pbVar2[10] = *pbVar5;
    if (iVar3 < 0) {
      bVar1 = true;
      local_c = 1;
    }
    uVar4 = (uint)pbVar5[-0xb] + (uint)pbVar5[-0xc];
    pbVar2 = pbVar5 + -0x14;
    pbVar5 = pbVar5 + -0xc;
  } while (!bVar1);
  return local_c;
}

