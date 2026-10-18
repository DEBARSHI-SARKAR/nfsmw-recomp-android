/* speed.exe 0082181c FUN_0082181c; analysis pseudocode, not buildable source.
 * calls 0081ec32 FUN_0081ec32
 */

int FUN_0082181c(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  int local_c;
  int local_8;
  
  FUN_0081ec32(param_1,&local_8,&local_c);
  iVar1 = 0;
  if (local_8 < local_c) {
    pcVar2 = (char *)(local_8 * 0x90 + 0x6d + DAT_009c21f4);
    local_c = local_c - local_8;
    do {
      if (*pcVar2 != '\0') {
        iVar1 = iVar1 + 1;
      }
      pcVar2 = pcVar2 + 0x90;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return iVar1;
}

