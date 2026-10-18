/* speed.exe 00826927 FUN_00826927; analysis pseudocode, not buildable source.
 * calls 00828773 FUN_00828773
 * calls 00827ac3 FUN_00827ac3
 * calls 00828840 FUN_00828840
 * calls 0082880f FUN_0082880f
 * calls 008287ae FUN_008287ae
 */

void FUN_00826927(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 local_1c [12];
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  *param_1 = FUN_0082687b;
  param_1[1] = &LAB_00826914;
  uVar2 = param_2[1];
  param_1[8] = 0;
  param_1[0xb] = uVar2;
  param_1[9] = param_2[4];
  param_1[10] = param_2[5];
  iVar1 = FUN_00827ac3(0xd68);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00828773();
  }
  param_1[7] = uVar2;
  puVar3 = (undefined4 *)FUN_0082880f(local_1c);
  local_10 = *puVar3;
  uStack_c = puVar3[1];
  local_8 = 1;
  FUN_00828840(&local_10,0);
  FUN_008287ae(*param_2,param_1[9] << 2,param_1[9]);
  param_2[10] = &LAB_00826873;
  return;
}

