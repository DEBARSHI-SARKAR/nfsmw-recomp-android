/* speed.exe 0078f8c0 FUN_0078f8c0; analysis pseudocode, not buildable source.
 * calls 0078a3a0 FUN_0078a3a0
 */

int FUN_0078f8c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4;
  
  iVar2 = 0;
  local_4 = 0;
  FUN_0078a3a0(&local_4,0x10);
  iVar1 = param_1;
  iVar3 = (int)(short)local_4;
  if (0 < iVar3) {
    do {
      param_1 = 0;
      FUN_0078a3a0(&param_1,8);
      *(undefined1 *)(iVar2 + iVar1) = (undefined1)param_1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  return iVar3;
}

