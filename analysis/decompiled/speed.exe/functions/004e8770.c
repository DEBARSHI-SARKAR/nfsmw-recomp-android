/* speed.exe 004e8770 FUN_004e8770; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 004e52c0 FUN_004e52c0
 * calls 00454810 FUN_00454810
 */

void FUN_004e8770(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00454810(0xee501c6a,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_006269b0(0x10);
  }
  FUN_004e52c0(*puVar1,puVar1[1],puVar1[2],puVar1[3],1,4,0xffffffff,1);
  return;
}

