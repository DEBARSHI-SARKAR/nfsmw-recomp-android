/* speed.exe 00676ac0 FUN_00676ac0; analysis pseudocode, not buildable source.
 * calls 0066f7f0 FUN_0066f7f0
 */

void FUN_00676ac0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 code *param_10)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_2;
  while( true ) {
    iVar5 = iVar6 * 2 + 2;
    if (param_3 <= iVar5) break;
    iVar1 = param_1 + iVar5 * 0x18;
    cVar4 = (*param_10)(iVar1,iVar1 + -0x18);
    if (cVar4 != '\0') {
      iVar5 = iVar6 * 2 + 1;
    }
    puVar2 = (undefined4 *)(param_1 + iVar5 * 0x18);
    puVar3 = (undefined4 *)(param_1 + iVar6 * 0x18);
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3[2] = puVar2[2];
    puVar3[3] = puVar2[3];
    puVar3[4] = puVar2[4];
    puVar3[5] = puVar2[5];
    iVar6 = iVar5;
  }
  if (iVar5 == param_3) {
    puVar3 = (undefined4 *)(param_1 + -0x18 + param_3 * 0x18);
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0x18);
    *puVar2 = *puVar3;
    puVar2[1] = puVar3[1];
    puVar2[2] = puVar3[2];
    puVar2[3] = puVar3[3];
    puVar2[4] = puVar3[4];
    puVar2[5] = puVar3[5];
    iVar6 = param_3 + -1;
  }
  FUN_0066f7f0(param_1,iVar6,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}

