/* speed.exe 005ca4f0 FUN_005ca4f0; analysis pseudocode, not buildable source.
 * calls 00465a70 FUN_00465a70
 */

uint __fastcall FUN_005ca4f0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x104);
  if ((uVar2 != 0) && (*(int *)(param_1 + 0x108) == 0)) {
    puVar1 = (undefined4 *)FUN_00465a70(uVar2,0);
    uVar2 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *(undefined4 *)(param_1 + 0x110);
      puVar1[1] = *(undefined4 *)(param_1 + 0x104);
      *(undefined4 **)(param_1 + 0x110) = puVar1;
      *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x104);
      *(undefined4 *)(param_1 + 0x118) = 0x10;
      return CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 0x104) >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}

