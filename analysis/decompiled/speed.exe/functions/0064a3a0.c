/* speed.exe 0064a3a0 FUN_0064a3a0; analysis pseudocode, not buildable source.
 * calls 006cbb40 FUN_006cbb40
 */

char * FUN_0064a3a0(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_006cbb40();
  pcVar2 = "14705";
  if (iVar1 != 0) {
    pcVar2 = "SKU_UNKNOWN";
  }
  return pcVar2;
}

