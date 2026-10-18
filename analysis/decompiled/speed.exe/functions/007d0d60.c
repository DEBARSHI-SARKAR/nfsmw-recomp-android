/* speed.exe 007d0d60 __mtinitlocks; analysis pseudocode, not buildable source.
 * calls 007ddc30 ___crtInitCritSecAndSpinCount
 */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2003 Debug */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  do {
    if (0x23 < local_c) {
      return 1;
    }
    if (*(int *)(&DAT_00906994 + local_c * 8) == 1) {
      *(undefined **)(&DAT_00906990 + local_c * 8) = &DAT_009bac20 + local_8 * 0x18;
      local_8 = local_8 + 1;
      iVar1 = ___crtInitCritSecAndSpinCount(*(undefined4 *)(&DAT_00906990 + local_c * 8),4000);
      if (iVar1 == 0) {
        *(undefined4 *)(&DAT_00906990 + local_c * 8) = 0;
        return 0;
      }
    }
    local_c = local_c + 1;
  } while( true );
}

