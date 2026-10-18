/* speed.exe 0082fe00 FUN_0082fe00; analysis pseudocode, not buildable source.
 * calls 0082fd90 FUN_0082fd90
 */

int FUN_0082fe00(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 < 0) {
    return -1;
  }
  if (((int)(uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x18) + 0x12) < param_1) ||
     (puVar2 = (uint *)(*(int *)(DAT_009c2964 + 0x18) +
                       (uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x1c) + param_1 * 2) * 4),
     puVar2 == (uint *)0x0)) {
    return -1;
  }
  iVar4 = *(int *)(DAT_009c2964 + 0x40 + (*puVar2 >> 0x10 & 0x1f) * 4);
  puVar1 = puVar2 + 4;
  if (*(short *)(iVar4 + 6) == param_1) {
    uVar3 = *(uint *)(iVar4 + 8);
    param_2 = (byte)((int)(uVar3 << 0xc) >> 0x1b) & 0x7f;
    if (((0 < (int)(*puVar2 & 0xf8000000)) && (param_3 != 0)) &&
       (*(uint *)(iVar4 + 8) =
             (((int)((uVar3 & 0xffff8000) << 0xc) >> 0xc) - 1U ^ uVar3) & 0xf8000 ^ uVar3,
       (int)(uVar3 << 0xc) >> 0x1b == 0)) {
      *(undefined2 *)(iVar4 + 6) = 0xffff;
    }
  }
  uVar3 = 0;
  uVar5 = puVar2[1] >> 0xc & 0x1f;
  if (uVar5 != 0) {
    while (((int)param_2 < (int)(char)puVar1[uVar3] ||
           ((int)*(char *)((int)puVar2 + uVar3 * 4 + 0x11) < (int)param_2))) {
      uVar3 = uVar3 + 1;
      if (uVar5 <= uVar3) {
        iVar4 = FUN_0082fd90(uVar5,param_2,puVar1);
        return iVar4;
      }
    }
    iVar4 = (int)*(short *)((int)puVar2 + uVar3 * 4 + 0x12);
    if (-1 < iVar4) {
      return iVar4;
    }
  }
  iVar4 = FUN_0082fd90(uVar5,param_2,puVar1);
  return iVar4;
}

