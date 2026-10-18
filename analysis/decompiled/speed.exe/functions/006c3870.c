/* speed.exe 006c3870 FUN_006c3870; analysis pseudocode, not buildable source.
 * calls 006c37f0 FUN_006c37f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c3870(void)

{
  float fVar1;
  
  fVar1 = _DAT_008f9b58;
  if (((DAT_00982c70 == '\0') && (fVar1 = _DAT_00899d6c, DAT_00925e90 == 6)) &&
     (fVar1 = _DAT_00890968, *(int *)(DAT_009196b4 + 0x30) != 0)) {
    fVar1 = *(float *)(DAT_009196b4 + 0x140);
  }
  FUN_006c37f0((_DAT_008f9464 - _DAT_008f9460) * fVar1 + _DAT_008f9460);
  return;
}

