/* speed.exe 0073ca50 FUN_0073ca50; analysis pseudocode, not buildable source.
 * calls 0073c980 FUN_0073c980
 * calls 0045db30 FUN_0045db30
 * calls 0078eba0 FUN_0078eba0
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0073ca50(void)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  float fStack00000004;
  
  FUN_0073c980();
  iVar2 = FUN_007c4b80();
  fVar3 = (float10)FUN_0045db30(iVar2 / 0x168);
  fStack00000004 = (float)fVar3;
  if ((fVar3 < (float10)_DAT_00890968) && (DAT_009b0fb9 == '\0')) {
    cVar1 = FUN_0078eba0();
    if (cVar1 == '\0') {
      fStack00000004 = 0.0;
    }
  }
  return (float10)_DAT_0089096c - ABS((float10)fStack00000004);
}

