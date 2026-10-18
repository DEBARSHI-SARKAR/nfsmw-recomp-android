/* speed.exe 006bed00 FUN_006bed00; analysis pseudocode, not buildable source.
 */

void FUN_006bed00(undefined4 *param_1)

{
  *(undefined4 *)(DAT_00982ac4 + 4 + DAT_00982ad0 * 0x18) = *param_1;
  *(undefined4 *)(DAT_00982ac4 + 8 + DAT_00982ad0 * 0x18) = param_1[1];
  *(undefined4 *)(DAT_00982ac4 + 0xc + DAT_00982ad0 * 0x18) = param_1[2];
  DAT_00982ad0 = DAT_00982ad0 + 1;
  return;
}

