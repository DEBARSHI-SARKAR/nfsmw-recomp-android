/* speed.exe 00856430 FUN_00856430; analysis pseudocode, not buildable source.
 * calls 0078af60 thunk_FUN_004655f0
 * calls 0083ffa0 FUN_0083ffa0
 * calls 0084bdf0 FUN_0084bdf0
 * calls 0084bd60 FUN_0084bd60
 */

undefined4 FUN_00856430(int param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar2 = 0;
  if ((param_1 != 0) && (puVar1 = *(undefined4 **)(param_1 + 0x30), puVar1 != (undefined4 *)0x0)) {
    FUN_0084bd60(param_1 + 0xc);
    uVar2 = puVar1[3];
    if (param_4 != (undefined4 *)0x0) {
      puVar6 = param_4;
      for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      FUN_0083ffa0(param_4,puVar1 + 2);
      param_4[0x10] = puVar1[2];
      param_4[0x11] = puVar1[3];
      param_4[0x13] = (uint)*(byte *)(puVar1 + 5);
      iVar3 = puVar1[1];
      if (iVar3 == 0) {
        iVar3 = 1;
      }
      param_4[0x12] = iVar3;
      param_4[0x14] = (uint)*(byte *)((int)puVar1 + 0x15);
    }
    if (param_3 != (uint *)0x0) {
      if ((int)puVar1[4] < (int)*param_3) {
        *param_3 = puVar1[4];
      }
      if (param_2 != (undefined4 *)0x0) {
        uVar5 = *param_3;
        puVar6 = (undefined4 *)((int)puVar1 + 0x16);
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *param_2 = *puVar6;
          puVar6 = puVar6 + 1;
          param_2 = param_2 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)param_2 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          param_2 = (undefined4 *)((int)param_2 + 1);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x30) = *puVar1;
    thunk_FUN_004655f0(puVar1);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    FUN_0084bdf0(param_1 + 0xc);
  }
  return uVar2;
}

