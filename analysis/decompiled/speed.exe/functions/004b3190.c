/* speed.exe 004b3190 FUN_004b3190; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 */

undefined4 FUN_004b3190(int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  if (((param_1 == (int *)0x0) || (piVar1 = (int *)*param_1, *piVar1 != 0x4d525453)) ||
     (param_1[2] == 0)) {
    return 0;
  }
  FUN_007ec1bd();
  uVar2 = param_1[3];
  puVar4 = (undefined4 *)piVar1[0x1a];
  uVar6 = piVar1[0x17];
  for (puVar5 = (undefined4 *)((undefined4 *)piVar1[0x1a])[3];
      (puVar5 != (undefined4 *)0x0 && (puVar5[1] != 1)); puVar5 = (undefined4 *)puVar5[3]) {
    uVar3 = puVar5[0x49];
    if (uVar3 < uVar6) {
      if (uVar6 <= uVar2) break;
LAB_004b31ea:
      if (uVar2 < uVar3) break;
    }
    else if (uVar6 <= uVar2) goto LAB_004b31ea;
    puVar4 = puVar5;
    uVar6 = uVar3;
  }
  FUN_007ec1c8();
  return *puVar4;
}

