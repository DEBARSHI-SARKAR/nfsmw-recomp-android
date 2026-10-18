/* speed.exe 00582c70 FUN_00582c70; analysis pseudocode, not buildable source.
 * calls 006be6d0 FUN_006be6d0
 * calls 006be700 FUN_006be700
 * calls 006be720 FUN_006be720
 * calls 006be740 FUN_006be740
 */

void __fastcall FUN_00582c70(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_006be6d0(*(undefined4 *)(param_1 + 0x20));
  for (puVar1 = *(undefined4 **)(param_1 + 0x18); puVar1 != (undefined4 *)(param_1 + 0x18);
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = *(int *)(param_1 + 0x14);
    if (puVar1[0x2c] != 0) {
      iVar2 = puVar1[0x2c];
    }
    if ((*(byte *)(puVar1 + 0x28) & 4) == 0) {
      FUN_006be700(puVar1 + 4,iVar2,0);
    }
    else {
      FUN_006be720(puVar1 + 4,iVar2,puVar1[0x2d],0);
    }
  }
  FUN_006be740();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  return;
}

