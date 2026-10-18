/* speed.exe 00518b40 FUN_00518b40; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000002a FindClose
 * calls 00518570 FUN_00518570
 * calls EXTERNAL:000000dc SHGetFolderPathA
 * calls EXTERNAL:00000029 FindNextFileA
 * calls 00460ed0 FUN_00460ed0
 * calls EXTERNAL:00000028 FindFirstFileA
 */

void FUN_00518b40(void)

{
  HANDLE hFindFile;
  BOOL BVar1;
  uint uVar2;
  CHAR aCStack_254 [8];
  undefined1 *puStack_24c;
  undefined1 local_240 [236];
  _WIN32_FIND_DATAA _Stack_154;
  
  puStack_24c = local_240;
  aCStack_254[4] = '\0';
  aCStack_254[5] = '\0';
  aCStack_254[6] = '\0';
  aCStack_254[7] = '\0';
  aCStack_254[0] = '\0';
  aCStack_254[1] = '\0';
  aCStack_254[2] = '\0';
  aCStack_254[3] = '\0';
  SHGetFolderPathA(0,0x801c);
  FUN_00460ed0(aCStack_254,aCStack_254,&DAT_0089b6f4);
  FUN_00460ed0(aCStack_254,aCStack_254,"NFS Underground 2");
  FUN_00460ed0(aCStack_254,aCStack_254,&DAT_0089b6dc);
  hFindFile = FindFirstFileA(aCStack_254,&_Stack_154);
  if (hFindFile != (HANDLE)0xffffffff) {
    uVar2 = 1;
    BVar1 = FindNextFileA(hFindFile,&_Stack_154);
    if (BVar1 != 0) {
      do {
        uVar2 = uVar2 + 1;
        BVar1 = FindNextFileA(hFindFile,&_Stack_154);
      } while (BVar1 != 0);
      if (2 < uVar2) {
        *(undefined1 *)(DAT_0091cb20 + 0x1c) = 1;
      }
    }
    FindClose(hFindFile);
  }
  FUN_00518570();
  return;
}

