/* speed.exe 004df460 FUN_004df460; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004df460(void)

{
  float fVar1;
  
  fVar1 = *(float *)(*(int *)(DAT_0091cf90 + 0x10) + 0x4c);
  if (fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968)) {
    return 0xffffffff;
  }
  return (uint)(*(int *)(DAT_00911fa8 + 0x70) != 1);
}

