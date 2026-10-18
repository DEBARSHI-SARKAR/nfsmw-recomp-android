/* speed.exe 0066f7f0 FUN_0066f7f0; analysis pseudocode, not buildable source.
 */

void FUN_0066f7f0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 code *param_10)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  
  while (param_3 < param_2) {
    iVar4 = (param_2 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar4 * 0x18);
    cVar3 = (*param_10)(puVar1,&param_4);
    if (cVar3 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + param_2 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    puVar2[4] = puVar1[4];
    puVar2[5] = puVar1[5];
    param_2 = iVar4;
  }
  puVar1 = (undefined4 *)(param_1 + param_2 * 0x18);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1[2] = param_6;
  puVar1[3] = param_7;
  puVar1[4] = param_8;
  puVar1[5] = param_9;
  return;
}

