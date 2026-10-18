/* speed.exe 005793f0 FUN_005793f0; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 * calls 00514cc0 FUN_00514cc0
 */

void __thiscall FUN_005793f0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x20) = param_2;
  uVar2 = *(uint *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x24) = param_3;
  for (puVar3 = *(undefined4 **)(param_1 + 8); puVar3 != (undefined4 *)(param_1 + 8);
      puVar3 = (undefined4 *)*puVar3) {
    if ((uVar1 & param_2) == 0 && (uVar2 & param_3) == 0) {
      FUN_00514c70(puVar3[2]);
    }
    else {
      FUN_00514cc0();
    }
  }
  return;
}

