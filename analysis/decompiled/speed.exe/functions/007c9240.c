/* speed.exe 007c9240 ___initstdio; analysis pseudocode, not buildable source.
 * calls 007c6b60 __calloc_dbg
 */

/* Library Function - Single Match
    ___initstdio
   
   Library: Visual Studio 2003 Debug */

undefined4 __fastcall ___initstdio(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_009c6460 == 0) {
    DAT_009c6460 = 0x200;
  }
  else if (DAT_009c6460 < 0x14) {
    DAT_009c6460 = 0x14;
  }
  DAT_009c5454 = __calloc_dbg(DAT_009c6460,4,2,"_file.c",0x89,param_1);
  if (DAT_009c5454 == 0) {
    DAT_009c6460 = 0x14;
    DAT_009c5454 = __calloc_dbg(0x14,4,2,"_file.c",0x8c,param_1);
    if (DAT_009c5454 == 0) {
      return 0x1a;
    }
  }
  for (iVar1 = 0; iVar1 < 0x14; iVar1 = iVar1 + 1) {
    *(undefined ***)(DAT_009c5454 + iVar1 * 4) = &PTR_DAT_00906330 + iVar1 * 8;
  }
  for (uVar2 = 0; (int)uVar2 < 3; uVar2 = uVar2 + 1) {
    if ((*(int *)((uVar2 & 0x1f) * 0x24 + (&DAT_009c5340)[(int)uVar2 >> 5]) == -1) ||
       (*(int *)((uVar2 & 0x1f) * 0x24 + (&DAT_009c5340)[(int)uVar2 >> 5]) == 0)) {
      *(undefined4 *)(&DAT_00906340 + uVar2 * 0x20) = 0xffffffff;
    }
  }
  return 0;
}

