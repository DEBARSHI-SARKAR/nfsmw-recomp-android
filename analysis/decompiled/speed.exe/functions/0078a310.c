/* speed.exe 0078a310 FUN_0078a310; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0078a310(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x400);
  *(uint *)(param_1 + 0x400) = uVar6 + param_3;
  uVar4 = uVar6 & 7;
  iVar1 = (int)uVar6 >> 3;
  uVar5 = param_2 << (0x20U - (char)param_3 & 0x1f);
  uVar6 = uVar5;
  if (uVar4 != 0) {
    iVar2 = 8 - uVar4;
    if (param_3 < (int)(8 - uVar4)) {
      iVar2 = param_3;
    }
    param_3 = param_3 - iVar2;
    uVar6 = uVar5 << ((byte)iVar2 & 0x1f);
    *(byte *)(iVar1 + param_1) = *(byte *)(iVar1 + param_1) | (byte)(uVar5 >> (char)uVar4 + 0x18);
    iVar1 = iVar1 + 1;
  }
  if (param_3 < 9) {
    *(char *)(iVar1 + param_1) = (char)(uVar6 >> 0x18);
  }
  else if (0 < param_3) {
    puVar3 = (undefined1 *)(iVar1 + param_1);
    iVar1 = (param_3 - 1U >> 3) + 1;
    do {
      *puVar3 = (char)(uVar6 >> 0x18);
      puVar3 = puVar3 + 1;
      uVar6 = uVar6 << 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
  }
  return;
}

