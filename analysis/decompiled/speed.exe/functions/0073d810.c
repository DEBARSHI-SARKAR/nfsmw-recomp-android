/* speed.exe 0073d810 FUN_0073d810; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_0073d810(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0x18) != 0)) &&
     (puVar1 = (undefined4 *)
               (*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x10) + param_2 * 4) +
               *(int *)(param_1 + 0x18)), puVar1 != (undefined4 *)0x0)) {
    return *puVar1;
  }
  return 0;
}

