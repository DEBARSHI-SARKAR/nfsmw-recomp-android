/* speed.exe 005265c0 FUN_005265c0; analysis pseudocode, not buildable source.
 * calls 007ec298 FUN_007ec298
 */

undefined4 FUN_005265c0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x24);
  while (cVar1 == '\0') {
    FUN_007ec298(1);
    cVar1 = *(char *)(param_1 + 0x24);
  }
  (**(code **)(param_1 + 8))(param_1);
  return 0;
}

