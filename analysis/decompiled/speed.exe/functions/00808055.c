/* speed.exe 00808055 FUN_00808055; analysis pseudocode, not buildable source.
 */

void FUN_00808055(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  short *psVar2;
  uint uVar3;
  char cVar4;
  
  bVar1 = (&DAT_008c4d50)[*(int *)(param_1 + 8) * 4];
  uVar3 = 0;
  cVar4 = (ushort)bVar1 == *(ushort *)(param_5 + 8);
  if ((bool)cVar4) {
    uVar3 = (uint)*(short *)(param_5 + 10);
  }
  if ((ushort)bVar1 == *(ushort *)(param_4 + 8)) {
    uVar3 = uVar3 + (int)*(short *)(param_4 + 10);
    cVar4 = cVar4 + '\x01';
  }
  if (cVar4 == '\0') {
    uVar3 = (uint)*(short *)(param_3 + (uint)bVar1 * 2);
  }
  if (cVar4 == '\x02') {
    uVar3 = (int)(((uVar3 & 0xffff) >> 0xf) + uVar3) >> 1;
  }
  psVar2 = (short *)(*(int *)(param_1 + 4) + param_2 * 0x80);
  *psVar2 = *psVar2 + (short)uVar3;
  *(undefined2 *)(param_3 + (uint)bVar1 * 2) =
       *(undefined2 *)(param_2 * 0x80 + *(int *)(param_1 + 4));
  return;
}

