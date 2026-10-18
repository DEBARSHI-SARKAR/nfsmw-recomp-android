/* speed.exe 007a0290 FUN_007a0290; analysis pseudocode, not buildable source.
 * calls 0078b120 FUN_0078b120
 * calls 0079f720 FUN_0079f720
 */

void FUN_007a0290(void)

{
  int iVar1;
  char cVar2;
  uint local_21c;
  undefined1 local_218 [4];
  undefined2 local_214;
  undefined1 local_210 [528];
  
  if ((DAT_009b4218 != 0) && (*(int *)(DAT_009b4218 + 0x88) == 3)) {
    iVar1 = *(int *)(DAT_009b4218 + 0x9c);
    local_21c = local_21c & 0xffffff00;
    if (iVar1 != 0) {
      cVar2 = FUN_0078b120(iVar1,local_218,&local_21c);
      while (cVar2 != '\0') {
        FUN_0079f720(local_210,local_214,local_21c);
        cVar2 = FUN_0078b120(iVar1,local_218,&local_21c);
      }
    }
  }
  return;
}

