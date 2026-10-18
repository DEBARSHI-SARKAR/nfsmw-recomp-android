/* speed.exe 00845ed0 FUN_00845ed0; analysis pseudocode, not buildable source.
 * calls 00845e90 FUN_00845e90
 */

char * FUN_00845ed0(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_00845e90();
  if (*pcVar1 != ':') {
    return (char *)0x0;
  }
  pcVar1 = (char *)FUN_00845e90();
  if (*pcVar1 == ',') {
    pcVar1 = pcVar1 + 1;
  }
  return pcVar1;
}

