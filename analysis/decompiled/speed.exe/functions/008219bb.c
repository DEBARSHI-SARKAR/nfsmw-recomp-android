/* speed.exe 008219bb FUN_008219bb; analysis pseudocode, not buildable source.
 * calls 0082192e FUN_0082192e
 */

void FUN_008219bb(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 * 0x90 + DAT_009c21f4;
  if (*(short *)(iVar4 + 0x8a) == 0) {
    iVar3 = (int)*(short *)(iVar4 + 0x88);
    if (*(short *)(iVar4 + 0x86) != 0) {
      if (*(int *)(iVar4 + 0x78) == 0) {
        cVar1 = *(char *)(iVar4 + 0x68);
      }
      else {
        cVar1 = *(char *)((int)*(char *)(iVar4 + 0x68) + *(int *)(iVar4 + 0x78));
      }
      iVar3 = iVar3 + ((cVar1 + -0x40) * (int)*(short *)(iVar4 + 0x86) >> 6);
    }
    if (*(int *)(iVar4 + 0x80) != 0) {
      iVar3 = iVar3 + ((*(char *)((uint)*(byte *)(iVar4 + 0x6c) + *(int *)(iVar4 + 0x80)) + -0x40) *
                       (int)*(short *)(iVar4 + 0x84) >> 6);
    }
    uVar2 = FUN_0082192e(iVar3);
    *(undefined2 *)(iVar4 + 0x8a) = uVar2;
  }
  *(short *)(iVar4 + 0x8e) =
       (short)((int)((uint)*(ushort *)(iVar4 + 0x8c) * (uint)*(ushort *)(iVar4 + 0x8a)) >> 0xc);
  return;
}

