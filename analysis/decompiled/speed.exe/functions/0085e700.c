/* speed.exe 0085e700 FID_conflict:_remove; analysis pseudocode, not buildable source.
 * calls 007cb1d0 __dosmaperr
 * calls EXTERNAL:00000026 DeleteFileA
 * calls EXTERNAL:0000004a GetLastError
 */

/* Library Function - Multiple Matches With Different Base Names
    __wremove
    _remove
   
   Library: Visual Studio */

int __cdecl FID_conflict__remove(char *_Filename)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  BVar1 = DeleteFileA(_Filename);
  if (BVar1 == 0) {
    local_8 = GetLastError();
  }
  else {
    local_8 = 0;
  }
  if (local_8 == 0) {
    iVar2 = 0;
  }
  else {
    __dosmaperr(local_8);
    iVar2 = -1;
  }
  return iVar2;
}

