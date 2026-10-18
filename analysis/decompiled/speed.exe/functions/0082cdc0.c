/* speed.exe 0082cdc0 FUN_0082cdc0; analysis pseudocode, not buildable source.
 */

void FUN_0082cdc0(uint *param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = *param_1 & 0xff;
  bVar2 = 0 < param_2;
  param_1[2] = (uint)(param_2 != 0) << 0x1f | param_1[2] & 0x7fffffff;
  if (((DAT_009c2954 != 0) &&
      (puVar1 = *(uint **)(DAT_009c2954 + 0x40 + uVar3 * 4), puVar1 != (uint *)0x0)) &&
     (puVar1 != param_1)) {
    puVar1[2] = (uint)!bVar2 << 0x1f | puVar1[2] & 0x7fffffff;
    bVar2 = true;
  }
  if (((DAT_009c2958 != 0) &&
      (puVar1 = *(uint **)(DAT_009c2958 + 0x40 + uVar3 * 4), puVar1 != (uint *)0x0)) &&
     (puVar1 != param_1)) {
    puVar1[2] = (uint)!bVar2 << 0x1f | puVar1[2] & 0x7fffffff;
    bVar2 = true;
  }
  if (((DAT_009c295c != 0) &&
      (puVar1 = *(uint **)(DAT_009c295c + 0x40 + uVar3 * 4), puVar1 != (uint *)0x0)) &&
     (puVar1 != param_1)) {
    puVar1[2] = (uint)!bVar2 << 0x1f | puVar1[2] & 0x7fffffff;
    bVar2 = true;
  }
  if (((DAT_009c2960 != 0) &&
      (puVar1 = *(uint **)(DAT_009c2960 + 0x40 + uVar3 * 4), puVar1 != (uint *)0x0)) &&
     (puVar1 != param_1)) {
    puVar1[2] = (uint)!bVar2 << 0x1f | puVar1[2] & 0x7fffffff;
    return;
  }
  if (!bVar2) {
    param_1[2] = param_1[2] | 0x80000000;
  }
  return;
}

