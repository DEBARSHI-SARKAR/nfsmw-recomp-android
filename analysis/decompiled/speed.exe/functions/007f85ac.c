/* speed.exe 007f85ac FUN_007f85ac; analysis pseudocode, not buildable source.
 * calls 007ca8b0 _isspace
 */

void FUN_007f85ac(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *unaff_EDI;
  
  iVar1 = *param_1;
  uVar3 = 0;
  if (*unaff_EDI != 0) {
    do {
      iVar2 = _isspace((int)*(char *)(uVar3 + iVar1));
      if (iVar2 == 0) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *unaff_EDI);
  }
  *param_1 = uVar3 + iVar1;
  *unaff_EDI = *unaff_EDI - uVar3;
  return;
}

