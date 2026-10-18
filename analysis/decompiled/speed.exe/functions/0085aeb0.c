/* speed.exe 0085aeb0 FUN_0085aeb0; analysis pseudocode, not buildable source.
 */

void FUN_0085aeb0(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_4;
  
  local_4 = (uint)*(byte *)(param_1 + 0x101);
  uVar3 = (uint)*(byte *)(param_1 + 0x100);
  if (param_3 < 1) {
    *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100);
    *(byte *)(param_1 + 0x101) = *(byte *)(param_1 + 0x101);
    return;
  }
  do {
    uVar4 = uVar3 + 1;
    uVar3 = uVar4 & 0xff;
    bVar1 = *(byte *)(uVar3 + param_1);
    uVar5 = local_4 + bVar1;
    local_4 = uVar5 & 0xff;
    bVar2 = *(byte *)(local_4 + param_1);
    *(byte *)(uVar3 + param_1) = bVar2;
    *(byte *)(local_4 + param_1) = bVar1;
    *param_2 = *param_2 ^ *(byte *)(((uint)bVar2 + (uint)bVar1 & 0xff) + param_1);
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  *(char *)(param_1 + 0x100) = (char)uVar4;
  local_4._0_1_ = (undefined1)uVar5;
  *(undefined1 *)(param_1 + 0x101) = (undefined1)local_4;
  return;
}

