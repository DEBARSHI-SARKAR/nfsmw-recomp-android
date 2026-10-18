/* speed.exe 00633cd0 FUN_00633cd0; analysis pseudocode, not buildable source.
 */

void FUN_00633cd0(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  do {
    piVar2 = DAT_00920e4c;
    if (DAT_00920e4c == DAT_00920e4c + DAT_00920e54) {
      return;
    }
    while (*(int *)(*piVar2 + 0x27c) != iVar1) {
      piVar2 = piVar2 + 1;
      if (piVar2 == DAT_00920e4c + DAT_00920e54) {
        return;
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

