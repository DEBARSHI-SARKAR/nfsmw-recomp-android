/* speed.exe 007dab30 __get_fname; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    __get_fname
   
   Library: Visual Studio */

undefined * __get_fname(int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x1c < local_8) {
      return (undefined *)0x0;
    }
    if (*(int *)(&DAT_00906ee8 + local_8 * 8) == param_1) break;
    local_8 = local_8 + 1;
  }
  return (&PTR_DAT_00906eec)[local_8 * 2];
}

