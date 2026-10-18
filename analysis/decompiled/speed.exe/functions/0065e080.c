/* speed.exe 0065e080 FUN_0065e080; analysis pseudocode, not buildable source.
 * calls 0065dc60 FUN_0065dc60
 * calls 00659260 FUN_00659260
 */

void __thiscall FUN_0065e080(int *param_1,undefined4 *param_2,int param_3,char param_4)

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
        puVar1[1] = 0;
        puVar1[2] = puVar1;
        puVar1[3] = 0;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar2 < (uint)param_1[1]);
  }
  puVar1 = param_2;
  iVar3 = param_3;
  if (param_2 != (undefined4 *)0x0) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      if ((undefined4 *)puVar1[2] != puVar1) {
        FUN_0065dc60(*puVar1,puVar1[1],(undefined4 *)puVar1[2]);
      }
      puVar1 = puVar1 + 4;
    }
    if (param_4 != '\0') {
      (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(param_2,param_3 << 4,0);
    }
  }
  return;
}

