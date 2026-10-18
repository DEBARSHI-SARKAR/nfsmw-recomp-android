/* speed.exe 006f2700 FUN_006f2700; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005cc240 FUN_005cc240
 * calls 006eff90 FUN_006eff90
 */

void FUN_006f2700(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  bool bVar4;
  
  bVar4 = DAT_00988e04 == 1;
  iVar1 = FUN_005cc240("LocalPlayer");
  piVar2 = DAT_00988ec4;
  do {
    if (piVar2 == (int *)0x0) {
LAB_006f2741:
      piVar2 = (int *)FUN_005d59f0(&LAB_006200d0);
      uVar3 = extraout_ECX;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x30))((int)*(char *)(DAT_0091cf90 + 0xc));
        (**(code **)(*piVar2 + 0x18))(0);
        (**(code **)(*piVar2 + 0x28))(1);
        uVar3 = extraout_ECX_00;
      }
      if (bVar4) {
        uVar3 = FUN_005cc240("LocalPlayer",uVar3,0,0,0);
        FUN_006eff90(uVar3);
        piVar2 = (int *)FUN_005d59f0(&LAB_006200d0);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x30))((int)*(char *)(DAT_0091cf90 + 0xd));
          (**(code **)(*piVar2 + 0x18))(1);
          (**(code **)(*piVar2 + 0x28))(2);
        }
      }
      return;
    }
    if (*piVar2 == iVar1) {
      (*(code *)piVar2[1])(0,0,0);
      goto LAB_006f2741;
    }
    piVar2 = (int *)piVar2[2];
  } while( true );
}

