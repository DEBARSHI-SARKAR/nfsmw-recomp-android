/* speed.exe 0085a5d0 FUN_0085a5d0; analysis pseudocode, not buildable source.
 * calls 00858ab0 FUN_00858ab0
 * calls 0084b1e0 FUN_0084b1e0
 */

uint FUN_0085a5d0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar1 = param_1[0x48];
  uVar5 = 0xffffffff;
  if (param_1[0x46] == 0x10) {
    uVar5 = 0;
    if ((*(int *)(iVar1 + 0x801c) == 0) && (*(int *)(iVar1 + 0x400c) == *(int *)(iVar1 + 0x4010))) {
      if (*(int *)(iVar1 + 0x4010) < 5) {
        if (param_1[0x47] != 0) {
          uVar5 = 0xffffffff;
        }
      }
      else {
        *(undefined4 *)(iVar1 + 0x4014) = 0;
        uVar2 = FUN_00858ab0(param_1);
        *(undefined4 *)(iVar1 + 0x801c) = uVar2;
      }
    }
    if (*(int *)(iVar1 + 0x801c) != 0) {
      uVar5 = *(int *)(iVar1 + 0x4010) - *(int *)(iVar1 + 0x4014);
      if ((int)param_3 < (int)uVar5) {
        uVar5 = param_3;
      }
      puVar6 = (undefined4 *)(*(int *)(iVar1 + 0x4014) + *(int *)(iVar1 + 0x801c));
      puVar7 = param_2;
      for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar3 = uVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      iVar4 = *(int *)(iVar1 + 0x4014) + uVar5;
      *(int *)(iVar1 + 0x4014) = iVar4;
      if (*(int *)(iVar1 + 0x4010) <= iVar4) {
        *(undefined4 *)(iVar1 + 0x4010) = 0;
        *(undefined4 *)(iVar1 + 0x400c) = 0;
        *(undefined4 *)(iVar1 + 0x801c) = 0;
      }
    }
  }
  if (param_1[0x46] == 0x14) {
    uVar5 = FUN_0084b1e0(*param_1,param_2,param_3,0,0,0);
  }
  if ((0 < (int)uVar5) && ((int)uVar5 < (int)param_3)) {
    *(undefined1 *)(uVar5 + (int)param_2) = 0;
    return uVar5;
  }
  return uVar5;
}

