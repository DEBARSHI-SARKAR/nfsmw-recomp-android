/* speed.exe 00634900 FUN_00634900; analysis pseudocode, not buildable source.
 * calls 006285f0 FUN_006285f0
 * calls 00634490 FUN_00634490
 */

void __fastcall FUN_00634900(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*DAT_009203b4 + 8))();
  iVar3 = (**(code **)(*DAT_009203b4 + 0x18))();
  do {
    if (iVar3 == 0) {
      return;
    }
    iVar1 = *(int *)(*(int *)(iVar3 + 4) + 8);
    if (iVar1 == 1) {
      if (*(int *)(iVar3 + 0x10) != 1) {
        if ((*(int *)(param_1 + 0x1840) != 1) || (*(int *)(iVar3 + 8) != 2)) goto LAB_00634997;
        uStack_c = 1;
        uStack_4 = 0;
        iStack_8 = *(int *)(iVar3 + 0x10);
        FUN_006285f0(iVar3,&uStack_c);
      }
LAB_00634991:
      *(undefined1 *)(param_1 + 0x183c) = 0;
    }
    else if ((((iVar1 == 3) && (*(int *)(param_1 + 0x1840) == 3)) &&
             ((*(int *)(iVar3 + 8) == 2 || (*(int *)(iVar3 + 8) == 4)))) &&
            (cVar2 = FUN_00634490(iVar3), cVar2 != '\0')) goto LAB_00634991;
LAB_00634997:
    iVar3 = (**(code **)(*DAT_009203b4 + 0x18))();
  } while( true );
}

