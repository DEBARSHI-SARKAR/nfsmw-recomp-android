/* speed.exe 0051c120 FUN_0051c120; analysis pseudocode, not buildable source.
 * calls 0056cd20 FUN_0056cd20
 */

void __fastcall FUN_0051c120(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar1 + 0x60) = 0x1052ed5b;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar1);
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  }
  FUN_0056cd20((float)*(int *)(*DAT_0091ca20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x0051c179. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x5c) + 0x24))();
  return;
}

