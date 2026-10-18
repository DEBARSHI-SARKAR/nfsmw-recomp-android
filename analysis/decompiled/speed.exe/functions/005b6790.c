/* speed.exe 005b6790 FUN_005b6790; analysis pseudocode, not buildable source.
 * calls 00652ac0 _malloc
 */

void __thiscall FUN_005b6790(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar5 = 0;
  *param_1 = param_2;
  if (param_2 != 0) {
    do {
      puVar4 = _malloc(0x14);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4[1] = 0xabadcafe;
        puVar4[2] = 0xabadcafe;
        *puVar4 = &PTR_FUN_008a2c2c;
        puVar4[3] = 0;
        puVar4[4] = 0;
      }
      uVar1 = param_1[4];
      if (puVar4 != (undefined4 *)0x0) {
        if (uVar1 == 0) {
          uVar3 = param_1[3];
          puVar4[1] = uVar3;
          if (uVar3 != 0) {
            *(undefined4 **)(uVar3 + 8) = puVar4;
          }
          puVar4[2] = 0;
          param_1[3] = (uint)puVar4;
        }
        else {
          iVar2 = *(int *)(uVar1 + 4);
          puVar4[1] = iVar2;
          if (iVar2 != 0) {
            *(undefined4 **)(iVar2 + 8) = puVar4;
          }
          puVar4[2] = uVar1;
          *(undefined4 **)(uVar1 + 4) = puVar4;
        }
        if (param_1[4] == uVar1) {
          param_1[4] = (uint)puVar4;
        }
        param_1[2] = param_1[2] + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *param_1);
  }
  return;
}

