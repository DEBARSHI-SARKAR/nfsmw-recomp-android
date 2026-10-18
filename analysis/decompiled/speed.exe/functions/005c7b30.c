/* speed.exe 005c7b30 FUN_005c7b30; analysis pseudocode, not buildable source.
 * calls 00465a70 FUN_00465a70
 */

uint * __thiscall
FUN_005c7b30(uint *param_1,undefined4 *param_2,int param_3,uint param_4,uint param_5,uint param_6,
            uint param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_6 != 0xffffffff) {
    param_5 = param_5 & 0xffff0000 | param_6;
  }
  *param_1 = param_5;
  param_1[2] = param_4;
  uVar3 = 0;
  param_1[3] = 0;
  iVar1 = DAT_0091dd7c;
  param_1[1] = (param_3 << 5 | param_7 & 0x1f) << 3 | (uint)(param_6 != 0xffffffff) | 4;
  if (iVar1 != 0) {
    uVar3 = 0x40;
  }
  puVar2 = (undefined4 *)FUN_00465a70((param_3 << 5 & 0x1fffffffU) >> 5,uVar3);
  param_1[3] = (uint)puVar2;
  if (param_2 != (undefined4 *)0x0) {
    uVar5 = param_1[1];
    for (uVar4 = uVar5 >> 10; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar5 = uVar5 >> 8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  return param_1;
}

