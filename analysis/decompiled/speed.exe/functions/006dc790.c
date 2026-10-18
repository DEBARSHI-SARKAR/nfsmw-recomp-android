/* speed.exe 006dc790 FUN_006dc790; analysis pseudocode, not buildable source.
 * calls 006d81f0 FUN_006d81f0
 * calls 006ca3d0 FUN_006ca3d0
 */

void __thiscall FUN_006dc790(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  FUN_006d81f0(param_2);
  iVar3 = 0;
  piVar4 = (int *)(param_1 + 0x4470);
  do {
    if ((*piVar4 != 0) && (piVar1 = (int *)(&DAT_0093df00)[iVar3], piVar1 != (int *)0x0)) {
      iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,&LAB_006d82f0,piVar1,0);
      if (iVar2 < 0) {
        FUN_006ca3d0("ERROR: couldn\'t enumerate objects for wheel on channel %d\n",iVar3);
      }
      else {
        *piVar4 = (&DAT_0093df00)[iVar3];
      }
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 2);
  return;
}

