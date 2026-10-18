/* speed.exe 0050e7f0 FUN_0050e7f0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0050e7f0(int param_1)

{
  if (*(char *)(param_1 + 0x129) != '\0') {
    *(undefined1 *)(param_1 + 0x11c) = 0;
    *(undefined1 *)(param_1 + 0x119) = 1;
    *(undefined1 *)(param_1 + 0x11a) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0050e81b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x40))();
  return;
}

