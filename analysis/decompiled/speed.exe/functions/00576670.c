/* speed.exe 00576670 FUN_00576670; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00576670(undefined4 param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined3 uVar5;
  undefined4 uVar4;
  
  cVar1 = *(char *)(&DAT_0091cd10 + param_2 * 2);
  uVar3 = *(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) >> 0xe & 0xffffff01;
  uVar5 = (undefined3)(uVar3 >> 8);
  bVar2 = (byte)uVar3 | param_3 <= cVar1 | *(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0x90dc) |
          DAT_00926124;
  uVar4 = CONCAT31(uVar5,bVar2);
  if (param_4 != '\0') {
    bVar2 = bVar2 | param_3 <= cVar1 + 1;
    uVar4 = CONCAT31(uVar5,bVar2);
    if (cVar1 == *(char *)((int)&DAT_0091ccc0 + param_2)) {
      uVar4 = CONCAT31(uVar5,bVar2 | param_3 < 8);
    }
  }
  return uVar4;
}

