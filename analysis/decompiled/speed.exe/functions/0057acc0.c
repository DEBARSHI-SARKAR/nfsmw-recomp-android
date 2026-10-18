/* speed.exe 0057acc0 FUN_0057acc0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 006547a0 FUN_006547a0
 * calls 005d59f0 FUN_005d59f0
 * calls 004647e0 FUN_004647e0
 * calls 00460bf0 FUN_00460bf0
 * calls 0056bb80 FUN_0056bb80
 */

undefined4 FUN_0057acc0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [32];
  
  iVar2 = (**(code **)(*param_1 + 0x20))();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_005d59f0(&LAB_005650b0);
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0xc))();
      if (cVar1 == '\0') {
        FUN_007c4b80();
        FUN_006547a0(auStack_30,4);
        iVar2 = FUN_0056bb80();
        if (iVar2 == 0) {
          iVar2 = FUN_0056bb80();
        }
        FUN_004647e0(auStack_20,0x20,"%s\n%s",iVar2,auStack_30);
        iVar2 = *piVar3;
        uVar4 = FUN_00460bf0("TIMER_ICON",0x609f6b15,3);
        (**(code **)(iVar2 + 4))(auStack_20,0,0x8ab83edb,uVar4);
        return 1;
      }
    }
  }
  return 0;
}

