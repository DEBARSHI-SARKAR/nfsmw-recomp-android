/* speed.exe 00854980 FUN_00854980; analysis pseudocode, not buildable source.
 */

void FUN_00854980(undefined1 *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte *in_EAX;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  
  bVar4 = *in_EAX;
  while ((bVar4 != 0 && ((char)bVar4 < '!'))) {
    pbVar3 = in_EAX + 1;
    in_EAX = in_EAX + 1;
    bVar4 = *pbVar3;
  }
  *param_1 = 0;
  bVar4 = *in_EAX;
  bVar2 = bVar4;
  pbVar3 = in_EAX;
  while (('`' < (char)bVar2 && ((char)bVar2 < '{'))) {
    pbVar1 = pbVar3 + 1;
    pbVar3 = pbVar3 + 1;
    bVar2 = *pbVar1;
  }
  if ((*pbVar3 == 0x3a) && ((int)pbVar3 - (int)in_EAX < param_2)) {
    iVar5 = 0;
    if (bVar4 != 0x3a) {
      pbVar3 = in_EAX;
      do {
        pbVar3[(int)param_1 - (int)in_EAX] = bVar4;
        bVar4 = pbVar3[1];
        iVar5 = iVar5 + 1;
        pbVar3 = pbVar3 + 1;
      } while (bVar4 != 0x3a);
    }
    in_EAX = in_EAX + iVar5 + 1;
    param_1[iVar5] = 0;
  }
  bVar4 = *in_EAX;
  while ((bVar4 != 0 && ((char)bVar4 < '!'))) {
    pbVar3 = in_EAX + 1;
    in_EAX = in_EAX + 1;
    bVar4 = *pbVar3;
  }
  if ((*in_EAX == 0x2f) && (in_EAX[1] == 0x2f)) {
    in_EAX = in_EAX + 2;
  }
  iVar5 = 0;
  if (0 < param_4 + -1) {
    do {
      bVar4 = *in_EAX;
      if (((((char)bVar4 < '!') || (bVar4 == 0x2f)) || (bVar4 == 0x3f)) || (bVar4 == 0x3a)) break;
      in_EAX = in_EAX + 1;
      *(byte *)(iVar5 + param_3) = bVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_4 + -1);
  }
  *(undefined1 *)(iVar5 + param_3) = 0;
  iVar5 = 0;
  if (*in_EAX == 0x3a) {
    in_EAX = in_EAX + 1;
    bVar4 = *in_EAX;
    while (('/' < (char)bVar4 && ((char)bVar4 < ':'))) {
      in_EAX = in_EAX + 1;
      iVar5 = (bVar4 & 0xf) + iVar5 * 10;
      bVar4 = *in_EAX;
    }
  }
  *param_5 = iVar5;
  bVar4 = *in_EAX;
  while ((bVar4 != 0 && ((char)bVar4 < '!'))) {
    pbVar3 = in_EAX + 1;
    in_EAX = in_EAX + 1;
    bVar4 = *pbVar3;
  }
  return;
}

