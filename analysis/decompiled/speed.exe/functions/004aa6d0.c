/* speed.exe 004aa6d0 FUN_004aa6d0; analysis pseudocode, not buildable source.
 * calls 004a07c0 FUN_004a07c0
 * calls 0048d4d0 FUN_0048d4d0
 * calls 004a85c0 FUN_004a85c0
 * calls 0048f6d0 FUN_0048f6d0
 * calls 0049dc20 FUN_0049dc20
 * calls 004a8700 FUN_004a8700
 */

void FUN_004aa6d0(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = param_1;
  puVar2 = (undefined2 *)FUN_0048d4d0(&param_1);
  switch(*puVar2) {
  case 0:
    FUN_0049dc20(iVar1);
    return;
  case 0xf:
    FUN_0048f6d0(iVar1);
    return;
  case 0x16:
    FUN_004a85c0(iVar1);
    return;
  case 0x17:
    FUN_004a07c0(iVar1 + -0x18);
    return;
  case 0x19:
    FUN_004a8700(iVar1 + -0x10);
  }
  return;
}

