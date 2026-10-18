/* speed.exe 0078e890 FUN_0078e890; analysis pseudocode, not buildable source.
 * calls 00465a70 FUN_00465a70
 */

void __fastcall FUN_0078e890(int param_1)

{
  undefined1 *puVar1;
  
  if (*(int *)(param_1 + 0x230) == 0) {
    puVar1 = (undefined1 *)FUN_00465a70(0x84,8);
    *(undefined1 **)(param_1 + 0x230) = puVar1;
    *puVar1 = 0;
  }
  return;
}

