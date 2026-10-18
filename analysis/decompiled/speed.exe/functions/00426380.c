/* speed.exe 00426380 FUN_00426380; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 004040f0 FUN_004040f0
 */

int * __thiscall FUN_00426380(int param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (param_2 != 0) {
    piVar3 = (int *)**(int **)(param_1 + 0x94);
    if (piVar3 != *(int **)(param_1 + 0x94)) {
      do {
        piVar4 = (int *)piVar3[2];
        cVar1 = (**(code **)(*piVar4 + 0x88))();
        if (((cVar1 == '\0') || (cVar1 = (**(code **)(*piVar4 + 0x5c))(), cVar1 != '\0')) &&
           (iVar2 = (**(code **)(*piVar4 + 0x50))(), iVar2 == param_2)) {
          return piVar4;
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)(param_1 + 0x94));
    }
    if (param_3 != '\0') {
      local_48 = 0;
      local_44 = 0;
      local_40 = 0x3f800000;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      FUN_004040f0(&local_30);
      iStack_1c = param_2;
      puStack_28 = &local_30;
      puStack_18 = &local_48;
      puStack_14 = &local_3c;
      uStack_2c = 0xa6b47fac;
      uStack_20 = 1;
      uStack_10 = 0;
      uStack_8 = 0;
      uStack_4 = 0;
      iStack_c = param_1 + 0x50;
      iVar2 = FUN_005cc240("PVehicle");
      for (piVar3 = DAT_0092c66c; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
        if (*piVar3 == iVar2) {
          iVar2 = (*(code *)piVar3[1])(local_30,0xa6b47fac,&local_30);
          if (iVar2 == 0) {
            return (int *)0x0;
          }
          (**(code **)(*(int *)(param_1 + 0x2c) + 8))(iVar2);
          piVar3 = (int *)FUN_005d59f0(&LAB_004040e0);
          if (piVar3 == (int *)0x0) {
            return (int *)0x0;
          }
          piVar4 = (int *)(**(code **)(*piVar3 + 0xac))();
          (**(code **)(*piVar4 + 0x8c))();
          *(undefined4 *)(param_1 + 0x8c) = 0;
          return piVar3;
        }
      }
    }
  }
  return (int *)0x0;
}

