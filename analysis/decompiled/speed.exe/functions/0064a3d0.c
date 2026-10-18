/* speed.exe 0064a3d0 FUN_0064a3d0; analysis pseudocode, not buildable source.
 * calls 006cbb40 FUN_006cbb40
 */

char * FUN_0064a3d0(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_006cbb40();
  pcVar2 = "NFSMWNA";
  if (iVar1 != 0) {
    pcVar2 = "NFSMW";
  }
  return pcVar2;
}

