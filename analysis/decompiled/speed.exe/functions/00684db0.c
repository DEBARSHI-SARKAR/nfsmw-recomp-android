/* speed.exe 00684db0 FUN_00684db0; analysis pseudocode, not buildable source.
 * calls 00684c60 FUN_00684c60
 */

undefined4 FUN_00684db0(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = DAT_009357bc;
  if (DAT_009357bc != DAT_009357bc + DAT_009357c4 * 4) {
    do {
      cVar1 = FUN_00684c60();
      if (cVar1 != '\0') {
        return 1;
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 != DAT_009357bc + DAT_009357c4 * 4);
  }
  return 0;
}

