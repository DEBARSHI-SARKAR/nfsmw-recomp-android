/* speed.exe 00791ff0 FUN_00791ff0; analysis pseudocode, not buildable source.
 * calls 0078a3a0 FUN_0078a3a0
 * calls 00791f70 FUN_00791f70
 * calls 0083f560 FUN_0083f560
 * calls 00735860 FUN_00735860
 */

void FUN_00791ff0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint local_4;
  
  local_4 = 0;
  FUN_0078a3a0(&local_4,0x20);
  iVar2 = FUN_0083f560(*(undefined4 *)(DAT_009b4218 + 0x9c));
  uVar1 = local_4;
  if (DAT_009b421c < local_4) {
    FUN_00735860(*(int *)(iVar2 + 0xc) + local_4);
  }
  DAT_009b421c = uVar1;
  FUN_00791f70(param_1);
  return;
}

