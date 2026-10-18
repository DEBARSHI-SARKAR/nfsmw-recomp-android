/* speed.exe 00426740 FUN_00426740; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005cc240 FUN_005cc240
 */

int * __thiscall FUN_00426740(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)**(int **)(param_1 + 0x128);
  if (piVar2 != *(int **)(param_1 + 0x128)) {
    do {
      piVar3 = (int *)piVar2[2];
      iVar1 = (**(code **)(*piVar3 + 8))();
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x1c) == 0) {
          if (param_2 == 0) {
            return piVar3;
          }
        }
        else if ((param_2 != 0) && (*(int *)(*(int *)(iVar1 + 0x1c) + 4) == *(int *)(param_2 + 4)))
        {
          return piVar3;
        }
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0x128));
  }
  iVar1 = FUN_005cc240("AIPursuit");
  piVar2 = DAT_0092c668;
  do {
    if (piVar2 == (int *)0x0) {
      uVar4 = 0;
LAB_004267b4:
      piVar2 = (int *)FUN_005d59f0(&LAB_004038c0);
      (**(code **)(*(int *)(param_1 + 0x2c) + 8))(piVar2);
      piVar3 = (int *)FUN_005d59f0(&LAB_00402820);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))(uVar4);
      }
      return piVar2;
    }
    if (*piVar2 == iVar1) {
      uVar4 = (*(code *)piVar2[1])(0,0,0);
      goto LAB_004267b4;
    }
    piVar2 = (int *)piVar2[2];
  } while( true );
}

