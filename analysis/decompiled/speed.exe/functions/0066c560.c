/* speed.exe 0066c560 FUN_0066c560; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 004ab2c0 FUN_004ab2c0
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 */

float10 FUN_0066c560(void)

{
  float fVar1;
  int iVar2;
  
  iVar2 = FUN_00454810(0xf1f5fbc7,0);
  if (iVar2 == 0) {
    iVar2 = FUN_006269b0(0xc);
  }
  iVar2 = FUN_004ab2c0(iVar2,0,0);
  fVar1 = *(float *)(*(int *)(iVar2 + 8) + 0x58);
  FUN_0045a430();
  return (float10)fVar1;
}

