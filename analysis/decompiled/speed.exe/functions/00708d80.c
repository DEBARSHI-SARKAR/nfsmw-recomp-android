/* speed.exe 00708d80 FUN_00708d80; analysis pseudocode, not buildable source.
 * calls 004ac0e0 FUN_004ac0e0
 * calls 00708b70 FUN_00708b70
 */

void __thiscall FUN_00708d80(int *param_1,undefined4 *param_2,int param_3,char param_4)

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
  if (param_2 != (undefined4 *)0x0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      if ((undefined4 *)puVar1[2] != puVar1) {
        FUN_00708b70(*puVar1,puVar1[1],(undefined4 *)puVar1[2]);
      }
      puVar1 = puVar1 + 4;
    }
    if (param_4 != '\0') {
      FUN_004ac0e0(param_2);
    }
  }
  return;
}

