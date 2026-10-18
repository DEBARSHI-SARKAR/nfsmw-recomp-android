/* speed.exe 005c5d40 FUN_005c5d40; analysis pseudocode, not buildable source.
 */

void FUN_005c5d40(uint param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = (uint *)((param_3 >> 3) + param_2 & 0xfffffffc);
  iVar4 = param_2 * 8 + (int)puVar1 * -8 + param_3;
  iVar5 = iVar4 + -0x20 + param_4;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  uVar3 = 0xffffffff >> (0x20U - ((char)param_4 - (char)iVar5) & 0x1f);
  bVar2 = (byte)iVar4;
  *puVar1 = ~(uVar3 << (bVar2 & 0x1f)) & *puVar1 | (uVar3 & param_1) << (bVar2 & 0x1f);
  if (0 < iVar5) {
    bVar2 = 0x20 - (char)iVar5;
    puVar1[1] = 0xffffffffU >> (bVar2 & 0x1f) & puVar1[1] | param_1 >> (bVar2 & 0x1f);
  }
  return;
}

