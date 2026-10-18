/* speed.exe 0060a5b0 FUN_0060a5b0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005e8bf0 FUN_005e8bf0
 * calls 005dc6b0 FUN_005dc6b0
 */

void FUN_0060a5b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)(**(code **)(*param_1 + 4))();
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x20))(), iVar2 != 0)) {
    uVar3 = FUN_005e8bf0(piVar1);
    piVar1 = (int *)FUN_005d59f0(&LAB_004037e0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x4c))(uVar3);
    }
    piVar1 = (int *)FUN_005d59f0(&LAB_00402840);
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 8))();
      FUN_005dc6b0(iVar2 + 0x1156);
    }
  }
  return;
}

