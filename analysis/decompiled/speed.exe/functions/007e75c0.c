/* speed.exe 007e75c0 __setmode_lk; analysis pseudocode, not buildable source.
 * calls 007cb270 FUN_007cb270
 */

/* Library Function - Single Match
    __setmode_lk
   
   Library: Visual Studio 2003 Debug */

int __setmode_lk(uint param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = (int)param_1 >> 5;
  cVar1 = *(char *)((&DAT_009c5340)[iVar2] + 4 + (param_1 & 0x1f) * 0x24);
  if (param_2 == 0x8000) {
    *(byte *)((&DAT_009c5340)[iVar2] + 4 + (param_1 & 0x1f) * 0x24) =
         *(byte *)((&DAT_009c5340)[iVar2] + 4 + (param_1 & 0x1f) * 0x24) & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      puVar3 = (undefined4 *)FUN_007cb270();
      *puVar3 = 0x16;
      return -1;
    }
    *(byte *)((&DAT_009c5340)[iVar2] + 4 + (param_1 & 0x1f) * 0x24) =
         *(byte *)((&DAT_009c5340)[iVar2] + 4 + (param_1 & 0x1f) * 0x24) | 0x80;
  }
  return (-(uint)(((int)cVar1 & 0x80U) != 0) & 0xffffc000) + 0x8000;
}

