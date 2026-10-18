/* speed.exe 00826b4f FUN_00826b4f; analysis pseudocode, not buildable source.
 * calls 00826838 FUN_00826838
 * calls 00828773 FUN_00828773
 * calls 00827ac3 FUN_00827ac3
 * calls 00822476 FUN_00822476
 * calls 00822494 FUN_00822494
 */

void FUN_00826b4f(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_1 = FUN_008269bf;
  uVar2 = FUN_00822476(*(undefined4 *)(param_2 + 0x1c));
  uVar2 = FUN_00826838(uVar2);
  param_1[9] = uVar2;
  uVar1 = FUN_00822494(*(undefined4 *)(param_2 + 0x1c));
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  param_1[0xc] = *(undefined4 *)(param_2 + 0x24);
  param_1[8] = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = &LAB_00826b3c;
  iVar3 = FUN_00827ac3(0xd68);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00828773();
  }
  param_1[10] = 0;
  param_1[0xd] = uVar2;
  return;
}

