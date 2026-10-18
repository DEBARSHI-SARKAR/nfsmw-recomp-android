/* speed.exe 0072e9b0 FUN_0072e9b0; analysis pseudocode, not buildable source.
 * calls 0072e480 FUN_0072e480
 */

undefined4 FUN_0072e9b0(void)

{
  int local_4;
  
  FUN_0072e480(&local_4,&stack0x00000004);
  if (local_4 != DAT_009aa4c8) {
    return *(undefined4 *)(local_4 + 0x10);
  }
  return 0;
}

