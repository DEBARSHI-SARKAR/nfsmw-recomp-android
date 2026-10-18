/* speed.exe 004557d0 FUN_004557d0; analysis pseudocode, not buildable source.
 * calls 00453be0 FUN_00453be0
 */

uint * __thiscall FUN_004557d0(int *param_1,uint *param_2,int param_3,char param_4)

{
  uint uVar1;
  byte bVar2;
  uint *puVar3;
  
  bVar2 = *(byte *)((int)param_2 + 0xb) >> 4 & 1;
  if ((bVar2 == 0) && ((uint *)param_2[1] == param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
  }
  if ((*(byte *)((int)param_2 + 0xb) & 0x20) == 0) {
    puVar3 = (uint *)param_2[1];
    if (bVar2 != 0) {
      puVar3 = (uint *)((int)puVar3 + param_3);
    }
  }
  else {
    puVar3 = param_2 + 1;
  }
  param_2[1] = (uint)param_2;
  *param_2 = 0;
  param_1[2] = param_1[2] + -1;
  if (param_4 == '\0') {
    *(undefined1 *)((int)param_2 + 10) = 0;
  }
  else {
    bVar2 = (byte)*(undefined2 *)((int)param_1 + 0xe);
    uVar1 = FUN_00453be0((uVar1 >> (0x20 - bVar2 & 0x1f) | uVar1 << (bVar2 & 0x1f)) %
                         (uint)param_1[1],((int)param_2 - *param_1) / 0xc);
    if (uVar1 < (uint)param_1[1]) {
      do {
        uVar1 = FUN_00453be0(uVar1,uVar1);
      } while (uVar1 < (uint)param_1[1]);
      return puVar3;
    }
  }
  return puVar3;
}

