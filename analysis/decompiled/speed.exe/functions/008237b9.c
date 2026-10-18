/* speed.exe 008237b9 FUN_008237b9; analysis pseudocode, not buildable source.
 */

char FUN_008237b9(void)

{
  char *pcVar1;
  int iVar2;
  
  do {
    DAT_009c2538 = DAT_009c2538 + '\x01';
    if (DAT_009c2538 == '\0') {
      DAT_009c2538 = '\x01';
    }
    iVar2 = 0;
    pcVar1 = (char *)(DAT_009c21f4 + 0x26);
    while( true ) {
      if (DAT_009c218c <= iVar2) {
        return DAT_009c2538;
      }
      if ((pcVar1[0x47] != '\0') && (*pcVar1 == DAT_009c2538)) break;
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 0x90;
    }
  } while( true );
}

