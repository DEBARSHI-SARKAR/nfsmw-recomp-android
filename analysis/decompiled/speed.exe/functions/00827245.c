/* speed.exe 00827245 FUN_00827245; analysis pseudocode, not buildable source.
 * calls 00826838 FUN_00826838
 * calls 00822476 FUN_00822476
 * calls 00822494 FUN_00822494
 */

void FUN_00827245(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  *param_1 = FUN_00827182;
  uVar2 = FUN_00822476(*(undefined4 *)(param_2 + 0x1c));
  uVar2 = FUN_00826838(uVar2);
  param_1[10] = uVar2;
  uVar1 = FUN_00822494(*(undefined4 *)(param_2 + 0x1c));
  param_1[8] = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x31) = uVar1;
  param_1[7] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x18);
  param_1[0xb] = 0;
  return;
}

