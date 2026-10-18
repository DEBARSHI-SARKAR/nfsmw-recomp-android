/* speed.exe 007d5200 ___sbh_find_block; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    ___sbh_find_block
   
   Library: Visual Studio 2003 Debug */

uint ___sbh_find_block(int param_1)

{
  uint local_c;
  
  local_c = DAT_009c52ec;
  while( true ) {
    if (DAT_009c52e8 * 0x14 + DAT_009c52ec <= local_c) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(local_c + 0xc)) < 0x100000) break;
    local_c = local_c + 0x14;
  }
  return local_c;
}

