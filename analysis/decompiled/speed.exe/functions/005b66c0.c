/* speed.exe 005b66c0 FUN_005b66c0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00652b10 thunk_FUN_007c7250
 */

void FUN_005b66c0(void)

{
  char cVar1;
  char *pcVar2;
  char *unaff_ESI;
  undefined4 *unaff_EDI;
  
  thunk_FUN_007c7250(*unaff_EDI);
  *unaff_EDI = 0;
  if (unaff_ESI != (char *)0x0) {
    pcVar2 = unaff_ESI;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = _malloc((size_t)(pcVar2 + (1 - (int)(unaff_ESI + 1))));
    *unaff_EDI = pcVar2;
    do {
      cVar1 = *unaff_ESI;
      unaff_ESI = unaff_ESI + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  return;
}

