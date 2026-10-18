/* speed.exe 004ae8b0 FUN_004ae8b0; analysis pseudocode, not buildable source.
 */

int FUN_004ae8b0(void)

{
  uint3 uVar1;
  
  uVar1 = (uint3)(DAT_00911fe8 >> 8);
  if (((DAT_00911fe8 & 0x3b) == 0) && ((DAT_00911fe8 & 0x34800) == 0)) {
    return (uint)uVar1 << 8;
  }
  return CONCAT31(uVar1,1);
}

