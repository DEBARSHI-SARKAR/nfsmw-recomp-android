/* speed.exe 0065b350 FUN_0065b350; analysis pseudocode, not buildable source.
 * calls 0065aff0 FUN_0065aff0
 * calls 00650090 FUN_00650090
 */

uint FUN_0065b350(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = param_3 + 4;
  *param_3 = 0x46465548;
  *(undefined1 *)(param_3 + 1) = 1;
  *(undefined1 *)((int)param_3 + 5) = 0x10;
  *(undefined2 *)((int)param_3 + 6) = 0;
  param_3[2] = param_2;
  iVar1 = FUN_00650090(puVar3,param_1,param_2);
  param_3[3] = iVar1;
  uVar2 = FUN_0065aff0(param_1,param_2,param_3);
  if (iVar1 + 0x10U <= uVar2) {
    param_3[2] = param_2;
    *(undefined2 *)((int)param_3 + 6) = 0;
    *(undefined1 *)((int)param_3 + 5) = 0x10;
    *(undefined1 *)(param_3 + 1) = 1;
    if (param_2 + 0x10 < iVar1 + 0x10U) {
      param_3[3] = param_2;
      uVar2 = param_2 >> 2;
      *param_3 = 0x57574152;
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      return param_3[3] + 0x10;
    }
    *param_3 = 0x46465548;
    iVar1 = FUN_00650090(puVar3,param_1,param_2);
    param_3[3] = iVar1;
    uVar2 = iVar1 + 0x10;
  }
  return uVar2;
}

