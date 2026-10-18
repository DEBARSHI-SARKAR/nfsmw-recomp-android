/* speed.exe 00676320 FUN_00676320; analysis pseudocode, not buildable source.
 * calls 00454c30 FUN_00454c30
 * calls 007c4b80 FUN_007c4b80
 */

void FUN_00676320(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_00454c30(param_3);
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    FUN_00454c30(param_3);
  }
  uVar1 = FUN_007c4b80();
  puVar2 = *(undefined4 **)(param_5 + 0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_00454c30(param_3);
  }
  else if (param_3 != 0) {
    return;
  }
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = uVar1;
  }
  return;
}

