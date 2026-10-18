/* speed.exe 004b8d10 FUN_004b8d10; analysis pseudocode, not buildable source.
 * calls 004aeaa0 FUN_004aeaa0
 * calls 004f0990 FUN_004f0990
 */

void FUN_004b8d10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if ((DAT_008f86f8 != 0) && (DAT_008f86fc != 0)) {
    FUN_004aeaa0(0x40000050);
    FUN_004f0990(param_1,param_2,param_3,0);
  }
  return;
}

