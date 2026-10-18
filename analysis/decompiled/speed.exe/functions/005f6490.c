/* speed.exe 005f6490 FUN_005f6490; analysis pseudocode, not buildable source.
 * calls 004105e0 FUN_004105e0
 * calls 005f5240 FUN_005f5240
 * calls 00454640 FUN_00454640
 * calls 004519d0 FUN_004519d0
 * calls 005d59f0 FUN_005d59f0
 * calls 005ec3b0 FUN_005ec3b0
 * calls 0041cb10 FUN_0041cb10
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_005f6490(int param_1,char *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_4c [8];
  undefined4 local_2c;
  undefined4 local_28;
  
  pcVar1 = param_2;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    param_2 = (char *)FUN_004519d0(param_2);
    FUN_005ec3b0(local_4c,&param_2);
    if (local_4c[0] == *(int *)(param_1 + 0x90)) {
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      piVar4 = local_4c + 1;
      piVar5 = local_4c + 4;
      local_4c[1] = 0;
      local_4c[2] = 0;
      local_4c[3] = 0;
      local_4c[4] = 0;
      local_4c[5] = 0;
      local_4c[6] = 0x3f800000;
      uVar2 = FUN_00454640(pcVar1,piVar5,piVar4,0,0,0);
      FUN_004105e0(param_1,4,uVar2,piVar5,piVar4,uVar6,uVar7,uVar8);
      uVar2 = FUN_005cc240("PVehicle",local_28,local_4c[7],local_2c,local_28);
      iVar3 = FUN_0041cb10(uVar2);
      if (iVar3 != 0) {
        piVar4 = (int *)FUN_005d59f0(&LAB_004040e0);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x84))();
        }
        piVar4 = (int *)FUN_005f5240(&param_2);
        *piVar4 = iVar3;
      }
    }
  }
  return;
}

