/* speed.exe 0083f890 FUN_0083f890; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0083f890(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    *(undefined1 *)(iVar2 + 4 + param_1) = 0;
    bVar1 = *param_2;
    while (('/' < (char)bVar1 && ((char)bVar1 < ':'))) {
      param_2 = param_2 + 1;
      *(byte *)(iVar2 + 4 + param_1) = *(char *)(iVar2 + 4 + param_1) * '\n' + (bVar1 & 0xf);
      bVar1 = *param_2;
    }
    if ((int)(char)*param_2 != ((2 < iVar2) - 1 & 0x2e)) break;
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 1;
    if (3 < iVar2) {
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return 0xffffffff;
}

