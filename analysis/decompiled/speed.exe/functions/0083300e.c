/* speed.exe 0083300e FUN_0083300e; analysis pseudocode, not buildable source.
 * calls 00832f5b FUN_00832f5b
 */

void FUN_0083300e(undefined4 param_1,int param_2)

{
  uint *puVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar3 = FUN_00832f5b(param_1);
  cVar2 = *(char *)(in_EAX + 4);
  iVar5 = 0;
  if (0 < cVar2) {
    pbVar4 = (byte *)(in_EAX + 0xe);
    do {
      if ((pbVar4[-2] == 0xfe) && ((char)*pbVar4 < '\0')) {
        puVar1 = (uint *)(iVar3 + (*pbVar4 & 0x7f) * 4);
        *puVar1 = *puVar1 | 1 << (*(byte *)(iVar5 + param_2) & 0x1f);
      }
      iVar5 = iVar5 + 1;
      pbVar4 = pbVar4 + 8;
    } while (iVar5 < cVar2);
  }
  return;
}

