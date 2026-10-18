/* speed.exe 006cbf00 FUN_006cbf00; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000a CreateDirectoryA
 * calls EXTERNAL:0000002a FindClose
 * calls 00460ed0 FUN_00460ed0
 * calls 007f3d00 FUN_007f3d00
 * calls EXTERNAL:000000dc SHGetFolderPathA
 * calls EXTERNAL:00000028 FindFirstFileA
 * calls EXTERNAL:00000029 FindNextFileA
 */

void FUN_006cbf00(void)

{
  HANDLE hFindFile;
  BOOL BVar1;
  uint uVar2;
  CHAR aCStack_258 [4];
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 *puStack_248;
  undefined1 local_240 [232];
  _WIN32_FIND_DATAA _Stack_158;
  int iStack_10;
  
  puStack_248 = local_240;
  uStack_24c = 0;
  uStack_250 = 0;
  uStack_254 = 0x8005;
  aCStack_258[0] = '\0';
  aCStack_258[1] = '\0';
  aCStack_258[2] = '\0';
  aCStack_258[3] = '\0';
  SHGetFolderPathA();
  CreateDirectoryA((LPCSTR)&uStack_254,(LPSECURITY_ATTRIBUTES)0x0);
  FUN_00460ed0(&uStack_254,&uStack_254,&DAT_0089b6f4);
  FUN_00460ed0(&uStack_254,&uStack_254,PTR_s_NFS_Most_Wanted_00901748);
  CreateDirectoryA((LPCSTR)&uStack_254,(LPSECURITY_ATTRIBUTES)0x0);
  FUN_007f3d00(&uStack_254);
  FUN_00460ed0(aCStack_258,aCStack_258,&DAT_0089b6dc);
  hFindFile = FindFirstFileA(aCStack_258,&_Stack_158);
  if (hFindFile != (HANDLE)0xffffffff) {
    BVar1 = FindNextFileA(hFindFile,&_Stack_158);
    if (BVar1 != 0) {
      uVar2 = 1;
      do {
        uVar2 = uVar2 + 1;
        BVar1 = FindNextFileA(hFindFile,&_Stack_158);
      } while (BVar1 != 0);
      if (2 < uVar2) {
        *(undefined1 *)(iStack_10 + 4) = 1;
      }
    }
    FindClose(hFindFile);
    return;
  }
  *(undefined1 *)(iStack_10 + 4) = 0;
  return;
}

