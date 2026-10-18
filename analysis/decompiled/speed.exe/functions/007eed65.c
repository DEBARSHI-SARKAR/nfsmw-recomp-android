/* speed.exe 007eed65 FUN_007eed65; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000a CreateDirectoryA
 * calls EXTERNAL:0000004a GetLastError
 * calls 007c97c0 FUN_007c97c0
 */

void FUN_007eed65(void)

{
  char cVar1;
  int iVar2;
  char *in_EAX;
  BOOL BVar3;
  undefined1 *puVar4;
  CHAR *pCVar5;
  CHAR local_108 [260];
  
  iVar2 = -(int)in_EAX;
  do {
    cVar1 = *in_EAX;
    in_EAX[(int)(local_108 + iVar2)] = cVar1;
    in_EAX = in_EAX + 1;
  } while (cVar1 != '\0');
  pCVar5 = local_108;
  do {
    puVar4 = (undefined1 *)FUN_007c97c0(pCVar5,0x5c);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)FUN_007c97c0(local_108,0x2f);
      if (puVar4 == (undefined1 *)0x0) {
        return;
      }
    }
    *puVar4 = 0;
    BVar3 = CreateDirectoryA(local_108,(LPSECURITY_ATTRIBUTES)0x0);
    if (BVar3 == 0) {
      GetLastError();
    }
    *puVar4 = 0x5c;
    pCVar5 = puVar4 + 1;
  } while( true );
}

