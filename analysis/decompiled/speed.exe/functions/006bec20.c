/* speed.exe 006bec20 FUN_006bec20; analysis pseudocode, not buildable source.
 */

void FUN_006bec20(undefined4 *param_1)

{
  *(undefined4 *)(DAT_00982ac4 + 4 + DAT_00982ad0 * 0x18) = *param_1;
  *(undefined4 *)(DAT_00982ac4 + 8 + DAT_00982ad0 * 0x18) = param_1[1];
  *(undefined4 *)(DAT_00982ac4 + 0xc + DAT_00982ad0 * 0x18) = param_1[2];
  DAT_00982ad0 = DAT_00982ad0 + 1;
  return;
}

