/* speed.exe 00452410 FUN_00452410; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00452410(int param_1)

{
  undefined4 *puVar1;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (puVar1 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x14), puVar1 != (undefined4 *)0x0)) {
    return *puVar1;
  }
  return 0;
}

