/* speed.exe 00704570 FUN_00704570; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00704570(void)

{
  int iVar1;
  
  if (DAT_00993cc8 != 0) {
    iVar1 = *(int *)(DAT_00993cc8 + 0x184);
    if ((*(float *)(iVar1 + 0x24) <= *(float *)(DAT_00993cc8 + 0x140)) &&
       (*(float *)(DAT_00993cc8 + 0x140) < *(float *)(iVar1 + 0x28) !=
        (*(float *)(DAT_00993cc8 + 0x140) == *(float *)(iVar1 + 0x28)))) {
      _DAT_00901bc0 =
           _DAT_0089096c -
           (*(float *)(DAT_00993cc8 + 0x140) - *(float *)(iVar1 + 0x24)) /
           (*(float *)(iVar1 + 0x28) - *(float *)(iVar1 + 0x24));
      return;
    }
    if (*(float *)(DAT_00993cc8 + 0x140) < *(float *)(iVar1 + 0x24)) {
      _DAT_00901bc0 = _DAT_0089096c;
      return;
    }
    _DAT_00901bc0 = (float)_DAT_00890968;
  }
  return;
}

