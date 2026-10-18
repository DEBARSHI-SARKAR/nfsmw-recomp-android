/* speed.exe 00517250 FUN_00517250; analysis pseudocode, not buildable source.
 * calls 004fb000 FUN_004fb000
 */

char * FUN_00517250(void)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = FUN_004fb000();
  pcVar2 = "WS_FEAnyMovie.fng";
  if (cVar1 == '\0') {
    pcVar2 = "FEAnyMovie.fng";
  }
  return pcVar2;
}

