/* speed.exe 00430d90 FUN_00430d90; analysis pseudocode, not buildable source.
 * calls 00426610 FUN_00426610
 * calls 0042fa40 FUN_0042fa40
 * calls 005d59f0 FUN_005d59f0
 */

undefined4 __fastcall FUN_00430d90(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_c;
  uint local_8;
  undefined4 local_4;
  
  piVar2 = (int *)FUN_00426610(DAT_0092c52c,1);
  if (piVar2 != (int *)0x0) {
    local_4 = 0;
    local_8 = local_8 & 0xffffff00;
    local_c = 0;
    cVar1 = FUN_0042fa40(&local_4,&local_8,&local_c);
    if (cVar1 != '\0') {
      piVar3 = (int *)(**(code **)(*piVar2 + 0xac))();
      piVar4 = (int *)FUN_005d59f0(&LAB_004038e0);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x80))();
        (**(code **)(*piVar3 + 0x54))(local_4,local_8,local_c);
        (**(code **)(*piVar3 + 0x88))();
        (**(code **)(*piVar4 + 4))();
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
        return 1;
      }
    }
  }
  return 0;
}

