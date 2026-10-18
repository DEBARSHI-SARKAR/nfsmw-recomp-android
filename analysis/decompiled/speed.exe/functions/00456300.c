/* speed.exe 00456300 FUN_00456300; analysis pseudocode, not buildable source.
 * calls 00659260 FUN_00659260
 * calls 00456220 FUN_00456220
 */

void __thiscall FUN_00456300(int *param_1,undefined4 *param_2,int param_3,char param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_1[1] != 0) {
    iVar3 = 0;
    do {
      puVar1 = (undefined4 *)(*param_1 + iVar3);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = puVar1;
        puVar1[2] = 0;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar2 < (uint)param_1[1]);
  }
  puVar1 = param_2;
  iVar3 = param_3;
  if (param_2 != (undefined4 *)0x0) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      if ((undefined4 *)puVar1[1] != puVar1) {
        FUN_00456220(*puVar1,(undefined4 *)puVar1[1]);
      }
      puVar1 = puVar1 + 3;
    }
    if (param_4 != '\0') {
      (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(param_2,param_3 * 0xc,0);
    }
  }
  return;
}

