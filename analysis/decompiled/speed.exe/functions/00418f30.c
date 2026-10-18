/* speed.exe 00418f30 FUN_00418f30; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 005cc240 FUN_005cc240
 * calls 005eda20 FUN_005eda20
 * calls 005d59f0 FUN_005d59f0
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00418f30(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if ((char)param_1[0x2a] != '\0') {
    piVar2 = (int *)(**(code **)(*param_2 + 0xac))();
    if (piVar2 != (int *)0x0) {
      iVar4 = param_1[0x26];
      (**(code **)(*piVar2 + 0x94))();
      piVar2 = (int *)FUN_00454810(0xc07c8040,iVar4);
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)FUN_006269b0(4);
      }
      param_1[0x3d] = *piVar2;
      uVar3 = (**(code **)(*param_2 + 0x4c))();
      iVar4 = FUN_005cc240(uVar3);
      param_1[0x3e] = iVar4;
      iVar4 = 1;
      if ((float)param_1[0x3b] <= _DAT_00890968) {
        param_1[0x3b] = 0;
        param_1[0x3c] = 1;
      }
      else {
        if (param_1[0x3c] < 3) {
          param_1[0x3c] = param_1[0x3c] + 1;
        }
        iVar4 = param_1[0x3c];
      }
      iVar1 = param_1[0x3d];
      iVar5 = (**(code **)(*param_1 + 0x140))();
      if (iVar5 != 0) {
        piVar2 = (int *)FUN_00454810(0xbef78612,0);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)FUN_006269b0(4);
        }
        param_1[0x3b] = *piVar2;
      }
      if (*(int *)(param_1[0x1d] + 0x1c) != 0) {
        piVar2 = (int *)FUN_005d59f0(&LAB_004037e0);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x38))(iVar1 * iVar4);
        }
      }
    }
    if (param_1[0x21] != 0) {
      piVar2 = (int *)(**(code **)(*param_2 + 4))();
      iVar4 = *(int *)param_1[0x21];
      uVar3 = (**(code **)(*piVar2 + 0x34))();
      iVar4 = (**(code **)(iVar4 + 0x58))(uVar3);
      if (iVar4 != 0) {
        (**(code **)(*(int *)param_1[0x21] + 0x34))();
      }
    }
    iVar4 = param_1[0x4f];
    param_1[0x4f] = iVar4 + 1;
    FUN_005eda20("cops_destroyed_in_pursuit",(float)(iVar4 + 1));
  }
  return;
}

