/* speed.exe 008622cc FUN_008622cc; analysis pseudocode, not buildable source.
 */

uint FUN_008622cc(uint param_1)

{
  uint *puVar1;
  
  if ((0xff < (int)param_1) && ((int)(param_1 & 0xff) < DAT_009c3f54)) {
    puVar1 = (uint *)((param_1 & 0xff) * 0x30 + DAT_009c3f58);
    return ~-(uint)(*puVar1 != param_1) & (uint)puVar1;
  }
  return 0;
}

