/* speed.exe 00676210 FUN_00676210; analysis pseudocode, not buildable source.
 * calls 00454c30 FUN_00454c30
 * calls 007c4b80 FUN_007c4b80
 */

void FUN_00676210(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_00454c30(param_2);
  }
  uVar1 = FUN_007c4b80();
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_00454c30(param_2);
  }
  else if (param_2 != 0) {
    return;
  }
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = uVar1;
  }
  return;
}

