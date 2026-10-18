/* speed.exe 00464690 FUN_00464690; analysis pseudocode, not buildable source.
 * calls 00462830 FUN_00462830
 */

void __thiscall FUN_00464690(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_00462830(&LAB_00460930);
  iVar2 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0xc); puVar1 != (undefined4 *)(param_1 + 0xc);
      puVar1 = (undefined4 *)*puVar1) {
    if (iVar2 < param_3) {
      *(undefined4 **)(param_2 + iVar2 * 4) = puVar1 + 5;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}

