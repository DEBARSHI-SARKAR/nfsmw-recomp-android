/* speed.exe 00465a50 FUN_00465a50; analysis pseudocode, not buildable source.
 * calls 00465900 FUN_00465900
 */

void __fastcall FUN_00465a50(int param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 4); puVar1 != (undefined4 *)(param_1 + 4);
      puVar1 = (undefined4 *)*puVar1) {
    FUN_00465900();
  }
  return;
}

