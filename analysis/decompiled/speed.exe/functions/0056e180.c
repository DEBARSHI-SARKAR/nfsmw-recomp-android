/* speed.exe 0056e180 FUN_0056e180; analysis pseudocode, not buildable source.
 * calls 00634370 FUN_00634370
 * calls 00628cb0 FUN_00628cb0
 * calls 00628cc0 FUN_00628cc0
 * calls 00634da0 FUN_00634da0
 */

undefined4 * FUN_0056e180(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  FUN_00634370();
  uVar2 = FUN_00634da0(3);
  puVar7 = param_1;
  if (param_1 + 1 <= param_2) {
    *param_1 = uVar2;
    puVar7 = param_1 + 1;
  }
  param_1 = (undefined4 *)0x0;
  do {
    uVar3 = FUN_00628cc0();
    puVar4 = (undefined4 *)FUN_00628cb0(param_1);
    puVar1 = (undefined4 *)(uVar3 + (int)puVar7);
    if (puVar1 <= param_2) {
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar6 = puVar7;
      for (uVar3 = uVar3 & 3; puVar7 = puVar1, uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    param_1 = (undefined4 *)((int)param_1 + 1);
  } while ((int)param_1 < 0x13);
  return puVar7;
}

