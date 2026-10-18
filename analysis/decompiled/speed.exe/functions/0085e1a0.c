/* speed.exe 0085e1a0 __getdiskfree; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000016 GetDiskFreeSpaceA
 * calls EXTERNAL:0000004a GetLastError
 */

/* Library Function - Single Match
    __getdiskfree
   
   Library: Visual Studio 2003 Debug */

uint __cdecl __getdiskfree(uint _Drive,_diskfree_t *_DiskFree)

{
  BOOL BVar1;
  uint uVar2;
  LPCSTR local_c;
  char local_8 [4];
  
  if (_Drive == 0) {
    local_c = (LPCSTR)0x0;
  }
  else {
    if (0x1a < _Drive) {
      return 0x57;
    }
    local_c = local_8;
    local_8[0] = (char)_Drive + '@';
    local_8[1] = 0x3a;
    local_8[2] = 0x5c;
    local_8[3] = 0;
  }
  BVar1 = GetDiskFreeSpaceA(local_c,&_DiskFree->sectors_per_cluster,&_DiskFree->bytes_per_sector,
                            &_DiskFree->avail_clusters,&_DiskFree->total_clusters);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

