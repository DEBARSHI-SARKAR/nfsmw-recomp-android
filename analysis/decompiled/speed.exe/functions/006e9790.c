/* speed.exe 006e9790 FUN_006e9790; analysis pseudocode, not buildable source.
 * calls 00454640 FUN_00454640
 * calls 0045a760 FUN_0045a760
 * calls 00455fd0 FUN_00455fd0
 * calls 00455bc0 FUN_00455bc0
 */

void FUN_006e9790(void)

{
  undefined4 uVar1;
  
  DAT_00988e18 = FUN_00455fd0(0xfb111fef,0x90a4d09a);
  FUN_0045a760(DAT_00988e18);
  uVar1 = FUN_00454640("unknown");
  DAT_00988e14 = FUN_00455fd0(0xfb111fef,uVar1);
  DAT_00988e0c = FUN_00455bc0(0xfb111fef);
  return;
}

