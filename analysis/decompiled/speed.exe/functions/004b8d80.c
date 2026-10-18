/* speed.exe 004b8d80 FUN_004b8d80; analysis pseudocode, not buildable source.
 * calls 004aeaa0 FUN_004aeaa0
 * calls 004e0850 FUN_004e0850
 */

void FUN_004b8d80(void)

{
  if ((DAT_008f86f8 != 0) && (DAT_008f86fc != 0)) {
    FUN_004aeaa0(0x40000050);
    FUN_004e0850();
    return;
  }
  return;
}

