/* speed.exe 006beba0 FUN_006beba0; analysis pseudocode, not buildable source.
 */

void FUN_006beba0(uint param_1)

{
  *(uint *)(DAT_00982ac4 + 0x10 + DAT_00982ad8 * 0x18) =
       (((param_1 >> 0x18) << 8 | param_1 & 0xff) << 8 | param_1 >> 8 & 0xff) << 8 |
       param_1 >> 0x10 & 0xff;
  DAT_00982ad8 = DAT_00982ad8 + 1;
  return;
}

