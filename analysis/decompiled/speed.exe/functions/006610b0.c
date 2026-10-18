/* speed.exe 006610b0 FUN_006610b0; analysis pseudocode, not buildable source.
 * calls 007ecf1c FUN_007ecf1c
 * calls 0065f640 FUN_0065f640
 * calls 0065ad80 FUN_0065ad80
 * calls 00463ca0 FUN_00463ca0
 * calls 007ece42 FUN_007ece42
 * calls 007c66d0 _malloc
 * calls 004647c0 FUN_004647c0
 * calls 0065f680 FUN_0065f680
 * calls 0065e760 FUN_0065e760
 * calls 0065f7a0 FUN_0065f7a0
 */

undefined4 __thiscall FUN_006610b0(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar2 = FUN_0065f7a0(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_0065f680(param_2,1,1);
  if ((iVar2 == 0) || (param_2 = *(uint *)(iVar2 + 0xc), (int)param_2 < 0)) {
    param_2 = 0;
  }
  pvVar3 = _malloc((param_2 / 0x18) * 0x18);
  if ((iVar2 != 0) && (-1 < *(int *)(iVar2 + 0xc))) {
    FUN_0065e760(pvVar3,param_2,0,0);
  }
  FUN_0065f640(iVar2);
  *(uint *)(param_1 + 0x18) = param_2 / 0x18;
  *(void **)(param_1 + 0x14) = pvVar3;
  puVar6 = (undefined4 *)(param_1 + 0x79c);
  iVar7 = 0;
  param_1 = param_1 + 0x1c;
  iVar5 = param_1;
  puVar8 = puVar6;
  do {
    FUN_004647c0(iVar5,"%s%d.BIN",param_3,iVar7);
    *puVar8 = 0xffffffff;
    iVar7 = iVar7 + 1;
    puVar8 = puVar8 + 1;
    iVar5 = iVar5 + 0x40;
  } while (iVar7 < 0x1e);
  iVar5 = 0;
  do {
    cVar1 = FUN_007ecf1c(param_1,100);
    if (cVar1 == '\0') break;
    uVar4 = FUN_007ece42(param_1,1,100);
    *puVar6 = uVar4;
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 0x40;
  } while (iVar5 < 0x1e);
  if (iVar2 != 0) {
    if (0 < *(int *)(iVar2 + 0x20)) {
      *(undefined4 *)(iVar2 + 0x1c) = 1;
      return 1;
    }
    FUN_0065ad80();
    FUN_00463ca0(DAT_00925914,iVar2);
  }
  return 1;
}

