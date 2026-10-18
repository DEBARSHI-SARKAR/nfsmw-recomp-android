/* speed.exe 00608510 FUN_00608510; analysis pseudocode, not buildable source.
 */

uint FUN_00608510(uint *param_1,undefined4 *param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  uVar5 = param_3;
  do {
    if (uVar5 == 0) {
      return 0;
    }
    if (*param_1 == 0) {
      pbVar2 = (byte *)(*(code *)param_1[2])(0,param_1[3],&param_3);
      if ((pbVar2 == (byte *)0x0) || (param_3 == 0)) {
        return uVar5;
      }
      param_1[1] = (uint)pbVar2;
      *param_1 = param_3 - 1;
      bVar1 = *pbVar2;
      param_1[1] = (uint)(pbVar2 + 1);
      if (bVar1 == 0xffffffff) {
        return uVar5;
      }
      *param_1 = param_3;
      param_1[1] = (uint)pbVar2;
    }
    uVar3 = *param_1;
    if (uVar5 <= *param_1) {
      uVar3 = uVar5;
    }
    puVar6 = (undefined4 *)param_1[1];
    puVar7 = param_2;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    param_2 = (undefined4 *)((int)param_2 + uVar3);
    uVar5 = uVar5 - uVar3;
    *param_1 = *param_1 - uVar3;
    param_1[1] = param_1[1] + uVar3;
  } while( true );
}

