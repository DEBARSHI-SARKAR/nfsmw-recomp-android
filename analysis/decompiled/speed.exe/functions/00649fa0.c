/* speed.exe 00649fa0 FUN_00649fa0; analysis pseudocode, not buildable source.
 * calls 006cbb40 FUN_006cbb40
 */

char * FUN_00649fa0(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_006cbb40();
  if (iVar1 == 0) {
    return "NA";
  }
  if ((((iVar1 == 1) || (iVar1 == 5)) || (iVar1 == 6)) ||
     (((iVar1 == 7 || (iVar1 == 8)) || (iVar1 == 9)))) {
    return "EU";
  }
  if (iVar1 == 2) {
    return "KO";
  }
  if (iVar1 == 3) {
    return "JP";
  }
  if (iVar1 == 0xc) {
    return "TH";
  }
  if (iVar1 == 0xb) {
    return "CH";
  }
  pcVar2 = "CH";
  if (iVar1 != 4) {
    pcVar2 = "Unknown BUILD_REGION_xxxx";
  }
  return pcVar2;
}

