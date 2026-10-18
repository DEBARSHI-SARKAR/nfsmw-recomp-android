/* speed.exe 00833722 FUN_00833722; analysis pseudocode, not buildable source.
 * calls 00832f5b FUN_00832f5b
 */

undefined4 FUN_00833722(undefined4 param_1)

{
  char cVar1;
  byte bVar2;
  int in_EAX;
  int iVar3;
  byte *pbVar4;
  int local_8;
  
  local_8 = 0;
  cVar1 = *(char *)(in_EAX + 4);
  if (0 < cVar1) {
    pbVar4 = (byte *)(in_EAX + 0xe);
    do {
      if (pbVar4[-2] == 0xff) {
        bVar2 = *pbVar4;
        if ((((bVar2 != 0xff) && ((char)bVar2 < '\0')) &&
            (iVar3 = FUN_00832f5b(param_1), iVar3 != 0)) &&
           (*(int *)(iVar3 + (bVar2 & 0x7f) * 4) == 0)) {
          return 0;
        }
      }
      local_8 = local_8 + 1;
      pbVar4 = pbVar4 + 8;
    } while (local_8 < cVar1);
  }
  return 1;
}

