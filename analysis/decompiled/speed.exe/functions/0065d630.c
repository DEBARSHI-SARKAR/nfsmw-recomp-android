/* speed.exe 0065d630 FUN_0065d630; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 0065a9c0 FUN_0065a9c0
 */

void __thiscall FUN_0065d630(int *param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *local_8;
  int local_4;
  
  local_4 = 0;
  if (0 < *(short *)((int)param_1 + 0x12)) {
    local_8 = param_1 + 5;
    do {
      iVar1 = *local_8;
      uVar4 = *(uint *)(iVar1 + 0x14);
      puVar5 = (undefined4 *)((*(int *)(iVar1 + 0x10) - param_1[1]) + *param_1);
      puVar6 = *(undefined4 **)(iVar1 + 8);
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      pcVar2 = *(code **)(iVar1 + 0x2c);
      if (pcVar2 != (code *)0x0) {
        if (*(int *)(iVar1 + 0x38) == 0) {
          (*pcVar2)(*(undefined4 *)(iVar1 + 0x30),param_2);
        }
        else {
          (*pcVar2)(*(undefined4 *)(iVar1 + 0x30),param_2,*(undefined4 *)(iVar1 + 0x34));
        }
      }
      FUN_0065a9c0();
      FUN_00463ca0(DAT_00925900,iVar1);
      local_4 = local_4 + 1;
      local_8 = local_8 + 1;
    } while (local_4 < *(short *)((int)param_1 + 0x12));
  }
  return;
}

