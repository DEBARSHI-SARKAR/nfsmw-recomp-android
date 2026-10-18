/* speed.exe 00826e00 FUN_00826e00; analysis pseudocode, not buildable source.
 * calls 00826838 FUN_00826838
 * calls 00828af7 FUN_00828af7
 * calls 00822476 FUN_00822476
 * calls 00822494 FUN_00822494
 * calls 00828ed3 FUN_00828ed3
 */

void FUN_00826e00(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_1 = FUN_00826ccc;
  param_1[1] = &LAB_00826ded;
  uVar2 = FUN_00822476(*(undefined4 *)(param_2 + 0x1c));
  uVar2 = FUN_00826838(uVar2);
  param_1[0xc] = uVar2;
  uVar1 = FUN_00822494(*(undefined4 *)(param_2 + 0x1c));
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  param_1[8] = 0;
  param_1[0xb] = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[9] = uVar2;
  iVar3 = FUN_00828af7(0xa8);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00828ed3();
  }
  param_1[7] = uVar2;
  return;
}

