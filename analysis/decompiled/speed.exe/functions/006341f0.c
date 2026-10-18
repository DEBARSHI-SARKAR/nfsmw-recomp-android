/* speed.exe 006341f0 FUN_006341f0; analysis pseudocode, not buildable source.
 * calls 005d7fe0 FUN_005d7fe0
 * calls 006337e0 FUN_006337e0
 */

undefined4 __thiscall FUN_006341f0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_100 [64];
  
  puVar3 = *(uint **)(param_2 + 4);
  if (puVar3 == (uint *)0x0) {
    return param_3;
  }
  uVar6 = 0;
  if (*puVar3 != 0) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(iVar5 + 0x10 + (int)puVar3);
      if (iVar1 == 0) {
        local_100[uVar6] = param_3;
      }
      else {
        FUN_006337e0(iVar1,*(undefined4 *)(*param_1 + 0x20),param_4,
                     puVar3[2] + *puVar3 * 0x14 + *(int *)(iVar5 + 0x20 + (int)puVar3) + 0x10 +
                     (int)puVar3,*(undefined4 *)(iVar5 + 0x1c + (int)puVar3),
                     local_100 + *(int *)(iVar5 + 0x18 + (int)puVar3));
      }
      puVar3 = *(uint **)(param_2 + 4);
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x14;
    } while (uVar6 < *puVar3);
  }
  piVar2 = *(int **)(param_2 + 4);
  uVar4 = FUN_005d7fe0(piVar2 + *piVar2 * 5 + 4,FUN_00634030,piVar2,local_100);
  return uVar4;
}

