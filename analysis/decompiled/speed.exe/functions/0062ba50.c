/* speed.exe 0062ba50 FUN_0062ba50; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0062ba50(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  param_1[1] = 0x10;
  *param_1 = &PTR_FUN_008a6a0c;
  if (param_2 == (undefined4 *)0x0) {
    param_1[2] = 0;
    param_1[3] = param_3;
    return;
  }
  uVar2 = param_2[2];
  puVar3 = DAT_00920390;
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar1 = uVar2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  uVar2 = uVar2 + 0xf & 0xfffffff0;
  param_1[1] = param_1[1] + uVar2;
  param_1[2] = DAT_00920390;
  DAT_00920390 = (undefined4 *)((int)DAT_00920390 + uVar2);
  param_1[3] = param_3;
  return;
}

