/* speed.exe 0086227f FUN_0086227f; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 */

int FUN_0086227f(void)

{
  int iVar1;
  int *unaff_ESI;
  
  FUN_007ec1bd();
  iVar1 = *unaff_ESI;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *unaff_ESI = *(int *)(iVar1 + 4);
  }
  FUN_007ec1c8();
  return iVar1;
}

