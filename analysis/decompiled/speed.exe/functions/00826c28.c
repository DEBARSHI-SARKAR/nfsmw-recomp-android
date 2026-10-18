/* speed.exe 00826c28 FUN_00826c28; analysis pseudocode, not buildable source.
 * calls 0082885e FUN_0082885e
 * calls 00828773 FUN_00828773
 * calls 00827ac3 FUN_00827ac3
 * calls 00828840 FUN_00828840
 * calls 0082880f FUN_0082880f
 * calls 008287ae FUN_008287ae
 */

void FUN_00826c28(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 local_1c [12];
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  *param_1 = FUN_00826bc5;
  uVar2 = param_2[3];
  param_1[8] = 0;
  param_1[7] = uVar2;
  param_1[9] = param_2[9];
  param_2[10] = &LAB_00826bbd;
  param_1[1] = &LAB_00826c15;
  iVar1 = FUN_00827ac3(0xd68);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00828773();
  }
  param_1[10] = uVar2;
  puVar3 = (undefined4 *)FUN_0082880f(local_1c);
  local_10 = *puVar3;
  uStack_c = puVar3[1];
  local_8 = 1;
  FUN_00828840(&local_10,0);
  FUN_0082885e(1 < (int)param_1[9]);
  FUN_008287ae(*param_2,param_1[7] << 2,param_1[7]);
  return;
}

