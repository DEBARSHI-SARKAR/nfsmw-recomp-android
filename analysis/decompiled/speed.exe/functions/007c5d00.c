/* speed.exe 007c5d00 __onexit_lk; analysis pseudocode, not buildable source.
 * calls 007c7730 __msize_dbg
 * calls 007c6bf0 __realloc_dbg
 */

/* Library Function - Single Match
    __onexit_lk
   
   Library: Visual Studio 2003 Debug */

undefined4 __onexit_lk(undefined4 param_1)

{
  uint uVar1;
  uint local_10;
  int local_8;
  
  uVar1 = __msize_dbg(DAT_009c544c,2);
  if (uVar1 < (uint)((int)DAT_009c5448 + (4 - DAT_009c544c))) {
    local_10 = uVar1;
    if (0x7ff < uVar1) {
      local_10 = 0x800;
    }
    local_8 = __realloc_dbg(DAT_009c544c,uVar1 + local_10,2,"onexit.c",0x7d);
    if ((local_8 == 0) &&
       (local_8 = __realloc_dbg(DAT_009c544c,uVar1 + 0x10,2,"onexit.c",0x83), local_8 == 0)) {
      return 0;
    }
    DAT_009c5448 = (undefined4 *)(local_8 + ((int)DAT_009c5448 - DAT_009c544c >> 2) * 4);
    DAT_009c544c = local_8;
  }
  *DAT_009c5448 = param_1;
  DAT_009c5448 = DAT_009c5448 + 1;
  return param_1;
}

