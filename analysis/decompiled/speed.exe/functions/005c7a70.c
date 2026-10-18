/* speed.exe 005c7a70 FUN_005c7a70; analysis pseudocode, not buildable source.
 * calls 00465a70 FUN_00465a70
 */

undefined4 * __thiscall FUN_005c7a70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  *param_1 = *param_2;
  uVar3 = param_1[1] & 0xfffffffc | param_2[1] & 1;
  param_1[1] = uVar3;
  uVar3 = (param_2[1] ^ uVar3) & 4 ^ uVar3;
  param_1[1] = uVar3;
  uVar3 = (param_2[1] ^ uVar3) & 0xf8 ^ uVar3;
  param_1[1] = uVar3;
  uVar5 = param_2[1];
  uVar3 = (param_2[1] ^ uVar3) & 0xff ^ uVar5;
  param_1[1] = uVar3;
  param_1[2] = param_2[2];
  uVar4 = 0;
  param_1[3] = 0;
  if ((uVar3 & 4) != 0) {
    if (DAT_0091dd7c != 0) {
      uVar4 = 0x40;
    }
    puVar1 = (undefined4 *)FUN_00465a70(uVar5 >> 8,uVar4);
    uVar5 = param_1[1];
    param_1[3] = puVar1;
    puVar6 = (undefined4 *)param_2[3];
    for (uVar3 = uVar5 >> 10; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar1 + 1;
    }
    for (uVar5 = uVar5 >> 8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    return param_1;
  }
  iVar2 = param_2[3];
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    iVar2 = iVar2 + (int)param_2;
  }
  param_1[3] = iVar2;
  return param_1;
}

