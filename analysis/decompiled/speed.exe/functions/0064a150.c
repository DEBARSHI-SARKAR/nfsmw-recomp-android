/* speed.exe 0064a150 FUN_0064a150; analysis pseudocode, not buildable source.
 * calls 0056e2c0 FUN_0056e2c0
 */

char * FUN_0064a150(void)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = FUN_0056e2c0();
  pcVar2 = "SLUS_21351";
  if (cVar1 == '\0') {
    pcVar2 = "SLUS_21267";
  }
  return pcVar2;
}

