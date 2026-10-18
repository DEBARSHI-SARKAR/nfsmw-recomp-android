/* speed.exe 005e95f0 FUN_005e95f0; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 * calls 005d59f0 FUN_005d59f0
 */

undefined4 __fastcall FUN_005e95f0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  iVar1 = *(int *)(param_1 + 0x1958);
  iVar5 = 0;
  if (0 < iVar1) {
    piVar6 = (int *)(param_1 + 0x18);
    do {
      if (*piVar6 != 0) {
        iVar3 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*piVar6);
        if ((iVar3 != 0) && (*(int *)(iVar3 + 4) != 0)) {
          piVar4 = (int *)FUN_005d59f0(&LAB_005dbd40);
          if (piVar4 != (int *)0x0) {
            cVar2 = (**(code **)(*piVar4 + 4))();
            if (cVar2 == '\0') {
              return 1;
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 0x65;
    } while (iVar5 < iVar1);
  }
  return 0;
}

